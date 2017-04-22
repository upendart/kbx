<h3 class="we-donate">You save, we donate<sup>4</sup></h3>
					
<div class="balance-container">
	<div class="text">Enter your balance</div>
	<input type="text" name="balance" id="balance-field" value="" class="balance-field" onkeyup="javascript:this.value=CommaMoney(this.value);" />
	<a class="btn rounded with-blue-border js-click-trigger" id="calculate">Calculate</a>
</div><!-- /balance-container -->

<div class="earning-container">
	<div class="line-container">Your yearly earning will be <input type="text" name="earning" id="earning-field" value="" class="earning-field" disabled /></div>
	<div class="line-container">and our yearly donation will be <input type="text" name="donation" id="donation-field" value="" class="earning-field" disabled /></div>
</div><!-- /balance-container -->