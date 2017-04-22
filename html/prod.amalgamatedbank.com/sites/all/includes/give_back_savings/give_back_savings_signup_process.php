<?php
	
	//default variables 
	$invalid_user_email = 0;
	$invalid_selected_charity = 0;
	$page_type = 0;
	$selected_charity = "";
		
	if(isset($_POST["form_submitted"]) && ($_POST["form_submitted"] == 1)) {


		$user_email = $_POST["user_email"];
		$selected_charity = $_POST["selected_charity"];
		$page_type = $_POST["page_type"];
		
		$page_url = $_SERVER['REQUEST_URI'];
		$page_url = str_replace('#select_organization','',$page_url);
		$page_url = str_replace('#select_uv','',$page_url);
		$page_url = str_replace('#select_ri','',$page_url);
		$page_url = str_replace('#enter_email','',$page_url);
		
		if (!filter_var($user_email, FILTER_VALIDATE_EMAIL)) {
			$invalid_user_email = 1;
		}//End if user_email is invalid
		
		elseif($selected_charity == "") {
			$invalid_selected_charity = 1;
		}
		
		//****** If a valid email address was entered, send email, enter DB record and forward user to proper location.  Not using mysqli_real_escape_string because not working in Drupal.  Instead doing a Drupal insert. 
		else {
		
			   //Encrypt the email address
			   if(get_environment() == 'local'){
			   	$key_path = realpath(__DIR__ . '/../..') . '\enc_key.txt';
			   }
			   elseif(get_environment() == 'staging') {
			   	$key_path = realpath(__DIR__ . '/../..') . '\enc_key.txt';
			   }
			   elseif(get_environment() == 'production') {
			   	$key_path = realpath(__DIR__ . '/../../..') . '\enc_key.txt';
			   }
			   
			   $encryption_key = file_get_contents($key_path);
			   $encrypted_email = mc_encrypt($_POST["user_email"], encryption_key);
			   
			   //Save DB record
				$result = db_insert("custom_give_back_savings_signup")
							->fields(array(
								'email' 		=> $encrypted_email,
								'charity_key'	=> $_POST['selected_charity'],
								'charity_name'	=> $_POST['selected_charity_full_name'], 
								'url_query_string'	=> $page_url,
							))
							->execute();
			   	
				//Set the Campaign
				if($_POST["selected_charity"] == 'ri'){
					$the_campaign = 'A01';
				}
				elseif($_POST["selected_charity"] == 'uv') {
					$the_campaign = 'A02';
				}
				
				
				if($_POST["page_type"] == "individual") {
					header('Location: https://openaccount.amalgamatedbank.com:443/oflows/web/prodstart.seam' . '?page=eligibility&prod=give_back_savings&of_source=' . $_POST["selected_charity"] . '&of_medium=' . $_POST["selected_charity"] . '&of_campaign=' . $the_campaign);
				} elseif($_POST["page_type"] == "landing") {
					header('Location: https://openaccount.amalgamatedbank.com:443/oflows/web/prodstart.seam' . '?page=eligibility&prod=give_back_savings&of_source=ab&of_medium=' . $_POST["selected_charity"] . '&of_campaign=' . $the_campaign);
				} elseif($_POST["page_type"] == "online_savings") {
					header('Location: https://openaccount.amalgamatedbank.com/oflows/web/prodstart.seam?page=eligibility&prod=online_savings');
				}
		}//end if user email is valid
		
	}// End if form submitted 
	 
?>
