(function ($, Drupal) {
  Drupal.behaviors.mckVennDiagramVerticalSwitcher = {
    attach: function () {
      $('.mck-para-venn-diagram--tpl-vertical').each(function () {
        var $vennDiagram = $(this);
        $('.diagrams-wrapper .diagram', $vennDiagram).click(function () {
          if (!$(this).hasClass('active')) {
            $('.diagrams-wrapper .diagram', $vennDiagram).removeClass('active');
            $(this).addClass('active');

            var selectedDiagramId = $(this).data('venn-diagram-diagram-id');
            $('.content-wrapper div[data-venn-diagram-links-id]', $vennDiagram).hide();
            $('.content-wrapper div[data-venn-diagram-links-id="' + selectedDiagramId + '"]', $vennDiagram).fadeIn();
          }
        });
      });
    }
  };
})(jQuery, Drupal);
