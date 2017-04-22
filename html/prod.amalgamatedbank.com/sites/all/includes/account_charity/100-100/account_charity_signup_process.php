<?php
	
	$curdate = date("m/d/Y");
	$date_to_forward = date("m/d/Y",strtotime("07/01/2016"));
	
	if($curdate >= $date_to_forward){
		//header("Location: /");
	}
	
	//default variables 
	$invalid_user_email = 0;
	$invalid_selected_charity = 0;
		
	if(isset($_POST["form_submitted"]) && ($_POST["form_submitted"] == 1)) {


		$user_email = $_POST["user_email"];
		$selected_charity = $_POST["selected_charity"];
		
		if (!filter_var($user_email, FILTER_VALIDATE_EMAIL)) {
			$invalid_user_email = 1;
		}//End if user_email is invalid
		
		elseif($selected_charity == "") {
			$invalid_selected_charity = 1;
		}
		
		//****** If a valid email address was entered, send email, enter DB record and forward user to proper location.  Not using mysqli_real_escape_string because not working in Drupal.  Instead doing a Drupal insert. 
		else {
				//Get URL query string
				$the_query_string = $_SERVER['QUERY_STRING'];
				//$the_query_string = mysql_real_escape_string($the_query_string);
				
			   //Save DB record				
				$result = db_insert("custom_account_charity_signup")
							->fields(array(
								'email' 		=> $_POST["user_email"],
								'charity_key'	=> $_POST['selected_charity'],
								'charity_name'	=> $_POST['selected_charity_full_name'], 
								'is_150_50'		=> 0,
								'is_100_100'	=> 1,
								'url_query_string'	=> $the_query_string, 
							))
							->execute();
			   
			    //send an email record of the charity selection
				$from = "jason@nylontechnology.com";
			    $to = "jason@nylontechnology.com";
			    $subject = "MoveOn.org 100-100 Account Signup";
			    $message = "The following user has provided their email and clicked Open an Account";
			    $headers = "From:" . $from;
			    mail($to,$subject,$message, $headers);
							
				//forward user to Oflows.  Append a string of UTMs if none are passed.
				if($_SERVER['QUERY_STRING'] == "") {
					$the_query_string = "?utm_source=mail&utm_medium=whitemail&utm_content=20160328_x_1&utm_campaign=5150";
				} else {
					$the_query_string = "?" . $_SERVER['QUERY_STRING'];
				}
				
				
				//Put this back once UTM variables are put back in place
				//header('Location: https://openaccount.amalgamatedbank.com:443/oflows/web/prodstart.seam' . $the_query_string . '&page=eligibility&prod=conv_checking&of_source=a&of_medium=a&of_campaign=' . $_POST["selected_charity"] );
				
				if(isset($charity_key)) {
					header('Location: https://openaccount.amalgamatedbank.com:443/oflows/web/start.seam' . '?prod=conv_plus&of_source=a&of_medium=a&of_campaign=MoveOn_100');
				} else {
					header('Location: https://openaccount.amalgamatedbank.com:443/oflows/web/prodstart.seam' . '?page=eligibility&prod=conv_plus&of_source=a&of_medium=a&of_campaign=' . $_POST["selected_charity"] );
				}
				
		}//end if user email is valid
		
	}// End if form submitted 
	 
?>
