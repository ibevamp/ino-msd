<div class="container">
  <div class="row">
    <div class="col">
      <div class="row-all-filters">
        <div class="left">
          <?php if (count($paragraphs['filters']) > 0) { ?>
          <div class="label">Filter by:</div>
          <div class="filter-by">
            <?php foreach ($paragraphs['filters'] as $filter_name => $filter) { ?>
              <div class="filter" rel="<?php echo $filter_name; ?>">
                <div class="filter-name"><?php echo $filter['name']; ?> <span class="add">+</span></div>
                <div class="filter-items">
                  <div class="inner">
                    <?php foreach ($filter['items'] as $item) { ?>
                      <ul class="items">
                        <li class="item">
                          <div class="box">
                            <input type="checkbox" name="content_search_filter_<?php echo $filter_name; ?>[]" value="<?php echo $item['tid']; ?>" id="content_search_filter_<?php echo $filter_name; ?>_<?php echo $item['tid']; ?>" rel="<?php echo $filter_name; ?>" />
                            <label for="content_search_filter_<?php echo $filter_name; ?>_<?php echo $item['tid']; ?>"><?php echo $item['name']; ?></label>
                          </div>
                          <?php if (isset($item['children'])) { ?>
                            <ul class="items">
                              <?php foreach ($item['children'] as $child) { ?>
                                <li class="item">
                                  <div class="box">
                                    <input type="checkbox" name="content_search_filter_<?php echo $filter_name; ?>[]" value="<?php echo $child['tid']; ?>" id="content_search_filter_<?php echo $filter_name; ?>_<?php echo $child['tid']; ?>" rel="<?php echo $filter_name; ?>" />
                                    <label for="content_search_filter_<?php echo $filter_name; ?>_<?php echo $child['tid']; ?>"><?php echo $child['name']; ?></label>
                                  </div>
                                </li>
                              <?php } ?>
                            </ul>
                          <?php } ?>
                        </li>
                      </ul>
                    <?php } ?>
                  </div>
                </div>
              </div>
            <?php } ?>
          </div>
          <?php } ?>
        </div>

        <div class="right">
          <div class="label">Search:</div>
          <div>
            <input type="text" name="content_search_keywords" class="content-search-keywords" placeholder="Enter search text" />
          </div>
        </div>
      </div>
      <div class="total-results-text"></div>
      <div class="row-selected-filters" style="display: none;">
        <div class="inner">
          <div class="total-filters-text"></div>
          <div class="items"></div>
          <div class="reset"><a href="javascript: void(0);">Clear All</a></div>
        </div>
      </div>
    </div>
  </div>
</div>
