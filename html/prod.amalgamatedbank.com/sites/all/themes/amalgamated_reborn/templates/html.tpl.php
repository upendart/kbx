<?php
/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or
 *   'rtl'.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string parts
 *   that were used to generate the $head_title variable, already prepared to be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 * @see bootstrap_preprocess_html()
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 *
 * @ingroup themeable
 */
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN"
    "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces; ?>>
    <head profile="<?php print $grddl_profile; ?>">
	<meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1">
        <meta charset="utf-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <?php print $head; ?>
        <title><?php print $head_title; ?></title>
        <?php print $styles; ?>
        <!-- HTML5 element support for IE6-8 -->
        <!--[if lt IE 9]>
          <script src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script>
        <![endif]-->
	<script type="text/javascript"> 
	/*
	var $buoop = {}; 
	$buoop.ol = window.onload; 
	window.onload=function(){ 
	try {if ($buoop.ol) $buoop.ol();}catch (e) {} 
	var e = document.createElement("script"); 
	e.setAttribute("type", "text/javascript"); 
	e.setAttribute("src", "//browser-update.org/update.js"); 
	document.body.appendChild(e); 
	} 
	*/
	</script>
    <script src="/sites/all/themes/amalgamated_reborn/js/detect_mobile.js"></script>
	
	<?php print $scripts; ?>
    </head>
	<script type="text/javascript">
		/* <![CDATA[ */
		var google_conversion_id = 974593796;
		var google_custom_params = window.google_tag_params;
		var google_remarketing_only = true;
		/* ]]> */
	</script>
	<!-- Used to stop 13pixels from showing at top of page -->
	<div style="display:none;">
		<script type="text/javascript" src="//www.googleadservices.com/pagead/conversion.js"></script>
	</div>
	<noscript>
		<div style="display:inline;">
			<img height="1" width="1" style="border-style:none;" alt="" src="//googleads.g.doubleclick.net/pagead/viewthroughconversion/974593796/?value=0&amp;guid=ON&amp;script=0"/>
		</div>
	</noscript>

    <body class="<?php print $classes; ?>" <?php print $attributes; ?>>
	<?php if(strpos($_SERVER['SERVER_NAME'],'amalgamatedbank.com') == false): ?>
		<!-- *** Google Tag Manager Staging *** -->
		<noscript><iframe src="//www.googletagmanager.com/ns.html?id=GTM-KTF284"
		height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
		<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
		new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
		j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
		'//www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
		})(window,document,'script','dataLayer','GTM-KTF284');</script>
		<!-- End Google Tag Manager -->
	<?php else: ?>
		<!-- *** Google Tag Manager Production *** -->
		<noscript><iframe src="//www.googletagmanager.com/ns.html?id=GTM-WHWSL6"
		height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
		<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
		new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
		j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
		'//www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
		})(window,document,'script','dataLayer','GTM-WHWSL6');</script>
		<!-- End Google Tag Manager -->
	<?php endif; ?>
		
        <div id="skip-link">
            <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
        </div>
        <?php print $page_top; ?>
        <?php print $page; ?>
        <?php print $page_bottom; ?>
				
		<?php 
		$node = menu_get_object();
		if(isset($node->nid)){
		  $nid = $node->nid;
		  if($nid=='799'){
			print '<!--SECURE JAVASCRIPT PIXEL CODE START-->
			<script src="https://acuityplatform.com/Adserver/pxlj/7295762886044539457?" type="text/javascript" async ></script>
			<!--SECURE JAVASCRIPT PIXEL CODE END-->';
		  }
		}
		?>
		
        <script type="text/javascript">
             ;
            (function($) {
                $(window).load(function() {
                    

                    tabletDropdown = {};

                    tabletDropdown.hide = function() {

                        $('section.header .tablet > .trigger').removeClass('active');

                        $('section.header .tablet > .dropdown').hide();
                        $('section.header .tablet > .dropdown > ul > li.search a').removeClass('active');

                    }

                    tabletDropdown.show = function() {

                        $('section.header .tablet > .trigger').addClass('active');

                        $('section.header .tablet > .dropdown').show();

                    }

                    $('section.header .tablet > .trigger').on('click', function() {

                        var trigger = $(this);

                        if (!trigger.hasClass('active')) {

                            tabletDropdown.show();

                        } else {

                            tabletDropdown.hide();

                        }

                        return false;

                    });

                    $('section.header .mobile > .trigger').on('click', function() {

                        var trigger = $(this);
                        var dropdown = trigger.next();
                        var page = $('#page');

                        if (!trigger.hasClass('active')) {

                            $('body').addClass('with-mobile-dropdown');
                            trigger.addClass('active');

                            dropdown.stop().animate({
                                'width': 254
                            }, {
                                'duration': 500,
                                'easing': 'easeOutCirc',
                                'step': function(n) {
                                    page.css({
                                        'margin-left': -n
                                    });
                                }
                            });

                        } else {

                            dropdown.stop().animate({
                                'width': 0
                            }, {
                                'duration': 500,
                                'easing': 'easeOutCirc',
                                'step': function(n) {
                                    page.css({
                                        'margin-left': -n
                                    });
                                },
                                'complete': function() {
                                    $('body').removeClass('with-mobile-dropdown');
                                    trigger.removeClass('active');
                                }
                            });

                        }

                        return false;

                    });

                    $('section.header .mobile .with-mega > a').on('click', function() {

                        var trigger = $(this);
                        var parent = trigger.parent();

                        parent.siblings().removeClass('active').find('.mega').hide();

                        if (!parent.hasClass('active')) {

                            parent.addClass('active');
                            parent.find('.mega').slideDown();

                        } else {

                            parent.find('.mega').slideUp(function() {

                                parent.removeClass('active');

                            });

                        }

                        return false;

                    });

                    

                    $('.login a').on('click', function() {

                        $('#login').toggle();

                    });

                    $('#login .close').on('click', function() {

                        $('#login').hide();

                        return false;

                    });

                    $('.row').each(function() {

                        var row = $(this);
                        var panels = row.find('> div > .panel');
                        var max = 0;

                        if (panels.length > 0) {

                            panels.each(function() {

                                var panel = $(this);

                                max = Math.max(max, panel.outerHeight());

                            });

                            if (max > 0 && panels.parents('.sidebar').length == 0) {

                                panels.css({'min-height': max});

                            }

                        }

                    });

                    $('.js-click-trigger').each(function() {

                        var trigger = $(this);
                        var container = trigger.parents('.js-click-container');

                        container.on('click', function() {

                            window.location.href = trigger.attr('href');

                        });

                        container.css({
                            'cursor': 'pointer'
                        });

                    });

                    $('input').each(function() {

                        var source = $(this);

                        source.on('focus', function() {

                            source.siblings('.input-group-addon').addClass('active');

                        });

                        source.on('blur', function() {

                            source.siblings('.input-group-addon').removeClass('active');

                        });

                    });

                                        

                    // Makes the login jump menu work:
                    // Hides all of the divs Initially
                    hideAllDivs = function() {
                        $("#select-personal-banking").hide();
                        $("#select-personal-investing").hide();
                        $("#select-online-treasury-manager").hide();
                        $("#select-remote-deposit-capture").hide();
                        $("#select-trust-web").hide();
                        $("#select-my-401k").hide();
                        $("#select-ics").hide();
                        $("#select-abfast").hide();
                        $("#select-moneycard").hide();
                    };
                    // Shows all of the divs separately based on selection:
                    handleNewSelection = function() {

                        hideAllDivs();

                        switch ($(this).val()) {
                            case '1':
                                $("#select-personal-banking").show();
                                break;
                            case '2':
                                $("#select-personal-investing").show();
                                break;
                            case '3':
                                $("#select-online-treasury-manager").show();
                                break;
                            case '4':
                                $("#select-remote-deposit-capture").show();
                                break;
                            case '5':
                                $("#select-trust-web").show();
                                break;
                            case '6':
                                $("#select-my-401k").show();
                                break;
                            case '7':
                                $("#select-ics").show();
                                break;
                            case '8':
                                $("#select-abfast").show();
                                break;
                            case '9':
                                $("#select-moneycard").show();
                                break;
                        }
                    };



                    $("#account-selection").change(handleNewSelection);

                    // Run the event handler once now to ensure everything is as it should be
                    handleNewSelection.apply($("#account-selection"));

                });
				
				
				$(document).ready(function() {
					// **** For TLS Warning Message for browsers not complying with at least TLS 1.2.  Putting this here becuase jQuery is not working from within the template file ***
					$("#tls_read_more").click(function(){
					 	$("#tls_read_more").hide();
						$("#tls_read_less").show();
						$("#tls_fail_message_area_bottom").slideDown("fast");
					})
					
					$("#tls_read_less").click(function(){
					 	$("#tls_read_less").hide();
						$("#tls_read_more").show();
						$("#tls_fail_message_area_bottom").slideUp("fast");
					})
					
					//***** find if ID exists on page, if so update styles
					//** For Open Account Charity 150-50 pages
					$is_charity_page = ($('#open-account-charity-page').length);
					if($is_charity_page){
						$(".field-name-breadcrumbs").css("display", "none");
						$(".field-name-title h2").css("display", "none");
						$('.container .row').addClass("charity_page_row_margins");
						//this is for the 100-100 page
						$(".content.with-dark-blue-background.title.with-form h2").css("display", "none");
					}
			
					//** For Election Campaign page
					$is_election_page = ($('#election-campaign-page').length);
					if($is_election_page){
						$(".field-name-breadcrumbs").css("display", "none");
						$(".row.r1 h2").css("display", "none");
						$('body').addClass("election-campaign-body");
					}
					
					//** For Financial Learning Center
					$is_flc_page = ($('#flc-page').length);
					if($is_flc_page){
						$(".field-name-breadcrumbs").css("display", "none");
						$(".row.r1 h2").css("display", "none");
						$('body').addClass("flc-body");
					}
					
					$(".disable-click").click(function(){
						$(this).addClass('no-click');
					})
					
					
					//***** find if ID exists on page, if so update styles
					//** For Give Back Savings pages
					$is_give_back_page = ($('#give-back-savings-page').length);
					if($is_give_back_page){
						$(".field-name-breadcrumbs").css("display", "none");
						$(".field-name-title h2").css("display", "none");
						$('.container .row').addClass("give_back_savings_page_row_margins");
						//this is for the 100-100 page
						$(".content.with-dark-blue-background.title.with-form h2").css("display", "none");
					}
					
					//** For Give Back Savings Individual pages
					$is_give_back_page_individual = ($('.individual.roosevelt').length);
					if($is_give_back_page_individual){
						$('body').addClass("give-back-savings-page-roosevelt");
					}
					
					$is_give_back_page_individual = ($('.individual.ultraviolet').length);
					if($is_give_back_page_individual){
						$('body').addClass("give-back-savings-page-ultraviolet");
					}
					
					$is_give_back_page_individual = ($('.individual.netroots').length);
					if($is_give_back_page_individual){
						$('body').addClass("give-back-savings-page-netroots");
					}
					
					//** For Online Savings pages
					$is_online_savings_page = ($('#online-savings-page').length);
					if($is_online_savings_page){
						$(".field-name-breadcrumbs").css("display", "none");
						$(".field-name-title h2").css("display", "none");
						$('.container .row').addClass("online_savings_page_row_margins");
						$(".content.with-dark-blue-background.title.with-form").css("display", "none");
					}
					
					//** For Helping Good do Better
					$is_good_better_page = ($('#good-better-page').length);
					if($is_good_better_page){
						$(".field-name-breadcrumbs").css("display", "none");
						$(".field-name-title h2").css("display", "none");
						//$('.container .row').addClass("online_savings_page_row_margins");
						$(".content.with-dark-blue-background.title.with-form").css("display", "none");
					}
					
					/* ---- 
						For opening main navigation on a touchscreen device 
						Resource: http://detectmobilebrowsers.com/
								  http://www.magebuzz.com/blog/how-to-detect-mobile-devices-using-jquery/
					----- */
				
					var isiDevice = /ipad|iphone|ipod/i.test(navigator.userAgent.toLowerCase());
					var isAndroid = /android/i.test(navigator.userAgent.toLowerCase());
					var isBlackBerry = /blackberry/i.test(navigator.userAgent.toLowerCase());
					var isWebOS = /webos/i.test(navigator.userAgent.toLowerCase());
					var isWindowsPhone = /windows phone/i.test(navigator.userAgent.toLowerCase());
					
					if(isiDevice || isAndroid || isBlackBerry || isWebOS || isWindowsPhone){
						$("#page section.header .r1 .navigation ul li.with-mega").each(function(i){ 
							$cur = $(this);
							$(".primary-nav", this).click(function() {
								$("#page div.mega").removeClass("active");
								$("#page .primary-nav").removeClass("main-nav-open");
								$("#page .primary-nav").removeClass("main-nav-closed");
								$("#page section.header .r1 .navigation ul li").removeClass("main-nav-li-closed");
								$(this).addClass('main-nav-open');
								$(this).parent("li.with-mega").children("div.mega").removeClass("active").addClass("active");				
							});
						});
						
						
						function closeMainNav() {
							$("#page div.mega").removeClass("active");
							$("#page .primary-nav").removeClass("main-nav-open");
							$("#page .primary-nav").addClass("main-nav-closed");
							$("#page section.header .r1 .navigation ul li").addClass("main-nav-li-closed");
						}
						
						//Close the main navigation by clicking in the main navigation area
						/*
						$("#page section.header .r1 .navigation ul li.with-mega .mega").click(function() {
							closeMainNav();
						})
						*/
						
						//Close the navigation on general pages
						$(".region-content").click(function() {
							closeMainNav();
						})
						
						//Close the navigation on site alert area
						$(".site-alert").click(function() {
							closeMainNav();
						})
						
						//Close the navigation on homepage Product Touts area
						$(".product-touts").click(function() {
							closeMainNav();
						})
						
						//Close the navigation on login button 
						$(".login").click(function() {
							closeMainNav();
						})
						
						//Close the navigation on burger menu 
						$(".trigger").click(function() {
							closeMainNav();
						})
						
						//Close the navigation on footer area
						$(".footer").click(function() {
							closeMainNav();
						})
						
					}else {
						// Adding this style becuase we only want to add it to Dekstop version of the site.  The display:block style on hover is stopping the main dropdown navgation from being able to close
						$("<style type='text/css'> #page section.header .r1 .navigation ul li.with-mega:hover .mega {display: block;}   #page section.header .r1 .navigation > ul > li.with-mega:hover > a:before {opacity: 1.00;}</style>").appendTo("head");
					}//End if Android of iPad
					
				});
				
            })(jQuery);

        </script>
    </body>
</html>
