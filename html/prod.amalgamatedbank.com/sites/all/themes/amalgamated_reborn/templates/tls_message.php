<!--  ***** TLS Message Area ***** -->
<section id="tls_fail_message_area" style="display:none;" class="tls-message-area">
    <div class="container">
        <div class="row r1">
			<div class="inner_tls_message_area">
	 			
				<h2>IMPORTANT INFORMATION</h2>
				<h3>Your browser is in urgent need of an update.</h3>
				<!-- <p id="tls_read_more"><a class="learn_more">Read more</a></p>
				<p id="tls_read_less" style="display:none;"><a class="learn_more">Read less</a></p> -->
        	 </div>
		</div>
    </div><!-- /.container -->
</section><!-- /.content -->

<!-- If the user clicked the Continue to Amalgamated link, set the bypass_tls_message session to 1 -->
<?php 
	if(isset($_SESSION['bypass_tls_message'])){
		unset($_SESSION['bypass_tls_message'] );
	}
	
	if(isset($_GET["tls_continue"]) && $_GET["tls_continue"] == 1){
		$_SESSION["bypass_tls_message"] = 1;
	} elseif(!isset($_SESSION['bypass_tls_message'])){
		$_SESSION["bypass_tls_message"] = 0;
	}
	//echo $_SESSION["bypass_tls_message"];
?>

<!--- Browser validation: TLS 1.2 --->	
<script>
   window.parseTLSinfo = function(data) {
     var tls_version = data.tls_version.split(' ')[1];
  	 var tls_status = (tls_version < 1.2) ? 0 : 1;
  
  	 var tls_fail_message_area = document.getElementById('tls_fail_message_area');
  
  	//if TLS status failed, show warning box
  	if (tls_status == 0) {
		//change conditional statement back to 0   
		tls_fail_message_area.style.display = 'block';
		
		//Redirect the user to the outdated-browser-warning
		<?php if((strpos($_SERVER['REQUEST_URI'], 'outdated-browser-warning') == false) && ($_SESSION["bypass_tls_message"] == 0)): ?>
			window.location.replace("outdated-browser-warning");
		<?php endif; ?> 
	} 					 
   };							
</script>

<script src="https://www.howsmyssl.com/a/check?callback=parseTLSinfo"></script>

<section id="tls_fail_message_area_bottom" class="tls-message-area-bottom" style="display:none;">
	<div class="container">
    	<div class="row r1">
			<div class="inner_tls_message_area">
				<p>As of March 31, 2016, Amalgamated Bank is updating its security protocol and you will no longer have access to amalgamatedbank.com, Online Banking, or any other internet-based services you access through amalgamatedbank.com unless you update your browser. Please update your browser to the latest version of Firefox, Google Chrome, Internet Explorer, or Safari as soon as possible. Trust clients should consult their relationship manager before updating their browser. Please be advised that, if you do not update your browser before March 31, 2016, you will lose access to amalgamatedbank.com from this computer. For more information about the browser versions that will be supported after March 31, 2016 as well as a list of frequently asked questions, please <a href="https://www.amalgamatedbank.com/important-information-about-your-access-amalgamatedbankcom">click here</a>, or call us at (800) 662-0860.</p>
          	</div>
		</div>
	</div><!-- /.container -->
</section><!-- /.content -->