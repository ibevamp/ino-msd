(function ($, Drupal) {
  Drupal.behaviors.mckVennDiagramMagnificPopup = {
    attach: function () {
      $('.mck-mfp-gallery').each(function () {
        var popupSlideshow = [];
        var counter = '';
        var first = true;
        $(this).find('a').each(function () {
          var showCounter = $(this).data('showcounter');
          if (first == true) {
            counter = (showCounter == true) ? '%curr% of %total%' : '';
            first = false;
          }
          var itemSrc = $(this).data('href');
          var itemType = $(this).data('type');
          popupSlideshow.push({
            src: itemSrc,
            type: itemType
          });
        });
        $(this).magnificPopup({
          items: popupSlideshow,
          mainClass: 'mck-mfp-large',
          callbacks: {
            buildControls: function() {
              // re-appends controls inside the main container
              if (this.arrowLeft && this.arrowRight) {
                this.contentContainer.append(this.arrowLeft.add(this.arrowRight));
              }
            }
          },
          gallery: {
            enabled: true,
            tCounter: counter
          },
          type: 'image'
        });

      });
    }
  };
})(jQuery, Drupal);

