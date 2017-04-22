<?php
	drupal_add_js('
		(function ($) {
			$(document).ready(function () {   
				$("#lgbt_center").click(function () {
				    $("#selected_charity").val("lgbt_center");
					$("#selected_charity_full_name").val("The Center");
					$("#charity_signup_form").submit();
				})
				
				$("#ywca").click(function () {
				    $("#selected_charity").val("ywca");
					$("#selected_charity_full_name").val("YWCA");
					$("#charity_signup_form").submit();
				})
				
				$("#lcv").click(function () {
				    $("#selected_charity").val("lcv");
					$("#selected_charity_full_name").val("League of Conservation Voters");
					$("#charity_signup_form").submit();
				})
				
				$("#color_of_change").click(function () {
				    $("#selected_charity").val("color_of_change");
					$("#selected_charity_full_name").val("Color of Change");
					$("#charity_signup_form").submit();
				})
				
				$("#jobs_with_justice").click(function () {
				    $("#selected_charity").val("jobs_with_justice");
					$("#selected_charity_full_name").val("Jobs with Justice");
					$("#charity_signup_form").submit();
				})
				
				$("#moveon").click(function () {
				    $("#selected_charity").val("moveon");
					$("#selected_charity_full_name").val("MoveOn.org");
					$("#charity_signup_form").submit();
				}) 
			})
		})(jQuery);', 'inline');
?>