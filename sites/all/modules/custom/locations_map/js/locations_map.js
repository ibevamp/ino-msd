(function ($) {

  Drupal.behaviors.locationsMapLegendFilter = {
    attach: function () {
      $('.mck-para-locations-map').each(function () {
        var $para = $(this);
        var curLocationsMapId = $para.data('locations-map-id');

        $('.chart-legends a.legend', $para).click(function () {
          $('.chart-legends', $para).addClass('active');
          $('.chart-legends a.legend', $para).removeClass('active').addClass('inactive');
          $(this).removeClass('inactive').addClass('active');
          var legendColor = $(this).data('locations-map-legend-color');

          $.each(mckLocationsMaps, function (key, item) {
            if (item.id === curLocationsMapId) {
              var filteredData = [];
              $.each(mckLocationsMaps[key].paragraphs.items, function (key, item) {
                if (item.maker_fill_color && item.maker_fill_color.toLowerCase() === legendColor.toLowerCase()) {
                  filteredData.push(item);
                }
              });

              if (filteredData.length > 0) {
                if (mckLocationsMaps[key].paragraphs.highlight === 'country') {
                  mckLocationsMaps[key].map.polygonSeries.data = filteredData;
                }
                else if (mckLocationsMaps[key].paragraphs.highlight === 'city') {
                  mckLocationsMaps[key].map.mapSeries.data = filteredData;
                }
              }
              else {
                if (mckLocationsMaps[key].paragraphs.highlight === 'country') {
                  filteredData = []
                  $.each(mckLocationsMaps[key].paragraphs.items, function (key, item) {
                    var itemCopy = $.merge({}, item);
                    if (itemCopy.maker_fill_color) {
                      delete itemCopy['maker_fill_color'];
                    }
                    filteredData.push(itemCopy);
                  });
                  mckLocationsMaps[key].map.polygonSeries.data = filteredData;
                }
                else if (mckLocationsMaps[key].paragraphs.highlight === 'city') {
                  mckLocationsMaps[key].map.mapSeries.data = filteredData;
                }
              }
            }
          });
        });

        $('.chart-legends .view-all a', $para).click(function () {
          $('.chart-legends', $para).removeClass('active');
          $('.chart-legends a.legend', $para).removeClass('active inactive');

          $.each(mckLocationsMaps, function (key, item) {
            if (item.id === curLocationsMapId) {
              if (mckLocationsMaps[key].paragraphs.highlight === 'country') {
                mckLocationsMaps[key].map.polygonSeries.data = mckLocationsMaps[key].paragraphs.items;
              }
              else if (mckLocationsMaps[key].paragraphs.highlight === 'city') {
                mckLocationsMaps[key].map.mapSeries.data = mckLocationsMaps[key].paragraphs.items;
              }
            }
          });
        });
      });
    }
  };

}(jQuery));