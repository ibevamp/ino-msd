<div class="container">
  <div class="row">
    <div class="col">
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

              <tr class="content-search-list-item content-search-list-item-<?php echo $item['item_id']; ?>" <?php echo $data_attrs; ?>
                  data-content-search-list-item-row-id="<?php echo $key; ?>">
                <?php foreach ($paragraphs['columns'] as $col_key => $col_item) { ?>

                  <?php
                  $taxonomy_fields = [
                    'field_expert_affiliation',
                    'field_expert_study',
                    'field_expert_joined_ideation',
                    'field_expert_designation',
                    'field_expert_primary_at',
                    'field_expert_primary_vt',
                  ];
                  $name_fields = [
                    'field_expert_fullname',
                    'field_expert_image',
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
                  <?php } elseif (in_array($col_item['key'], $name_fields)) { ?>
                    <td class="col-<?php echo $col_item['key']; ?> col-name">
                      <div class="table-box">
                        <?php if ($col_item['key'] == 'field_expert_image' && !empty($item['image_url'])) { ?>
                          <div class="img">
                            <img src="<?php echo $item['image_url']; ?>" />
                          </div>
                        <?php } ?>
                        <div class="name">
                          <?php echo $item['field_expert_fullname']; ?>
                        </div>
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
                    <?php if (!empty($item['image_url']) && mck_content_search_in_columns('field_expert_image', $paragraphs['bio_columns'])) { ?>
                      <div class="img">
                        <img src="<?php echo $item['image_url']; ?>" />
                      </div>
                    <?php } ?>
                    <div class="bio">

                      <?php foreach ($paragraphs['bio_columns'] as $col_key => $col_item) { ?>
                        <?php
                        $name_fields = [
                          'field_expert_fullname',
                        ];
                        $textfield_fields = [
                          'field_expert_contact_point',
                          'field_expert_description',
                        ];
                        $taxonomy_fields = [
                          ['field_name' => 'field_expert_affiliation', 'field_label' => 'Affiliation', 'taxonomy_name' => 'expert_affiliation'],
                          ['field_name' => 'field_expert_designation', 'field_label' => 'Designation', 'taxonomy_name' => 'expert_designation'],
                          ['field_name' => 'field_expert_study', 'field_label' => 'Study', 'taxonomy_name' => 'expert_study'],
                          ['field_name' => 'field_expert_joined_ideation', 'field_label' => 'Joined ideation', 'taxonomy_name' => 'expert_joined_ideation'],
                          ['field_name' => 'field_expert_primary_at', 'field_label' => 'Primary account tag', 'taxonomy_name' => 'expert_primary_at'],
                          ['field_name' => 'field_expert_primary_vt', 'field_label' => 'Primary vertical tag', 'taxonomy_name' => 'expert_primary_vt'],
                        ];
                        ?>

                        <?php if (in_array($col_item['key'], $name_fields)) { ?>
                          <?php if (isset($item[$col_item['key']])) { ?>
                            <div class="bio-<?php echo $col_item['key']; ?>">
                              <?php echo $item[$col_item['key']]; ?>
                            </div>
                          <?php } ?>
                        <?php } ?>

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
    </div>
  </div>
</div>
