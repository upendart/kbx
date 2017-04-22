<?php

/**
 * @file
 * template.php
 */
function amalgamated_reborn_process_html(&$vars) {
    foreach (array('head', 'styles', 'scripts') as $replace) {
        if (!isset($vars[$replace])) {
            continue;
        }

        $vars[$replace] = preg_replace('/(src|href|@import )(url\(|=)(")http(s?):/', '$1$2$3', $vars[$replace]);
    }
}

// Allows templates to be generated based on content type:
function amalgamated_reborn_preprocess_page(&$vars, $hook) {
    if (isset($vars['node'])) {
// If the node type is "blog_madness" the template suggestion will be "page--blog-madness.tpl.php".
        $vars['theme_hook_suggestions'][] = 'page__' . $vars['node']->type;
    }
}

function amalgamated_reborn_process_menu_link(&$variables, $hook) {
    if ($variables['element']['#href'] == '<separator>') {
        array_unshift($variables['element']['#attributes']['class'], 'menu-item--separator');
    }
    if ($variables['element']['#href'] == '<nolink>') {
        array_unshift($variables['element']['#attributes']['class'], 'menu-item--nolink');
    }
}
