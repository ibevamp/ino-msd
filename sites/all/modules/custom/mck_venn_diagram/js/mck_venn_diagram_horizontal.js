(function ($, Drupal) {
  Drupal.behaviors.mckVennDiagramHorizontalSwitcher = {
    attach: function () {
      $('.mck-para-venn-diagram--tpl-horizontal').each(function () {
        var $vennDiagram = $(this);

        $('.diagrams-wrapper .diagram', $vennDiagram).click(function () {
          if (!$(this).hasClass('active')) {
            $('.diagrams-wrapper .diagram', $vennDiagram).removeClass('active');
            $(this).addClass('active');

            var selectedDiagramId = $(this).data('venn-diagram-diagram-id');
            $('.content-wrapper div[data-venn-diagram-links-id]', $vennDiagram).hide();
            $('.content-wrapper div[data-venn-diagram-links-id="' + selectedDiagramId + '"]', $vennDiagram).fadeIn();

            // Updates the arrow's left position.
            $arrow = $('.content-wrapper div[data-venn-diagram-links-id="' + selectedDiagramId + '"]', $vennDiagram).find('.arrow');
            $arrow.css({
              left: $(this).offset().left - $vennDiagram.find('.content-wrapper').offset().left + $(this).outerWidth() / 2 - $arrow.outerWidth() / 2
            });

            var new_position_top = $('.content-wrapper-anchor', $vennDiagram).position().top -  $('header.fixed-header').outerHeight() - $('#admin-menu').outerHeight();
            $('html, body' ).animate({
              scrollTop: new_position_top
            }, 1000);
          }
          else {
            $('.diagrams-wrapper .diagram', $vennDiagram).removeClass('active');
            var selectedDiagramId = $(this).data('venn-diagram-diagram-id');
            $('.content-wrapper div[data-venn-diagram-links-id]', $vennDiagram).hide();
          }

        });
      });

    }
  };
})(jQuery, Drupal);
