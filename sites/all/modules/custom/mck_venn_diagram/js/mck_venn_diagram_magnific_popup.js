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
            },
            open: function() {
              var mfp = $.magnificPopup.instance;
              var proto = $.magnificPopup.proto;

              function updateArrow () {
                if(mfp.index < mfp.items.length - 1) {
                  $('.mfp-arrow-right').show();
                }
                else {
                  $('.mfp-arrow-right').hide();
                }

                if(mfp.index > 0) {
                  $('.mfp-arrow-left').show();
                }
                else {
                  $('.mfp-arrow-left').hide();
                }
              }

              // extend function that moves to next item
              mfp.next = function() {
                if(mfp.index < mfp.items.length - 1) {
                  proto.next.call(mfp);
                }
                updateArrow();
              };
              // same with prev method
              mfp.prev = function() {
                if(mfp.index > 0) {
                  proto.prev.call(mfp);
                }
                updateArrow();
              };

              updateArrow();
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

