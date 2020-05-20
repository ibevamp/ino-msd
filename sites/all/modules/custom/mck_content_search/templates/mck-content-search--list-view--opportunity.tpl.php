<div class="container">
  <div class="row">
    <div class="col">
      <div>
        <table class="tablesorter cs-expert">
        <thead>
          <tr>
            <?php foreach ($paragraphs['columns'] as $key => $item) { ?>
              <th class="col-<?php echo $item['key']; ?>"><?php echo $item['label']; ?></th>
            <?php } ?>
            <th class="sorter-false"></th>
        </tr>
        </thead>

        <tbody>
          <?php foreach ($paragraphs['items'] as $key => $item) { ?>
            <?php
            $data_attrs = [];
            foreach ($paragraphs['filters'] as $filter_name => $filter) {
              $attr_name = 'data-content-search-filter-' . $filter_name;
              $attr_value = isset($item[$filter_name]) ? implode(',', $item[$filter_name]) : '';
              $data_attrs[] = $attr_name . '="' . $attr_value . '"';
            }
            $data_attrs[] = 'data-content-search-list-item-id' . '="' . $item['item_id'] . '"';
            $data_attrs = implode(' ' , $data_attrs);
            ?>

            <tr class="content-search-list-item content-search-list-item-<?php echo $item['item_id']; ?> <?php echo count($paragraphs['bio_columns']) > 0 ? 'expandable' : ''; ?>" <?php echo $data_attrs; ?>
                data-content-search-list-item-row-id="<?php echo $key; ?>">
              <?php foreach ($paragraphs['columns'] as $col_key => $col_item) { ?>

                <?php
                $taxonomy_fields = [
                  'field_opp_primary_at',
                  'field_opp_primary_vt',
                  'field_opp_source',
                  'field_opp_context_field',
                  'field_opp_theme',
                  'field_opp_stakeholder',
                  'field_opp_stakeholder',
                  'field_opp_decision_maker',
                  'field_opp_potential_competitor',
                ];
                ?>

                <?php if (in_array($col_item['key'], $taxonomy_fields)) { ?>
                  <td class="col-<?php echo $col_item['key']; ?>">
                    <div class="<?php echo $col_item['key']; ?>">
                      <?php
                      $taxonomies = [];
                      foreach ($item['data'][$col_item['key']] as $data) {
                        $taxonomies[] = $data->name;
                      }
                      echo implode('<br>', $taxonomies);
                      ?>
                    </div>
                  </td>
                <?php } else { ?>
                  <td class="col-<?php echo $col_item['key']; ?>">
                    <div class="table-box">
                      <div class="<?php echo $col_item['key']; ?>">
                        <?php echo $item[$col_item['key']]; ?>
                      </div>
                    </div>
                  </td>
                <?php } ?>

              <?php } ?>
              <td class="expander">
                <div></div>
              </td>
            </tr>

            <tr class="content-search-list-item-bio" data-content-search-list-item-bio-row-id="<?php echo $key; ?>">
              <td colspan="<?php echo count($paragraphs['columns']) + 1; ?>">
                <div class="table-box">
                  <div class="bio">

                    <?php foreach ($paragraphs['bio_columns'] as $col_key => $col_item) { ?>
                      <?php
                      $textfield_fields = [
                        'field_opp_no',
                        'field_opp_ideation_date',
                        'field_opp_description',
                        'field_opp_comments',
                      ];
                      $taxonomy_fields = [
                        ['field_name' => 'field_opp_primary_at', 'field_label' => 'Account tag', 'taxonomy_name' => 'opp_primary_at'],
                        ['field_name' => 'field_opp_primary_vt', 'field_label' => 'Vertical tag', 'taxonomy_name' => 'opp_primary_vt'],
                        ['field_name' => 'field_opp_source', 'field_label' => 'Source', 'taxonomy_name' => 'opp_source'],
                        ['field_name' => 'field_opp_context_field', 'field_label' => 'Context field', 'taxonomy_name' => 'opp_context_field'],
                        ['field_name' => 'field_opp_theme', 'field_label' => 'Theme', 'taxonomy_name' => 'opp_theme'],
                        ['field_name' => 'field_opp_stakeholder', 'field_label' => 'Stakeholders', 'taxonomy_name' => 'opp_stakeholder'],
                        ['field_name' => 'field_opp_decision_maker', 'field_label' => 'Decision maker', 'taxonomy_name' => 'opp_decision_maker'],
                        ['field_name' => 'field_opp_potential_competitor', 'field_label' => 'Potential competitor', 'taxonomy_name' => 'opp_potential_competitor'],
                      ];
                      ?>

                      <?php if (in_array($col_item['key'], $textfield_fields)) { ?>
                        <?php if (isset($item[$col_item['key']])) { ?>
                          <div class="bio-<?php echo $col_item['key']; ?>">
                            <strong><?php echo $col_item['label']; ?>:</strong> <?php echo $item[$col_item['key']]; ?>
                          </div>
                        <?php } ?>
                      <?php } ?>

                      <?php foreach ($taxonomy_fields as $taxonomy_key => $taxonomy_item) { ?>
                        <?php if ($taxonomy_item['field_name'] == $col_item['key']) { ?>
                          <?php if (isset($item[$col_item['key']])) { ?>
                            <div class="bio-<?php echo $col_item['key']; ?>">
                              <?php
                              $taxonomies = [];
                              foreach ($item['data'][$col_item['key']] as $data) {
                                $taxonomies[] = $data->name;
                              }
                              echo '<strong>' . $col_item['label'] . ':</strong> '. implode(', ', $taxonomies);
                              ?>
                            </div>
                          <?php } ?>
                        <?php break; } ?>
                      <?php } ?>
                    <?php } ?>

                  </div>
                </div>
              </td>
            </tr>
          <?php } ?>
        </tbody>
      </table>
        <?php /*
        <div class="pager">
          <img src="http://mottie.github.com/tablesorter/addons/pager/icons/first.png" class="first" />
          <img src="http://mottie.github.com/tablesorter/addons/pager/icons/prev.png" class="prev" />
          <span class="pagedisplay"></span>
          <!-- this can be any element, including an input -->
          <img src="http://mottie.github.com/tablesorter/addons/pager/icons/next.png" class="next" />
          <img src="http://mottie.github.com/tablesorter/addons/pager/icons/last.png" class="last" />
        </div>
 */ ?>
      </div>
    </div>
  </div>
</div>
