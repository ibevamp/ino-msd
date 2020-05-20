(function ($, Drupal) {
  Drupal.behaviors.mckContentSearchFilters = {
    attach: function () {
      $('.mck-para-content-search').each(function () {
        var $contentSearch = $(this);
        var selectedFilters = {};

        $('table', $contentSearch)
          .tablesorter({
            widgets: [
              //'zebra',
              'stickyHeaders',
              //'pager'
            ]
          })
          .bind('sortBegin', function(e) {
            $('.content-search-list-item-bio', $contentSearch).removeClass('opened');
          })
        ;

        // Inits content-search.`
        mckContentSearchFilterUpdateTotalResultText();
        mckContentSearchFilterUpdateTotalSelectedFiltersText();
        mckContentSearchFilterUpdateStickyFiltersWrapper();
        mckContentSearchFilterUpdateSelectedFiltersByHash();

        $(window).on('resize', function () {
          clearTimeout(window.mckContentSearchFiltersResizedFinished);
          window.mckContentSearchFiltersResizedFinished = setTimeout(function() {
            mckContentSearchFilterUpdateStickyFiltersWrapper();
          }, 250);
        });
        $(window).on('scroll', function () {
          mckContentSearchFilterUpdateStickyFiltersWrapper();
        });

        // When clicking the '+' button.
        $('.filter .add', $contentSearch).click(function () {
          if (!$(this).hasClass('active')) {
            $('.filter .filter-items', $contentSearch).hide();
            $(this).closest('.filter').find('.filter-items').slideDown('fast');
            $('.filter .add', $contentSearch).removeClass('active');
            $(this).addClass('active');
          }
        });

        // When clicking outside of the filters.
        $('body').click(function (ev) {
          var items = $(ev.target).closest('.filter');
          if (!items.length) {
            $('.filter .filter-items', $contentSearch).slideUp('fast');
            $('.filter .add', $contentSearch).removeClass('active');
          }
        });

        // When selecting a filter item.
        $('.filter input', $contentSearch).click(function () {
          var filterName = $(this).attr('rel');
          selectedFilters[filterName] = [];

          var $parentInput = $(this);
          $parentInput.parent().parent().find('ul.items input').each(function () {
            if ($parentInput.prop('checked')) {
              $(this).prop('checked', true);
            }
            else {
              $(this).prop('checked', false);
            }
          });

          $(".filter input[name='content_search_filter_" + filterName + "[]']").each( function () {
            if ($(this).prop('checked')) {
              selectedFilters[filterName].push($(this).val());
            }
          });

          mckContentSearchFilterUpdateContentSearch();

          setTimeout(function () {
            $('.filter .filter-items', $contentSearch).slideUp('fast');
            $('.filter .add', $contentSearch).removeClass('active');
          }, 100);
        });

        // When removing a filter.
        $('.row-selected-filters .items', $contentSearch).on('click', function (ev) {
          if ($(ev.target).hasClass('remove')) {
            var selectedFilterTid = $(ev.target).data('content-search-selected-filter-tid');
            var selectedFilterName = $(ev.target).data('content-search-selected-filter-name');
            $.each(selectedFilters[selectedFilterName], function (k1, v1) {
              if (parseInt(selectedFilterTid) === parseInt(v1)) {
                selectedFilters[selectedFilterName].splice(k1, 1);
              }
            });

            mckContentSearchFilterUpdateContentSearch();
          }
        });

        // When clicking the 'Reset' button.
        $('.row-selected-filters .reset a', $contentSearch).click(function () {
          selectedFilters = {};
          mckContentSearchFilterUpdateContentSearch();
        });

        $('input[name="content_search_keywords"]', $contentSearch).on('blur', function (event) {
          mckContentSearchFilterUpdateContentSearch();
        });
        $('input[name="content_search_keywords"]', $contentSearch).on('keyup', function (event) {
          if (event.keyCode === 13) {
            event.preventDefault();
            mckContentSearchFilterUpdateContentSearch();
          }
        });

        // When clicking on a row.
        $('tr.content-search-list-item.expandable', $contentSearch).click(function () {
          if ($(this).hasClass('expanded')) {
            $(this).removeClass('expanded');
          }
          else {
            $(this).addClass('expanded');
          }

          var id = $(this).data('content-search-list-item-row-id');
          var $bioRow = $('tr.content-search-list-item-bio[data-content-search-list-item-bio-row-id="' + id + '"]');

          $bioRow.insertAfter($(this));

          if ($bioRow.hasClass('opened')) {
            $bioRow.removeClass('opened');
          }
          else {
            $bioRow.addClass('opened').slideDown();
          }
        });

        function mckContentSearchFilterUpdateContentSearch() {
          mckContentSearchFilterUpdateFilterInputs();
          mckContentSearchFilterUpdateSelectedFilters();
          mckContentSearchFilterUpdateListView();
          mckContentSearchFilterUpdateTotalResultText();
          mckContentSearchFilterUpdateTotalSelectedFiltersText();
          mckContentSearchFilterUpdateStickyFiltersWrapper('update');
          mckContentSearchFilterUpdateHashBySelectedFilters();
        }

        function mckContentSearchFilterUpdateFilterInputs() {
          $(".filter", $contentSearch).each( function () {
            var filterName = $(this).attr('rel');

            $(".filter input[name='content_search_filter_" + filterName + "[]']", $contentSearch).each( function () {
              $(this).prop('checked', '');
            });
            selectedFilters[filterName] = selectedFilters[filterName] || [];
            $.each(selectedFilters[filterName], function (k1, v1) {
              $(".filter #content_search_filter_" + filterName + "_" + v1, $contentSearch).prop('checked', 'checked');
            });
          });
        }

        function mckContentSearchFilterUpdateSelectedFilters() {
          var hasFilters = false;
          $(".filter", $contentSearch).each( function () {
            var filterName = $(this).attr('rel');
            if (selectedFilters[filterName] && selectedFilters[filterName].length > 0) {
              hasFilters = true;
            }
          });

          if (hasFilters) {
            $('.row-selected-filters', $contentSearch).show();
            var selectedFiltersHtml = '';
            $(".filter", $contentSearch).each( function () {
              var filterName = $(this).attr('rel');
              $.each(selectedFilters[filterName], function (k1, v1) {
                var label = $('label[for="content_search_filter_' + filterName + '_' + v1 + '"]', $contentSearch).html();
                selectedFiltersHtml += '<div class="item">' + label + '<a class="remove" data-content-search-selected-filter-name="' + filterName + '" data-content-search-selected-filter-tid="' + v1 + '">x</a></div>';
              });
            });
            $('.row-selected-filters .items', $contentSearch).html(selectedFiltersHtml);
          }
          else {
            $('.row-selected-filters', $contentSearch).hide();
          }
        }

        function mckContentSearchFilterUpdateListView() {
          var keywords = $('input[name="content_search_keywords"]', $contentSearch).val();
          var counter = 0;

          $('.list-view .content-search-list-item', $contentSearch).each(function () {
            var $listItem = $(this);
            var needToShow = {};

            /////////////////////////////////////
            // Search by filters.
            /////////////////////////////////////

            $(".filter", $contentSearch).each( function () {
              var $filter = $(this);
              var filterName = $filter.attr('rel');
              var assignedFilters = $listItem.data('content-search-filter-' + filterName).toString().split(',');

              needToShow[filterName] = needToShow[filterName] || false;
              if (selectedFilters[filterName] && selectedFilters[filterName].length > 0) {
                $.each(assignedFilters, function (k1, v1) {
                  $.each(selectedFilters[filterName], function (k2, v2) {
                    if (v1.toString() === v2.toString()) {
                      needToShow[filterName] = true;
                    }
                  });
                })
              }
              else {
                needToShow[filterName] = true;
              }
            });

            var flagForFilters = true;
            $.each(needToShow, function (k, v) {
              if (!v) {
                flagForFilters = false;
              }
            });

            /////////////////////////////////////
            // Search by keywords.
            /////////////////////////////////////

            var flagForKeywords = mckContentSearchSearchRowByKeywords(keywords, $listItem);

            /////////////////////////////////////
            // Show or hide item.
            /////////////////////////////////////

            if (flagForFilters && flagForKeywords) {
              //$listItem.removeClass('hide-flag').show('fast');
              $listItem.css({
                'display': 'table-row',
              })
            }
            else {
              //$listItem.addClass('hide-flag').hide('fast');
              $listItem.css({
                'display': 'none',
              })
            }

            //console.log(counter++);
          });
        }

        function mckContentSearchSearchRowByKeywords(keywords, trRow) {
          //keywords = keywords || '';
          keywords = keywords.toLowerCase().trim();

          var text = '';
          trRow.find('td').each(function () {
            text = text + ' ' + $(this).text();
          });
          text = text.toLowerCase();

          // Entire string search.
          var found1 = false;
          if (text.includes(keywords)) {
            found1 = true;
          }

          // Wildcard search.
          var found2 = true;
          var keywordsArr = keywords.split(' ');
          keywordsArr.forEach(function (keyword, key) {
            keyword = keyword.trim();
            if (!text.includes(keyword)) {
              found2 = false;
            }
          });

          return found1 || found2;
        }

        function mckContentSearchFilterUpdateTotalResultText() {
          var total = 0;
          $('.list-view .content-search-list-item', $contentSearch).each(function () {
            if ($(this).is(":visible")) {
              total++;
            }
          });
          var text = '';
          if (total == 0) {
            text = 'No results found.';
          }
          else if(total == 1) {
            text = '1 result found.';
          }
          else {
            text = total + ' results found.';
          }
          $('.total-results-text', $contentSearch).html(text);
        }

        function mckContentSearchFilterUpdateTotalSelectedFiltersText() {
          var total = 0;
          $('.row-selected-filters .inner > .items > .item', $contentSearch).each(function () {
            total++;
          });
          var text = '';
          if (total == 0) {
            text = 'No filter items selected.';
          }
          else if(total == 1) {
            text = '1 filter item selected.';
          }
          else {
            text = total + ' filter items selected.';
          }
          $('.row-selected-filters .inner > .total-filters-text', $contentSearch).html(text);
        }

        function mckContentSearchFilterUpdateStickyFiltersWrapper(action) {
          var action = action || 'init';

          if ($(document).scrollTop() >= $contentSearch.position().top - $('.mck-para-content-search .filters-wrapper').outerHeight()) {
            var headerHeight = 0;
            if ($('header.global-header').css('position') === 'fixed') {
              headerHeight = $('header.global-header').outerHeight();
            }
            headerHeight = headerHeight || 0;

            var adminMenuHeight = $('#admin-menu').outerHeight();
            adminMenuHeight = adminMenuHeight || 0;
            headerHeight = headerHeight + adminMenuHeight;

            if ($('.slicknav_menu').css('display') !== 'none') {
              var slickNavMenuHeight = $('.slicknav_menu').outerHeight();
              slickNavMenuHeight = slickNavMenuHeight || 0;
              headerHeight = headerHeight + slickNavMenuHeight - 5;
            }

            var filtersWrapperHeight = $('.filters-wrapper', $contentSearch).outerHeight();
            $('.filters-wrapper', $contentSearch).css({
              position: 'fixed',
              'z-index': 50,
              top: headerHeight + 'px',
              left: 0,
              right: 0
            });
            $contentSearch.css({
              'padding-top': filtersWrapperHeight + 'px',
            });

            if (action === 'update') {
              // var top = $('.filters-wrapper', $contentSearch).outerHeight();
              // $('html,body').animate({scrollTop: top}, 'slow');

              mckUtilScrollToTop($('.tablesorter', $contentSearch), [
                $('.mck-para-content-search .filters-wrapper')
              ]);
            }

            var offset = 0;
            if ($('header.global-header').css('position') === 'fixed') {
              offset = $('header.global-header').outerHeight();
            }
            if ($('#admin-menu').length && $('#admin-menu').css('display') !== 'none') {
            //if ($('body').hasClass('admin-menu')) {
              offset += 29;
            }
            if ($('.slicknav_menu').css('display') !== 'none') {
              offset += $('.slicknav_menu').outerHeight() - 5;
            }
            if ($('.mck-para-content-search .filters-wrapper')) {
              offset += $('.mck-para-content-search .filters-wrapper').outerHeight();
            }
            $('.tablesorter-sticky-wrapper').css({
              'margin-top': offset,
              'visibility': 'visible'
            })
          }
          else {
            var filtersWrapperHeight = $('.filters-wrapper', $contentSearch).outerHeight();
            $('.filters-wrapper', $contentSearch).css({
              position: 'relative',
              'z-index': 50,
              top: 'initial',
              left: 'initial',
              right: 'initial',
            });
            $contentSearch.css({
              'padding-top': 'initial',
            });

            $('.tablesorter-sticky-wrapper').css({
              'visibility': 'hidden'
            })
          }
        }

        function mckContentSearchFilterUpdateHashBySelectedFilters() {
          var params = [];
          $.each(selectedFilters, function (key, item) {
            if (item.length > 0) {
              params.push(key + '=' + item.join(','));
            }
          });
          window.location.hash = params.join('&');
        }

        function mckContentSearchFilterUpdateSelectedFiltersByHash() {
          var hash = window.location.hash;
          hash = hash ? hash.split('#') : [];
          hash = hash.length === 2 ? hash[1] : '';
          hash = hash ? hash.split('&') : [];

          var filters = {};
          $.each(hash, function (key, value) {
            if (value) {
              value = value.split('=');
              if (value.length === 2) {
                var v1 = value[0];
                var v2 = value[1];
                filters[v1] = v2.split(',')
              }
            }
          })
          selectedFilters = filters;
          mckContentSearchFilterUpdateContentSearch();
        }

      });
    }
  };
})(jQuery, Drupal);
