<?php if (!empty($paragraphs['anchor'])) { ?>
  <div class="clearfix"><a name="<?php echo $paragraphs['anchor']; ?>" id="<?php echo $paragraphs['anchor']; ?>"></a></div>
<?php } ?>
<div class="mck-para-content-search mck-para-content-search-<?php echo $paragraphs['id']; ?>">
  <div class="filters-wrapper">
    <?php echo theme('mck_content_search__filters', ['paragraphs' => $paragraphs]); ?>
  </div>

  <div class="result-wrapper">
    <div class="list-view">
      <?php echo theme('mck_content_search__list_view', ['paragraphs' => $paragraphs]); ?>
    </div>
  </div>
</div>

