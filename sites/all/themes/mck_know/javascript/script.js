(function ($) {

  "use strict";

  $(document).ready(function () {

    $('.primary-navigation li').hoverIntent(function () {
      $(this).addClass('hover');
    }, function () {
      $(this).removeClass('hover');
    });

    var $header = $('.global-header');

    $('.menu-toggle').click(function (e) {
      if ($header.hasClass('_menu-open')) {
        return;
      }

      e.stopPropagation();

      $header.addClass('_menu-open');
      $('body').addClass('_fixed');
    });

    var $mainNav = $('.hamburger-nav .main-nav');

    $('.hamburger-nav .nav-list.nav-group-left li').click(function (e) {
      e.stopPropagation();
      // e.preventDefault();

      // var $this = $(this);

      // incrementMenuLevel();
      // $this.closest('.nav-list').find('li').removeClass('nav-item--active');
      // $this.addClass('nav-item--active');
    });

    // $('.close-sub-nav').click(function (e) {
    //   e.stopPropagation();
    //   e.preventDefault();

    //   decrementMenuLevel();
    // });

    $(document).on('click', function(event) {
      $header.removeClass('_menu-open');
      $('body').removeClass('_fixed');
    });

    function incrementMenuLevel() {
      var level = getMenuLevel();

      $mainNav[0].dataset.level = '-menu-level' + ++level;
    }

    function decrementMenuLevel() {
      var level = getMenuLevel();

      $mainNav[0].dataset.level = '-menu-level' + --level;
    }

    function getMenuLevel() {
      var level = $mainNav[0].dataset.level;
      var levelNum = level.match(/-menu-level(\d+)/);

      return parseInt(levelNum[1]);
    }

  });

}(jQuery));
