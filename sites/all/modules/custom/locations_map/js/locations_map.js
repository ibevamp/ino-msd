(function ($) {

  $(document).ready(function () {
    $('body').click(function (ev) {
      var item = $(ev.target).parentsUntil('.paragraphs-item-type-locations-map-item');

      $('input[name*="[field_locsmap_item_location][und][0][value]"]', item).geocomplete().bind("geocode:result", function(event, result) {
        var city = '', country = '', country_code = '';
        for (var i = 0; i < result.address_components.length; i++) {
          if (result.address_components[i].types.indexOf('locality') >= 0) {
            city = result.address_components[i].long_name;
          }
          if (result.address_components[i].types.indexOf('country') >= 0) {
            country = result.address_components[i].long_name;
            country_code = result.address_components[i].short_name;
          }
        }

        $('input[name*="[field_locsmap_item_latitude][und][0][value]"]', item).val(result.geometry.location.lat);
        $('input[name*="[field_locsmap_item_longitude][und][0][value]"]', item).val(result.geometry.location.lng);
        $('select[name*="[field_locsmap_item_country][und]"]', item).val(country_code);
      });
    });
  });

}(jQuery));
