(function ($, Drupal) {
  Drupal.behaviors.mckInfographicCircleChartProgressBar = {
    attach: function () {

      function mckInfographicCircleLazyAnimation() {
        $('.mck-para-infographic-type-circle circle.progress-actual').not('.processed').each(function () {
          if (mckUtilElementInViewport($(this))) {
            var $circle = $(this);
            var radius = $circle.attr('r');
            var circumference = radius * 2 * Math.PI;
            var progress = $circle.attr('data-progress');
            var strokeWidth = $circle.attr('data-stroke-width');
            var offset = circumference - progress / 100 * circumference;

            $circle.css({
              'stroke-dasharray': circumference + ', ' + circumference,
              'stroke-dashoffset': circumference
            });

            // Adds the 'processed' class so it will not run the animation again.
            var classes = $(this).attr('class');
            $(this).attr('class', classes + ' processed');

            setTimeout(function () {
              $circle.css({
                'stroke-width': strokeWidth,
                'stroke-dasharray': circumference + ', ' + circumference,
                'stroke-dashoffset': offset
              });
            }, 600);
          }
        })
      }

      $(window).on('DOMContentLoaded load resize scroll', mckInfographicCircleLazyAnimation);
    }
  };


})(jQuery, Drupal);
