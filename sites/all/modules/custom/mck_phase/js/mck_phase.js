(function ($, Drupal) {
  Drupal.behaviors.mckPhaseSlideshow = {
    attach: function () {
      $('.mck-para-phase').each(function () {
        var $phase = $(this);

        $('.phases .phase', $phase).click(function () {
          if (!$(this).hasClass('active')) {
            var curId = $(this).data('phase-phase-id');

            $('.phases .phase', $phase).removeClass('active');
            $(this).addClass('active');


            $('.contents .content', $phase).removeClass('active').hide();
            $('.contents .content[data-phase-content-id=' + curId + ']', $phase).addClass('active').fadeIn();

            $('.phases .arrow', $phase).attr('data-phase-arrow-id', curId);
          }
        });

        $('.contents .content .close-btn', $phase).click(function () {
          $('.phases .phase', $phase).removeClass('active');
          $('.phases .arrow', $phase).attr('data-phase-arrow-id', '');
          $('.contents .content', $phase).removeClass('active').fadeOut();
        });
      });
    }
  };
})(jQuery, Drupal);
