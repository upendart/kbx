<?php
/**
 * Handler for module requests.
 *
 * This web page receives requests for web-pages hosted by modules, and directs them to
 * the RequestHandler in the module.
 *
 * @author Olav Morken, UNINETT AS.
 * @package simpleSAMLphp
 */
ini_set('display_errors', 1);
ini_set('display_startup_errors', 1);
error_reporting(E_ALL);
require_once('_include.php');

// Hack added by CLB 04152016 - ToDo: need to evaluate a better method as this is
// not a standard way to handle
if(isset($_POST['SAMLResponse'])){
	//session_start();
	//$_SESSION['SAMLResponse'] = $_POST;
	$tmp = base64_decode($_POST['SAMLResponse']);
	//print htmlentities($tmp)."<br><br>";
	
	$UniqueResponseID = explode('default-sp" ID="', $tmp);
	$UniqueResponseID = explode('"', $UniqueResponseID[1]);
	$UniqueResponseID = $UniqueResponseID[0];
	$URIDCheck = substr($UniqueResponseID,0,2);

	$UniqueResponseSessID = explode('SessionIndex="', $tmp);
	$UniqueResponseSessID = explode('"', $UniqueResponseSessID[1]);
	$UniqueResponseSessID = $UniqueResponseSessID[0];
	
	if($UniqueResponseSessID!=''){
		$URIDCheck = $UniqueResponseSessID;
		$UniqueResponseID = $UniqueResponseSessID;
	}
	
	//$ResponseReplaceForGO = explode('protocol" Destination="', $tmp);
	//$ResponseReplaceForGO = explode('"', $ResponseReplaceForGO[1]);
	//$ResponseReplaceForGO = $ResponseReplaceForGO[0];
	
	//$tmp_clear_second_sig_one = explode('<ds:Signature xmlns:ds="http://www.w3.org/2000/09/xmldsig#">', $tmp);
	//$tmp_clear_second_sig_two = explode('</ds:Signature>', $tmp_clear_second_sig_one[1]);
	//$tmp = str_replace('<ds:Signature xmlns:ds="http://www.w3.org/2000/09/xmldsig#">'.$tmp_clear_second_sig_two[0].'</ds:Signature>', '', $tmp);
	
	// replace destination
	//$tmp = str_replace('https://www.amalgamatedbank.com/samlsso/module.php/saml/sp/saml2-acs.php/default-sp', 'https://abnyacs.infinity.com/CSA_ACS/ABNY/acs/POST.do?ApplicationID=GO&amp;TenantID=abny', $tmp);
	// replace relay state
	//$tmp = str_replace('https://www.amalgamatedbank.com', 'https://abnyacs.infinity.com', $tmp);
	
	//global $key;
	//$UniqueResponseID = $key;
	
	if($URIDCheck=='id'){
		$assert_type = 'saml.AssertionReceived';
	} else {
		$assert_type = 'session';
	}
	
	$tmp = base64_encode($tmp);
	
	$full_response = htmlspecialchars($_POST['SAMLResponse'], ENT_QUOTES, 'UTF-8');
	
	//$full_response_global_office = htmlspecialchars($tmp, ENT_QUOTES, 'UTF-8');
	$full_response_global_office = htmlspecialchars($_POST['SAMLResponse'], ENT_QUOTES, 'UTF-8');
		
	$con=mysqli_connect('10.20.203.100','drupal_admin','spartan2014','amalgamated_bank_db');
	
	$query = "INSERT INTO simpleSAMLphp_assertstore SET _type='$assert_type', _key='$UniqueResponseID', _value='$full_response', _global_office_value='$full_response_global_office'";
	mysqli_query($con,$query);
	
	//die();
}

/* Index pages - filenames to attempt when accessing directories. */
$indexFiles = array('index.php', 'index.html', 'index.htm', 'index.txt');

/* MIME types - key is file extension, value is MIME type. */
$mimeTypes = array(
	'bmp' => 'image/x-ms-bmp',
	'css' => 'text/css',
	'gif' => 'image/gif',
	'htm' => 'text/html',
	'html' => 'text/html',
	'shtml' => 'text/html',
	'ico' => 'image/vnd.microsoft.icon',
	'jpe' => 'image/jpeg',
	'jpeg' => 'image/jpeg',
	'jpg' => 'image/jpeg',
	'js' => 'text/javascript',
	'pdf' => 'application/pdf',
	'png' => 'image/png',
	'svg' => 'image/svg+xml',
	'svgz' => 'image/svg+xml',
	'swf' => 'application/x-shockwave-flash',
	'swfl' => 'application/x-shockwave-flash',
	'txt' => 'text/plain',
	'xht' => 'application/xhtml+xml',
	'xhtml' => 'application/xhtml+xml',
	);

try {

	if (empty($_SERVER['PATH_INFO'])) {
		throw new SimpleSAML_Error_NotFound('No PATH_INFO to module.php');
	}	

	$url = $_SERVER['PATH_INFO'];
	assert('substr($url, 0, 1) === "/"');

	/* Clear the PATH_INFO option, so that a script can detect whether it is called
	 * with anything following the '.php'-ending.
	 */
	unset($_SERVER['PATH_INFO']);

	$modEnd = strpos($url, '/', 1);
	if ($modEnd === FALSE) {
		/* The path must always be on the form /module/. */
		throw new SimpleSAML_Error_NotFound('The URL must at least contain a module name followed by a slash.');
	}

	$module = substr($url, 1, $modEnd - 1);
	$url = substr($url, $modEnd + 1);
	if ($url === FALSE) {
		$url = '';
	}

	if (!SimpleSAML_Module::isModuleEnabled($module)) {
		throw new SimpleSAML_Error_NotFound('The module \'' . $module .
			'\' was either not found, or wasn\'t enabled.');
	}

	/* Make sure that the request isn't suspicious (contains references to current
	 * directory or parent directory or anything like that. Searching for './' in the
	 * URL will detect both '../' and './'. Searching for '\' will detect attempts to
	 * use Windows-style paths.
	 */
	if (strpos($url, '\\') !== FALSE) {
		throw new SimpleSAML_Error_BadRequest('Requested URL contained a backslash.');
	} elseif (strpos($url, './') !== FALSE) {
		throw new SimpleSAML_Error_BadRequest('Requested URL contained \'./\'.');
	}

	$moduleDir = SimpleSAML_Module::getModuleDir($module) . '/www/';

	/* Check for '.php/' in the path, the presence of which indicates that another php-script
	 * should handle the request.
	 */
	for ($phpPos = strpos($url, '.php/'); $phpPos !== FALSE; $phpPos = strpos($url, '.php/', $phpPos + 1)) {

		$newURL = substr($url, 0, $phpPos + 4);
		$param = substr($url, $phpPos + 4);

		if (is_file($moduleDir . $newURL)) {
			/* $newPath points to a normal file. Point execution to that file, and
			 * save the remainder of the path in PATH_INFO.
			 */
			$url = $newURL;
			$_SERVER['PATH_INFO'] = $param;
			break;
		}
	}

	$path = $moduleDir . $url;

	if ($path[strlen($path)-1] === '/') {
		/* Path ends with a slash - directory reference. Attempt to find index file
		 * in directory.
		 */
		foreach ($indexFiles as $if) {
			if (file_exists($path . $if)) {
				$path .= $if;
				break;
			}
		}
	}

	if (is_dir($path)) {
		/* Path is a directory - maybe no index file was found in the previous step, or
		 * maybe the path didn't end with a slash. Either way, we don't do directory
		 * listings.
		 */
		throw new SimpleSAML_Error_NotFound('Directory listing not available.');
	}

	if (!file_exists($path)) {
		/* File not found. */
		SimpleSAML_Logger::info('Could not find file \'' . $path . '\'.');
		throw new SimpleSAML_Error_NotFound('The URL wasn\'t found in the module.');
	}

	if (preg_match('#\.php$#D', $path)) {
		/* PHP file - attempt to run it. */
		$_SERVER['SCRIPT_NAME'] .= '/' . $module . '/' . $url;
		require($path);
		exit();
	}

	/* Some other file type - attempt to serve it. */

	/* Find MIME type for file, based on extension. */
	$contentType = NULL;
       if (preg_match('#\.([^/\.]+)$#D', $path, $type)) {
		$type = strtolower($type[1]);
		if (array_key_exists($type, $mimeTypes)) {
			$contentType = $mimeTypes[$type];
		}
	}

	if ($contentType === NULL) {
		/* We were unable to determine the MIME type from the file extension. Fall back
		 * to mime_content_type (if it exists).
		 */
		if (function_exists('mime_content_type')) {
			$contentType = mime_content_type($path);
		} else {
			/* mime_content_type doesn't exist. Return a default MIME type. */
			SimpleSAML_Logger::warning('Unable to determine mime content type of file: ' . $path);
			$contentType = 'application/octet-stream';
		}
	}

	$contentLength = sprintf('%u', filesize($path)); /* Force filesize to an unsigned number. */

	header('Content-Type: ' . $contentType);
	header('Content-Length: ' . $contentLength);
	header('Cache-Control: public,max-age=86400');
	header('Expires: ' . gmdate('D, j M Y H:i:s \G\M\T', time() + 10*60));
	header('Last-Modified: ' . gmdate('D, j M Y H:i:s \G\M\T', filemtime($path)));

	readfile($path);
	exit();

} catch(SimpleSAML_Error_Error $e) {

	$e->show();

} catch(Exception $e) {

	$e = new SimpleSAML_Error_Error('UNHANDLEDEXCEPTION', $e);
	$e->show();

}

?>