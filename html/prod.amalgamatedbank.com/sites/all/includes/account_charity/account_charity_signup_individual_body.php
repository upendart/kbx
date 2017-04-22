<?php if(!isset($_POST["user_email"])){
		$_POST["user_email"] = "";
	}
?>

<!-- The open-account-charity-page ID is used for styling by jQuery.  See html.tpl.php file -->
<section class="with-dark-blue-background account-charity" id="open-account-charity-page">
    <div class="container">
        <div class="row r1">
			
			<div class="col-md-12">
			
				<table border="0" cellpadding="0" cellspacing="0" class="account-charity-header">
					<tr>
						<td valign="top" class="left">
							<h2>
								$150 for you and $50 for <?php echo $the_charity; ?>.<br />
								Make a difference with your banking.
							</h2>
							<p>
								Get a $150 bonus<sup>1</sup> and we'll give $50 to <?php echo $the_charity; ?><sup>2</sup> when you open a Convenience+ Checking account<sup>3</sup>.
							</p>
						</td>
						<td valign="middle" class="right">
							<?php if($charity_key == "moveon"): ?>
		 						<img src="/sites/default/files/moveon-header.png" alt="MoveOn.org" width="350" /> 
							<?php elseif($charity_key == "lgbt_center"): ?>
								<img src="/sites/default/files/the-center-header.png" alt="The Center" width="247" /> 
							<?php elseif($charity_key == "ywca"): ?>
								<img src="/sites/default/files/ywca-header.png" alt="YWCA" width="250"/>
							<?php elseif($charity_key == "lcv"): ?>
								<img src="/sites/default/files/lcv-header.png" width="203" alt="League of Conservative Voters" /> 
							<?php elseif($charity_key == "color_of_change"): ?>
								<img src="/sites/default/files/color-of-change-header.png" alt="ColorOfChange.org" width="375" />
							<?php elseif($charity_key == "jobs_with_justice"): ?>
								<img src="/sites/default/files/jobs-with-justice-header.png" alt="Jobs with Justice" width="330" /> 
							<?php endif; ?>
						</td>
					</tr>
				</table>
				
			</div>
			
		</div><!-- /row -->
    </div><!-- /container -->
</section><!-- /content -->


<!-- ***** Make a Difference ***** -->
<section class="content with-white-background account-charity-difference">
	<div class="container">
		<div class="row r1">
			<div class="col-md-10">
				<h3 style="margin-top:7px !important;">Make a difference today</h3>
				
				<p>For nearly a century, Amalgamated Bank has been a financial institution with a purpose: affordable and accessible banking for all. We proudly advocate for workers' rights and for social, environmental, and economic justice.</p>	
			
				<p>At Amalgamated Bank, we believe in making a difference. That's why when you open a Convenience+ Checking account, you'll get $150 on us<sup>1</sup>, plus we'll give a $50 donation<sup>2</sup> to 
					<?php 
						if($charity_key == "lgbt_center") {
							echo "The Lesbian, Gay, Bisexual &amp; Transgender Community Center";
						} else {
							echo $the_charity;
						}
					?>.
					And, with 24/7 Online and Mobile Banking and over 40,000 surcharge-free Allpoint<sup>&reg;</sup> ATMs<sup>3</sup>, you can bank whenever and wherever you want.
				</p>
				
				<p><strong>Here's how it works:</strong></p>
			</div>	
		</div><!-- / row-->
		
		<!-- *** How Works Desktop *** -->
		<div class="row account-charity-how-works-desktop">
			<div class="col-md-12 account-charity-how-works">
				<table border="0" cellpadding="0" cellspacing="0" class="account-charity-steps">
					<tr>
						<td class="circle-first-spacer"></td>
						<td class="circle-interior">
							<div class="step-num">1</div>
							<div class="step-content">
								Enter your email address <br />
								below and click "Open an<br />
								account" to get started.
								
							</div>
						</td>
						<td class="circle-spacer"></td>
						<td class="circle-interior">
							<div class="step-num">2</div>
							<div class="step-content">
								Open a new Convenience+<br />
								Checking account<sup>3</sup> then set<br />
								up a recurring direct<br />
								deposit of $500 or more<br />
								(e.g. from your employer's <br />payroll)<sup>1</sup>.
							</div>
						</td>
						<td class="circle-spacer"></td>
						<td class="circle-interior">
							<div class="step-num">3</div>
							<div class="step-content">
								<?php if($charity_key == "moveon"): ?>
									Get a $150 cash bonus<sup>1</sup><br />
									AND we'll make a $50<br />
									donation<sup>2</sup> to<br />
									<?php echo $the_charity; ?>.
								<?php elseif($charity_key == "lgbt_center"): ?>
									Get a $150 cash bonus<sup>1</sup><br />
									AND we'll make a $50<br />
									donation<sup>2</sup> to <?php echo $the_charity; ?>.
								<?php elseif($charity_key == "ywca"): ?>
									Get a $150 cash bonus<sup>1</sup><br />
									AND we'll make a $50<br />
									donation<sup>2</sup> to <?php echo $the_charity; ?>.
								<?php elseif($charity_key == "lcv"): ?>
									Get a $150 cash bonus<sup>1</sup><br />
									AND we'll make a $50<br />
									donation<sup>2</sup> to <?php echo $the_charity; ?>.
								<?php elseif($charity_key == "color_of_change"): ?>
									Get a $150 cash bonus<sup>1</sup><br />
									AND we'll make a $50<br />
									donation<sup>2</sup> to<br />
									<?php echo $the_charity; ?>.
								<?php elseif($charity_key == "jobs_with_justice"): ?>
									Get a $150 cash bonus<sup>1</sup><br />
									AND we'll make a $50<br />
									donation<sup>2</sup> to<br />
									 <?php echo $the_charity; ?>.
								<?php endif; ?>
							</div>
						</td>
					</tr>
				</table>
			</div>
		</div>
		
		<!-- *** How Works Mobile *** -->
		<div class="row account-charity-how-works-mobile" style="display:none;">
			<table border="0" cellpadding="0" cellspacing="0" class="account-charity-steps-mobile">
				<tr>
					<td class="left"><img src="/sites/default/files/step_sm_circle_1.png" class="step-image" alt="Step 1" /></td>
					<td class="right">Enter your email address below and click "Open an account" to get started.</td>
				</tr>
				<tr>
					<td coslpan="2" class="spacer-row"></td>
				</tr>
				<tr>
					<td class="left"><img src="/sites/default/files/step_sm_circle_2.png" class="step-image" alt="Step 2" /></td>
					<td class="right">Open a new Convenience+ Checking account<sup>3</sup> then set up a recurring direct deposit of $500 or more (e.g. from your employer's payroll)<sup>1</sup>.</td>
				</tr>
				<tr>
					<td coslpan="2" class="spacer-row"></td>
				</tr>
				<tr>
					<td class="left"><img src="/sites/default/files/step_sm_circle_3.png" class="step-image" alt="Step 3" /></td>
					<td class="right">Get a $150 cash bonus<sup>1</sup> AND we'll make a $50 donation<sup>2</sup> to <?php echo $the_charity; ?>.</td>
				</tr>
			</table>
		</div>
	</div><!-- /container -->
</section>

<!-- ***** Open an Account ***** -->
<section class="with-gray-background account-charity-select-organization">
    <div class="container">
        <div class="row r1" style="margin-bottom:10px !important; margin-top:45px !important;">
			<div class="col-md-12">
				<a name="select_organization"></a>
				<h3>Open an account</h3>
			</div>
		</div><!-- /row -->
    </div><!-- /container -->
	
	
	<div class="container choose-charity-container">
        <div class="row r1" style="margin-bottom:0px !important;">
			<div class="col-md-12">
			
				<div class="panel rounded choose-charity-box-full">
					<?php if($charity_key == "moveon"): ?>
 						<img src="/sites/default/files/move-on-cropped.png" alt="MoveOn.org" width="379" /> 
					<?php elseif($charity_key == "lgbt_center"): ?>
						<img src="/sites/default/files/the-center-cropped.png" alt="The Center" width="360" /> 
					<?php elseif($charity_key == "ywca"): ?>
						<img src="/sites/default/files/ywca-cropped.png" alt="YWCA" width="352"/>
					<?php elseif($charity_key == "lcv"): ?>
						<img src="/sites/default/files/league-conservative-voters-cropped.png" width="185" alt="League of Conservative Voters" /> 
					<?php elseif($charity_key == "color_of_change"): ?>
						<img src="/sites/default/files/color-of-change-cropped.png" alt="ColorOfChange.org" width="377" />
					<?php elseif($charity_key == "jobs_with_justice"): ?>
						<img src="/sites/default/files/jobs-with-justice-cropped.png" alt="Jobs with Justice" width="366" /> 
					<?php endif; ?>
					
					<p class="enter_email">Please enter your email address,<br /> then click the "Open an account" button to get started.</p>
					
					<div class="email_form">
						<?php 
							//remove the query string from the page URL.  Only do this if don't want to pass UTM variables
							$form_url = preg_replace('/\?.*/', '', $_SERVER['REQUEST_URI']) . "#select_organization";
						?>	
						<form name="charity_signup_form" id="charity_signup_form" method="post" action="<?php echo $form_url ?>">
							<input type="hidden" name="form_submitted" value="1" />
							<!-- Setting selected charity when click on Open Account links.  Jquery set in html.tpl.php file -->
							<input type="hidden" name="selected_charity" id="selected_charity" value="">
							<input type="hidden" name="selected_charity_full_name" id="selected_charity_full_name" value="">
						
							<input type="text" name="user_email" value="<?php echo $_POST["user_email"]; ?>" class="user_email" maxlength="50" />
				
							<?php if($invalid_user_email == 1): ?>
								<p class="error"><strong>Oops!</strong> A valid email address is required.</p>
							<?php endif; ?>
							<?php if($invalid_selected_charity == 1): ?>
								<p class="error">Please click 'Open an account' to continue.</p>
							<?php endif; ?>
						</form>
					</div>
				
					<p class="agree">By entering your email address, you agree that Amalgamated Bank may contact you. You may unsubscribe at any time.</p>
					
					<a 
						<?php if($charity_key == "moveon"): ?>
							id="moveon" 
						<?php elseif($charity_key == "lgbt_center"): ?>
							id="lgbt_center"
						<?php elseif($charity_key == "ywca"): ?>
							id="ywca"
						<?php elseif($charity_key == "lcv"): ?>
							id="lcv"
						<?php elseif($charity_key == "color_of_change"): ?>
							id="color_of_change"
						<?php elseif($charity_key == "jobs_with_justice"): ?>
							id="jobs_with_justice"
						<?php endif; ?>
						class="btn rounded with-orange-background with-white-text js-click-trigger disable-click">Open an account</a>
				</div><!-- /choose-charity-box -->

			</div><!-- /col-md -->
		</div><!-- /row -->
    </div><!-- /container -->
	
	
	<div class="container choose-charity-container">
        <div class="row r1" style="margin-top:15px !important;">
			<div class="col-md-12">
				<p class="question">Have a question? Call 800-662-0860 or <a href="/contact">email us</a>.</p>
			</div>
		</div>
	</div>
	
</section><!-- /section -->