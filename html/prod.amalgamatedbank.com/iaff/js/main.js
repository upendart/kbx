 $(function () {
				$("#Confirm").dialog({
					autoOpen: false,
					width:500,
					buttons: {
						"Continue": function() {
							$(this).dialog("close");
							$('#atmform')[0].submit();
						},
						Cancel: function() {
							$(this).dialog("close");
						}
					}
				});
			
				$("#atmform").submit(function (e) {
					e.preventDefault();
					$("#Confirm").dialog("open");
				});
});
			
			
			
//Assign to those input elements that have 'placeholder' attribute - IE7/8
$('input[placeholder]').each(function(){  
    var input = $(this);        
    $(input).val(input.attr('placeholder'));
    
    $(input).focus(function(){
        if (input.val() == input.attr('placeholder')) {
           input.val('');
        }
    });

    $(input).blur(function(){
       if (input.val() == '' || input.val() == input.attr('placeholder')) {
           input.val(input.attr('placeholder'));
       }
    });
});
