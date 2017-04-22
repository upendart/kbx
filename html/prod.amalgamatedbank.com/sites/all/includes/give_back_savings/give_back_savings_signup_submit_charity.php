<?php
	drupal_add_js('
		(function ($) {
			$(document).ready(function () {   
				$("#roosevelt").click(function () {
					$("#charity_signup_form_roosevelt").submit();
				})
				
				$("#ultraviolet").click(function () {
					$("#charity_signup_form_ultraviolet").submit();
				})
				
				$("#roosevelt_top").click(function () {
					$("#charity_signup_form_roosevelt_top").submit();
				})
				
				$("#ultraviolet_top").click(function () {
					$("#charity_signup_form_ultraviolet_top").submit();
				})
				
				$("#online_savings").click(function () {
					$("#online_savings_signup_form").submit();
				})
				
				//***** Calculating Earning and Donation *****
				$("#calculate").click(function () {
					
					var balance = $("#balance-field").val()
					
					if(balance.length > 0) {
						//remove all non numeric characters	
						balance = balance.replace(/[^\d.-]/g, "");
						
						//set and calculate interest
						//alternative way of calculating interest
						//interest = balance * (Math.pow((1+0.007/365), 365) - 1);
						
						//Not using this formula for now because it is based off of compounding
						//interest = balance * Math.pow((1+0.007/365), 365) - balance;
						
						interest = balance * .007;
						donation = interest/2;
						
						interest = (interest).toFixed(2);
						donation = (donation).toFixed(2);
						
						//add comma set the Earning and Donation field
						interest = formatNumber(interest);
						donation = formatNumber(donation);
						
						$("#earning-field").val("$" + interest);
						$("#donation-field").val("$" + donation);
						
						//Set the appropriate width of text boxes
						if(interest.length <= 5) {
							$("#earning-field").css("width",interest.length*29);
							$("#donation-field").css("width",interest.length*29);
						} else if (interest.length == 6) {
							$("#earning-field").css("width",interest.length*26);
							$("#donation-field").css("width",interest.length*26);
						}
						else if (interest.length >= 7) {
							$("#earning-field").css("width",interest.length*24);
							$("#donation-field").css("width",interest.length*24);
						}
					}//end if balance.length > 0
					else {
						alert("Please enter a balance before calculating the earning and donation.");
					}
				})
	
			})
		})(jQuery);', 'inline');
?>

<script>
	//function to add commas and dollar sign to textboxes
	function CommaMoney(Num) {
        // From http://stackoverflow.com/questions/25736940/auto-add-comma-in-text-box-with-numbers
		Num += '';
        
		//remove all non digit characters except decimal
		Num = Num.replace(/[^\d.-]/g, '');
		
		//remove leading zero from number
		Num = Num.replace(/^0+/, '');
		
		//remove - character
		Num = Num.replace('-', '');
		
		Num = Num.replace(',', ''); Num = Num.replace(',', ''); Num = Num.replace(',', '');
        Num = Num.replace(',', ''); Num = Num.replace(',', ''); Num = Num.replace(',', '');
        x = Num.split('.');
        x1 = x[0];
        x2 = x.length > 1 ? '.' + x[1] : '';
        var rgx = /(\d+)(\d{3})/;
        while (rgx.test(x1))
            x1 = x1.replace(rgx, '$1' + ',' + '$2');
        
		var total_num = x1 + x2;
		total_num = total_num.replace("$","");
		
		//add dollar sign back in
		if(total_num == "") {
			total_num = total_num;
		} else {
			total_num = '$' + total_num;
		}

		return total_num;
    }
	
	
	function formatNumber (num) {
	    return num.toString().replace(/(\d)(?=(\d{3})+(?!\d))/g, "$1,")
	}

</script>