<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */


$link = isset($content['field_sub_menu_link']) ? render($content['field_sub_menu_link']) : '';
//$anchor = $content['field_anchor_link'][0]['#markup'];

$curr_path = current_path();
//$curr_path = drupal_lookup_path('alias',$curr_path);
$frontpage = drupal_get_normal_path(variable_get('site_frontpage', 'node'));

$is_active = url($curr_path) == $content['field_sub_menu_link']['#items'][0]['url'] ? TRUE : FALSE;
$subSubMenulinks = isset($content['field_sub_sub_menu_links']) ? render($content['field_sub_sub_menu_links']) : '';
?>

<?php /*
<?php if ($anchor) { ?>
  <li role="menuitem" class="nav-item nav-link-item custom-anchor-link" aria-hidden="true">
    <a class="sub-menu-anchor" data-href="<?php echo $content['field_sub_menu_link']['#items'][0]['url']; ?>"
       href="javascript: void(0)"><?php echo $content['field_sub_menu_link']['#items'][0]['title']; ?></a>
  </li>
<?php } else {
  if (url($curr_path) == $content['field_sub_menu_link']['#items'][0]['url']) { ?>
    <li class="nav-item <?php echo $is_active ? 'active' : ''; ?>" aria-hidden="true">
      <a
        href="<?php echo $content['field_sub_menu_link']['#items'][0]['url']; ?>"><?php echo $content['field_sub_menu_link']['#items'][0]['title']; ?></a>
    </li>
  <?php } else { ?>
    <li class="nav-item " aria-hidden="true">
      <a
        href="<?php echo $content['field_sub_menu_link']['#items'][0]['url']; ?>"><?php echo $content['field_sub_menu_link']['#items'][0]['title']; ?></a>
    </li>
  <?php } ?>
<?php } ?>
*/ ?>

<li class="nav-item <?php echo $is_active ? 'active' : ''; ?>" aria-hidden="true">
  <a class="sub-menu-item" href="<?php echo $content['field_sub_menu_link']['#items'][0]['url']; ?>">
    <?php echo $content['field_sub_menu_link']['#items'][0]['title']; ?>
  </a>
  <?php if (!empty($subSubMenulinks)) { ?>
    <ul class="sub-sub-nav">
      <?php print $subSubMenulinks; ?>
    </ul>
  <?php } ?>
</li>
