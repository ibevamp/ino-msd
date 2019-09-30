/**
 *
 * @param el
 *   The jQuery object.
 * @param offsetHeight
 * @returns {boolean}
 *
 * Usages:
 * - mckUtilElementInViewport($('.section'))
 * - mckUtilElementInViewport($('.section'), 100)
 */
function mckUtilElementInViewport(el, offsetHeight) {
  offsetHeight = offsetHeight || 0;
  var elementTop = el.offset().top + offsetHeight;
  var elementBottom = elementTop + el.outerHeight();
  var viewportTop = $(window).scrollTop();
  var viewportBottom = viewportTop + $(window).height();
  return elementBottom > viewportTop && elementTop < viewportBottom;
}

/**
 *
 * @param fromElement
 * @param timeout
 *
 * Usages:
 * - mckUtilScrollToTop($('#section'))
 */
function mckUtilScrollToTop(fromElement, timeout) {
  if (!fromElement.position()) {
    return false;
  }
  timeout = timeout || 1000;
  var new_position_top = fromElement.offset().top;

  if ($('.mck-base-header').css('position') === 'fixed') {
    new_position_top = new_position_top - $('.mck-base-header').outerHeight();
  }
  if ($('#admin-menu').css('position') === 'fixed') {
    new_position_top = new_position_top - $('#admin-menu').outerHeight();
  }
  if ($('.global-header').css('position') === 'fixed') {
    new_position_top = new_position_top - $('.global-header').outerHeight();
  }

  $('html, body' ).animate({
    scrollTop: new_position_top
  }, timeout);
}

/**
 *
 * @param fromElement
 * @param toElement
 *   - The toElement must be a fixed position element.
 * @param timeout
 *
 * Usages:
 * - mckUtilScrollToElement($('#section'), $('.global-header'))
 */
function mckUtilScrollToElement(fromElement, toElement, timeout) {
  if (!fromElement.position() || !toElement.position()) {
    return false;
  }

  timeout = timeout || 1000;
  if (toElement.css('position') === 'fixed') {
    var new_position_top = fromElement.position().top - toElement.offset().top - toElement.outerHeight();
    $('html, body' ).animate({
      scrollTop: new_position_top
    }, timeout);
  }
  else {
    mckUtilScrollToTop(fromElement, timeout);
  }
}
