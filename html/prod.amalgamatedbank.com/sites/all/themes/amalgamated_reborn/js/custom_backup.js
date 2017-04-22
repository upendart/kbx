(function($) {
    Drupal.behaviors.myBehavior = {
        attach: function(context, settings) {
            //code starts
            
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
                    search.hide();

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
                        'width': 266
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

            $('select').each(function() {

                var source = $(this);

                source.selectbox({
                    customClass: source.data('customClass'),
                    onChange: function(value) {

                        if (source.data('customClass') === 'tabs') {

                            var tab = $('.nav-tabs').find('a[href="' + value + '"]').filter('[data-toggle="tab"]');

                            if (tab.length) {

                                tab.trigger('click');

                            } else {

                                window.location.href = value;

                            }

                        }

                    }

                });

            });

            $('.table').each(function() {

                var source = $(this);

                source.wrap('<div class="table-container-with-scrolling"></div>');
                source.parent().before('<div class="table-scolling-instructions visible-xs">Swipe to view complete table</div>');

            });

            if (document.location.hash) {

                var hash = document.location.hash.replace('#goto-', '');

                $('.nav-tabs a[href=#' + hash + ']').trigger('click');

            }

            $('a[data-collapse-trigger]').on('click', function() {

                var source = $(this);
                var target = $('[data-collapse-target=' + source.data('collapseTrigger') + ']');

                if (!target.is(':visible')) {

                    target.prev().removeClass('with-gray-notch').addClass('with-white-notch');

                }

                target.slideToggle(function() {

                    if (!target.is(':visible')) {

                        target.prev().removeClass('with-white-notch').addClass('with-gray-notch');

                    }

                });

                return false;

            });

            $('section.locations .item .information a').on('click', function() {

                var source = $(this);
                var item = source.parents('.item');

                item.toggleClass('active');

                return false;

            });

            $('section.locations .item .close').on('click', function() {

                var source = $(this);
                var item = source.parents('.item');

                item.toggleClass('active');

                return false;

            });

            

            //code ends
        }
    };
})(jQuery);
