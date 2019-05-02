

<?php
// $Id: views-view-unformatted.tpl.php,v 1.6 2008/10/01 20:52:11 merlinofchaos Exp $
/**
 * @file views-view-unformatted.tpl.php
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */

?>
<section class="up three-up-circle careers span-full-width">
 <div class="profiles">
 <div class="three-up-circle-outer">
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php $rows = array_unique($rows); ?>
<?php foreach ($rows as $id => $row): ?>

    <?php print $row; ?>

</div>
</div>
</section>
<?php endforeach; ?>
