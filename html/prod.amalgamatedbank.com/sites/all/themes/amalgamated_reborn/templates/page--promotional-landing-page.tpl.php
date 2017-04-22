<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>
<!-- Product Landing Page -->
<div id="page"class="promotional-landing">
    <section class="content with-blue-background header">
        <div class="container">
            <div class="row r1 header-row">
                <!-- LOGO -->
                <?php if ($logo): ?>
                    <div class="logo">
                        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
                           <!-- Amalgamated Bank -->
                        </a>
                    </div>
                <?php endif; ?><!-- /.logo -->
                <!-- Primary Navigation Menus -->
                <?php if (!empty($page['primary_nav_menus'])): ?>
                    <?php print render($page['primary_nav_menus']); ?>
                <?php endif; ?>
                <!-- Seconddary Navigation Menus -->
                <?php if (!empty($page['secondary_nav_menus'])): ?>
                    <?php print render($page['secondary_nav_menus']); ?>
                <?php endif; ?>
                <!-- Tablet Navigation Menus -->
                <?php if (!empty($page['tablet_nav_menus'])): ?>
                    <?php print render($page['tablet_nav_menus']); ?>
                <?php endif; ?>
                <!-- Mobile Navigation Menus -->
                <?php if (!empty($page['mobile_nav_menus'])): ?>
                    <?php print render($page['mobile_nav_menus']); ?>
                <?php endif; ?>
                <!-- HEADER RIGHT SIDE -->
                <?php if (!empty($page['header_right_side'])): ?>
                    <?php print render($page['header_right_side']); ?>
                <?php endif; ?>
                <!-- Search Bar -->
                <div id="search" style="display:none;">

                </div><!-- / #search -->
                <div id="login">

                </div><!-- / #login -->
            </div>
        </div> <!-- /.container -->
    </section><!-- /.content /header -->
    
   <?php if (!empty($page['site_alerts'])): ?>
        <section class="content with-red-text site-alert">
            <div class="container">
                <div class="row r1">
                    <?php print render($page['site_alerts']); ?>
                </div>
            </div><!-- /.container -->
        </section><!-- /.content -->
    <?php endif; ?>
	
	<!-- TLS Message Area -->
	<?php include 'tls_message.php'; ?>

    <?php if (!empty($page['content_top'])): ?>
        <section class="content with-dark-blue-background with-white-notch title">
            <div class="container">
                <div class="row r1">
                    <?php print render($page['content_top']); ?>
                </div>
            </div><!-- /.container -->
        </section><!-- /.content -->
    <?php endif; ?>


    <a id="main-content"></a>
    <!-- Messages -->
    <?php print $messages; ?>

    <!-- Tabs -->
    <?php if (!empty($tabs)): ?>
        <?php print render($tabs); ?>
    <?php endif; ?>

    <!-- Help -->
    <?php if (!empty($page['help'])): ?>
        <?php print render($page['help']); ?>
    <?php endif; ?>

    <?php if (!empty($action_links)): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
    <?php endif; ?>

    <!-- Actual Page Content! -->
    <?php print render($page['content']); ?>

    <?php if (!empty($page['sidebar_second'])): ?>
        <aside class="col-sm-3" role="complementary">
            <?php print render($page['sidebar_second']); ?>
        </aside>  <!-- /#sidebar-second -->
    <?php endif; ?>

    <?php if (!empty($page['content_bottom'])): ?>
        <section class="content with-orange-background what-we-stand-for">
            <div class="container">
                <div class="row r1">
                    <?php print render($page['content_bottom']); ?>
                </div>
            </div><!-- /.container -->
        </section><!-- /.content -->
    <?php endif; ?>

    <!-- ***** Footer ***** -->
	<?php include 'sites/all/includes/global/footer.php'; ?>
</div><!-- /#page -->