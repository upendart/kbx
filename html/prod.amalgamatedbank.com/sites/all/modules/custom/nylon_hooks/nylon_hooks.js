(function ($) {
	
  Drupal.behaviors.exampleModule = {
    attach: function (context, settings) {
    
		if($('#webform-client-form-793').length > 0 && $('.page-node-submission-edit').length > 0){
			$("input[type='hidden']").each(function(){
				var name = $(this).attr('name'); // grab name of original
				var value = $(this).attr('value'); // grab value of original
				/* create new visible input */
				var html = '<label>'+name+'</label><input type="text" name="'+name+'" value="'+value+'" />';
				$(this).after(html).remove(); // add new, then remove original input
			});
		}
		
		if($('.node-type-petition #node-segment-landing-page-full-group-s1c1r2').length > 0){
			var maxHeight = 0;
			$("#node-segment-landing-page-full-group-s1c1r2 p").each(function(){
				 if ($(this).height() > maxHeight) { maxHeight = $(this).height(); }
			});
			$("#node-segment-landing-page-full-group-s1c1r2 p").not("#node-segment-landing-page-full-group-s1c1r2 p.butn").height(maxHeight);
		}
		
		if($('#node-segment-landing-page-full-group-s1c1r2').length > 0){
			$('#node-segment-landing-page-full-group-s2c1r2c1 #edit-webform-ajax-submit-793').addClass('btn rounded with-orange-background with-white-text js-click-trigger');
		}
		
			//**** For Financial Learning Center QA Accordion 
			if($('#accordion').length > 0){
			
			var hashId = false,
			$accordion = $('#accordion');
			if (window.location.hash) {
			    $accordion.children('h3').each(function (i) {
			        var txt = this.textContent.toLowerCase().replace(/\s+/g, '_');
			        if ( txt === window.location.hash.slice(1) ) {
			            hashId = i;
			        }
			    });
			} 
			
			$accordion.accordion({
			 
				active: hashId,
			    animate: true,
			    heightStyle: 'content',
			    collapsible: true,
			    create: function (event, ui) {
			        $accordion.children('h3').each(function (i) {
			            // set id here because jQuery UI sets them as "ui-accordion-#-header-#"
			            this.id = this.textContent.toLowerCase().replace(/\s+/g, '_');
			            // add the anchor
			            $(this).before('');
						$(this).html('<a href="#' + this.id + '">' + this.textContent + '</a>');
			        });
			        $accordion.find('.accordion-link').click(function () {
			            // the active option requires a numeric value (not a string, e.g. "1")
			            $accordion.accordion( "option", "active", $(this).data('index') );
			
			            // uncomment out the return false below to prevent the header jump
			            // return false;
			        });
			    },
				activate: function( event, ui ) {
			        if(!$.isEmptyObject(ui.newHeader.offset())) {
			            $('html:not(:animated), body:not(:animated)').animate({ scrollTop: ui.newHeader.offset().top }, 300);
			        }
			    }
			});
		 //End Financial Learning Center Accordion
		   
		 //** For Financial Learning Center QA pages
		$is_flc_qa_page = ($('#flc-qa-page').length);
		if($is_flc_qa_page){
			$(".field-name-breadcrumbs").css("display", "none");
			$(".row.r1 h2").css("display", "none");
			$('body').addClass("flc-qa-body");
		}
		
		// Trying to properly format the QA and Landing Page headers and access elements above the internal page.
		//Used this as a reference https://webdesign.tutsplus.com/tutorials/selecting-parent-elements-with-css-and-jquery--cms-26423
		$( ".flc-qa-page" )
    	.parentsUntil(".with-white-background")
        .addClass( "for_flc_banner_container" );
		  
	}
		
  }
};

})(jQuery);
