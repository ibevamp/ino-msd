 $(document).ready(function() {
  // Full Screen Video
  function setVideoHeight(){
    var windowHeight = $(window).height();
    /*if('#admin-menu') {
      var adminHeight = $('#admin-menu').height();
      windowHeight = windowHeight - adminHeight;
    }*/
    if('.slicknav_menu') {
      var slickHeight = $('.slicknav_menu').height();
      windowHeight = windowHeight - slickHeight;
    }
    $('.homepage-videobanner').css({'height' : windowHeight, 'overflow' : 'hidden'});
    //$('.homepage-videobanner').css({'max-height' : "600px", 'overflow' : 'hidden'});
  }
  setVideoHeight();

  //animating();


  heroSetHeight();

  var doit;
  window.onresize = function(){
    clearTimeout(doit);
    doit = setTimeout(setVideoHeight, 600);
  };

   $('.banner-anchors ul li a').on('click', function (e) {
     var href = $(this).attr('href');
     var anchor_id = '';
     if (href.indexOf("#") != -1) {
       anchor_id = href.substr(href.indexOf("#"));
     }
     if (href == window.location.pathname + anchor_id || href == anchor_id) {
       e.preventDefault();
     }
     mckUtilScrollToTop($(anchor_id));
     setTimeout(function () {
       window.location.hash = anchor_id;
     }, 1000);
   });


   $('.custom-menu .sub-menu-item').on('click', function (e) {
     // e.preventDefault();
     // var anchor_id = $(this).data('href');
     // var anchor_id = anchor_id.replace('#', '');
     // console.log(anchor_id);
     // var dest = $("a[name=" + anchor_id + "]").offset().top - 100;
     // $('html, body').animate({
     //   scrollTop: dest
     // }, 1000);
     // return false;


     var href = $(this).attr('href');
     var anchor_id = '';
     if (href.indexOf("#") != -1) {
       anchor_id = href.substr(href.indexOf("#"));
     }
     if (href == window.location.pathname + anchor_id || href == anchor_id) {
       e.preventDefault();
     }

     $('.custom-menu .sub-menu-item').parent().removeClass('active');
     $(this).parent().addClass('active');

     mckUtilScrollToTop($(anchor_id));
     setTimeout(function () {
       window.location.hash = anchor_id;
     }, 1000);
   });


var anchor_id = window.location.hash; 
if(anchor_id != "") {
  // anchor_id = anchor_id.substr(1);
  // console.log(anchor_id);
  // var new_position = $('a[name='+anchor_id+']').offset();
  //  $('html, body').animate({ scrollTop: new_position.top }, 800);

  // setTimeout(function () {
  //   mckUtilScrollToTop($(anchor_id));
  // }, 1000);

  window.onload = function() {
    mckUtilScrollToTop($(anchor_id));
  }
}


	
// Our People popup
    $('.inline-popup').on('click', function () {
        var popup = $(this).parents('.item').find('.people-popup')
        $.magnificPopup.open({
            items: {
                src: popup,
            },
            type: 'inline'
        });
    });


    /* Set speakers item height */
    var speakersSection = $('section.up.three-up.speakers.span-full-width, #three-up, .three-columns, .card-module').not(".accordion-module-wrapper .view-more .card-module");
    setSpeakersColHeight(speakersSection); 
	titleOverImagePosition();	
    window.onresize = function(){
      setSpeakersColHeight(speakersSection);
	  titleOverImagePosition();
   };


   $('.mck-para-venn-diagram').find('.links-wrapper .open-popup-link').on('click', function () {
     var popup = $(this).parents('.point-item').find('.links-wrapper .venn-diagram-point-links-popup');
     $.magnificPopup.open({
       mainClass: 'mck-mfp mck-mfp-large',
       items: {
         src: popup,
       },
       type: 'inline'
     });
   });

carouselItems();

 

// setting unique id for each three col accordion on the page
$(".three-col-accordion").each(function (i) {
    var currentID = "three-col-accordion-" + i;
    $(this).attr("id", currentID);
  });
  
  
  // setting unique id for each three col accordion on the page
$(".one-up .item .iframe-embed").each(function (i) {
	i = i + 1;
    var currentID = "oneup-media-iframe-" + i;
    $(this).attr("id", currentID);
  });
  

// hide / show functionality for three col accordion 
$('.three-col-accordion .show-more-details').on("click", function(e){
    e.preventDefault();


    var currentItem = $(this);
    var parentAccordion = currentItem.parents(".three-col-accordion").attr('id'); 
    console.log(parentAccordion);  
    var currentAccordion = $("#" + parentAccordion);
    var currentContent = currentAccordion.find(".more-content");  


    if($("#" + parentAccordion).hasClass('active-accordion')){
      currentAccordion.removeClass("active-accordion"); 
      currentAccordion.find(".more-content").removeClass("active-content"); 
      currentItem.removeClass("hide-btn");
    }else{
      $(".three-col-accordion").removeClass('active-accordion');
      $(".three-col-accordion .more-content").removeClass("active-content").fadeOut();
      $(".three-col-accordion .show-more-details").removeClass("hide-btn");
      currentAccordion.addClass("active-accordion"); 
      currentAccordion.find(".more-content").addClass("active-content"); 
      currentItem.addClass("hide-btn");
      $('html,body').animate({ scrollTop:currentContent.offset().top}, 'slow');
    }

    //currentItem.toggleClass("hide-btn");
});

 
 /* Custom Gallery Slider - slick Slider */

$(".gallery-slideshow").each(function(index){

  var slickElement = $(this);
  var sliderStatus = slickElement.find('.slider-active');
  


  slickElement.on("init", function(event, slick){
           var i = 1;
           sliderStatus.text(i + '/' + slick.slideCount);
    });
  

  slickElement.slick({
          centerPadding: "240px",
          dots: false,
          arrows: true,
          centerMode: true,
          focusOnSelect: true,
           responsive: [
             {
                breakpoint: 992,
                settings: {
                  arrows: true,
                  centerMode: true,
                  centerPadding: "80px",
                }
              },
              {
                breakpoint: 768,
                settings: {
                  arrows: true,
                  centerMode: false,
                  centerPadding: "0",
                }
              },
              {
                breakpoint: 480,
                settings: {
                  arrows: true,
                  centerMode: false,
                  centerPadding: "0",
                }
              }
            ]
    });


    slickElement.on("afterChange", function(event, slick, currentSlide){
        //console.log(currentSlide);
           var i = (currentSlide ? currentSlide : 0) + 1;
           sliderStatus.text(i + '/' + slick.slideCount);
    });
    

    if (/Mobi/.test(navigator.userAgent)) {
        updateSlider();
     }
});

$(".slick-slideshow").each(function(index){	
	index = index + 1;
	var slideshowWrapperClass = "slideshow-wrapper-" + index;
	$(this).attr("id", slideshowWrapperClass);
	var innerSlideWrapper = $(this).find(".gallery-slideshow");
	var slideshowClass = "slideshow-" + index;
	innerSlideWrapper.attr("id", slideshowClass);
});




$(".slick-link").each(function(){
	$(this).click(function(e) {
		e.preventDefault();
		var slideNo = $(this).attr('slide-number');
		var slideID = $(this).attr('slide-id');
		//var slide = $("#"+ slideID);	
		var slide = document.getElementById(slideID);
		var dest = slide.offsetTop;
		/*dest = destPos.top;
		if(!(dest>0)){
		   dest = destPos.offsetTop;
		   console.log("--".dest);
		}*/
		$('html, body').animate({
			scrollTop: dest
		}, 1000);	
		$("#"+ slideID).slick('slickGoTo', slideNo-1);
	});
});




$(".accordion-module-wrapper").each(function(index){
	index = index + 1;
	var accordionWrapperClass = "accordion-module-wrapper-" + index;
    $(this).attr("id", accordionWrapperClass);
	$("#"+accordionWrapperClass).find(".item").each(function(j){
		itemIndex = j + 1;
		var accordionItemClass = "accordion-item-" +index+ itemIndex;
		$(this).attr("id",accordionItemClass );
	});
});


   $(".accordion-module-wrapper .accordion-item-wrapper .acc-item-link").click(function () {
     if ($(this).parent().hasClass('active')) {
       $(this).parent().removeClass("active");
       $(".accordion-module-wrapper .view-more").hide();
       return false;
     }

     var nid = $(this).data("nid");
     var currentWrapperID = $(this).parents(".accordion-module-wrapper").attr("id");
     var currentItemID = $(this).parent(".item").attr("id");
     currentWrapper = $("#" + currentWrapperID);
     currentItem = currentWrapper.find("#" + currentItemID);
     $(".accordion-module-wrapper .item").removeClass("active");
     currentItem.addClass("active");
     $(".accordion-module-wrapper .view-more").css("display", "none");
     if (nid > 0) {
       $.ajax({
         url: Drupal.settings.basePath + 'views/ajax',
         type: 'POST',
         dataType: 'json',
         data: {
           view_name: 'accordion_content',
           view_display_id: 'block', //your display id
           view_args: nid,
         },
         beforeSend: function () {
           currentWrapper.find(".loading").show();
         },
         success: function (response) {
           if (response[1] !== undefined) {
             var viewHtml = response[1].data;
             /*$(".accordion-module-wrapper .view-more").slideDown( 3000, function() {
               $(".accordion-module-wrapper .view-more").html( viewHtml );
               accCardModuleHeight();
             });*/
             currentWrapper.find(".loading").hide();
             currentWrapper.find(".view-more").css("display", "block");
             currentWrapper.find(".view-more .acc-card-content-wrapper").html(viewHtml);

             var sections = currentWrapper.find(".view-more .card-module");
             setSpeakersColHeight(sections);
             updateCardModuleIds();
             updateArrowPosition(currentItem);
             window.onresize = function () {
               setSpeakersColHeight(sections);
               updateArrowPosition(currentItem);
             };
           }
         },
         error: function (data) {
           console.log('An error occured!');
         }
       });
     }
   });


	
/*
$(".carousel-link").each(function(){
	$(this).click(function(e) {
		e.preventDefault();
		var slideno = $(this).attr('slide-number');
		var slideID = $(this).attr('slide-id');
		var slide = $("#"+ slideID).find('.carousel');		
		var dest = $("#"+ slideID).offset();
		dest = dest.top;
		$('html, body').animate({
			scrollTop: dest
		}, 1000);	
		slide.carousel(slideno);
	});
});

*/



$(".speakers").each( function(){
      var parentDiv = $(this);
      var numItems = parentDiv.find(".item").length;
      console.log("items"+numItems);
      if(numItems <= 2){
         parentDiv.addClass("speakers-two-col");
      }
});



if($(".global-header").length>0){
  $(".page-class").addClass("fixed-header");
}



 $('.profile-card a, .page-node-90 #four-up .item a, .mfp-iframe, .banner-video-link').magnificPopup({
    type:"iframe"
 });

  $('.mfp-image').magnificPopup({
    type:"image"
 });

 $('.mfp-inline').magnificPopup({
    type:"inline"
 });

 

   /* Magnific Pop Up - Customized to show pop based on pop up type selected */

   // initiates pop up for any link with "pop-up-link" as class
   $('.pop-up-link').magnificPopup();


   // treats pop up as "image" and "gallery" type

$('.popup-link-slideshow').on('click', function(event) {
    event.preventDefault();
    
    var gallery =$('#pop-up-gallery');
    
    $(gallery).magnificPopup({
      delegate: 'img',
      type:'image',
      gallery: {
        enabled: true
      }
    }).magnificPopup('open');
  });

 $('.popup-gallery').each(function() {
    $(this).magnificPopup({
        delegate: 'a', 
        type: 'image',
        gallery:{enabled:true, navigateByImgClick: true,}
    });
});   



/*
var browser = navigator.userAgent;
if (browser.match("Firefox")) {
  var anchor_id = window.location.hash; 
  //console.log(anchor_id);
  var new_position = $(anchor_id).offset(); 
  //console.log(new_position);
  window.scrollTo(new_position.left,new_position.top); 
}
*/

   /*  End of magnific pop up */


  
$('#open-popup').magnificPopup({
    items: [
      {
        src: '#my-popup', // CSS selector of an element on page that should be used as a popup
        type: 'inline'
      }
    ],
    gallery: {
      enabled: true
    }
});
 
 
 
 
         $('.owl-carousel').owlCarousel({
            loop:true,
            margin:10,
            autoHeight:true,
            responsiveClass:true,
            responsive:{
                0:{
                    items:1,
                    nav:false
                },
                600:{
                    items:1,
                    nav:false
                },
                1000:{
                    items:1,
                    nav:false,
                    loop:false
                }
            }
        });

    var $accordion = $('.accordion.career-person');
    $accordion.click(function () {
        
      $(this).toggleClass('open');

    });

    //force the username on the inital logintoboggan page
    $(".page-toboggan #edit-name").val("gils");
    $("").hide();

    $(window).scroll(function(){
        $('header').removeClass('_menu-open');
    });

/*


    $(window).scroll(function() {
    if ($(this).scrollTop()) {
        $(".back-top-top").fadeIn();
    } else {
        $(".back-to-top").fadeOut();
    }
      if($(window).scrollTop() + $(window).height() < $(document).height() - $(".footer").height()) {
        $('.back-top-top').css("position","fixed");    //resetting it
        $('.back-top-top').css("bottom","0"); //resetting it
}
        if($(window).scrollTop() + $(window).height() > $(document).height() - $("#footer").height()) {
        $('.back-top-top').css("position","relative"); // make it related
        $('.back-top-top').css("bottom","60px"); // 60 px, height of #toTop
 }
    
    });
*/


    $(".back-to-top").on("click",function() {
       console.log(1);
       $("html, body").animate({scrollTop: 0}, 1000);
    });




    //showMoreSpeakers();

    function showMoreSpeakers(){
        totalItems = $(".speakers-participants-list .profile-card.three-up-col").size();
        //console.log(totalItems);
        itemsToShow=3;
        $('.speakers-participants-list .profile-card.three-up-col:lt('+itemsToShow+')').show();
        $('.load-more-speakers').click(function () { 
        itemsToShow= (itemsToShow+3 <= totalItems) ? itemsToShow+3 : totalItems;
        $('.speakers-participants-list .profile-card.three-up-col:lt('+itemsToShow+')').show();
        });
    }

function animating(){
  $ = jQuery;
  console.log(1);
  $('img').addClass('hidden').waypoint({handler: function() {$(this.element).addClass("visible animated fadeIn")},offset: '90%'});
}


function accCardModuleHeight(){	
	
}


function updateArrowPosition(activeCard){
	var itemWidth = activeCard.outerWidth();
	var arrowWidth = 50;
	var dest = activeCard.offset().left - activeCard.parent().offset().left + itemWidth / 2 - arrowWidth / 2;
	currentWrapper.find(".view-more #acc-card-module-0 span").css("left",dest+"px");
}


function titleOverImagePosition(){
	$(".card-module.title-over-image").each(function(){
		$(this).find(".item").each(function(){
			var topPos = $(this).find(".thumbnail-bg").height()/2 - $(this).find(".headline").height()/2;
			$(this).find(".card-content .headline").css("top",topPos);
		});
	});
	
	

	$(".accordion-module-wrapper .accordion-inner-wrapper.title-over-image").each(function(){
		var currentCardModule = $(this);
		currentCardModule.find(".item").each(function(){
			if(currentCardModule.hasClass("subtitle-over-image")){
				var topPos = $(this).find(".thumbnail").height()/2 - $(this).find(".heading-link").height() ;
				$(this).find(".heading-link").css("top",topPos);
				var subtitlePos = $(this).find(".thumbnail").height()/2 + $(this).find(".heading-link").height()/2 - 30  ;
				$(this).find(".subtitle").css("top",subtitlePos);
			
			}else{
				var topPos = $(this).find(".thumbnail").height()/2 - $(this).find(".heading-link").height()/2;
				$(this).find(".heading-link").css("top",topPos);
			}
		});
	});
}

function heroSetHeight(){ 
    var headerHeight = $(".global-header").height();
    var footerHeight = $(".global-footer").height();
    console.log(headerHeight);
    var windowHeight = $(window).height();
    console.log(windowHeight);
    var videoHeight = windowHeight - footerHeight;

    videoHeight = videoHeight + "px";
    console.log(videoHeight);

    $('#vertical-tabs-hero').attr("style", "height:"+videoHeight);
  }




function carouselItems(){

   $('.carousel-module').each(function(i){
      i = i+1;
      //Set id of each carousel ( enable multiple carousels )
      var currentCarouselID = "carousel-module-" + i;
      $(this).attr('id', currentCarouselID);
      var carouselModule = $("#" + currentCarouselID); 
      var carouselWrapper = carouselModule.find('.carousel');     
      var currentTargetID = "carousel-" + i;      
      carouselWrapper.attr('id', currentTargetID);     


       // Set active slide for each carousel module on the page
       carouselWrapper.find('.carousel-item').each(function(i){
          var currentCarouselItem = $(this);
          carouselItemID = "carousel-item-" + i;      
          currentCarouselItem.attr('id',carouselItemID);
       });


       $('#carousel-item-0').addClass('active');
      
      var carouselParent = carouselModule.find(".carousel-indicators");
      var carouselIndicators = carouselParent.find("li");

      // Set target for each nav item in carousel
       carouselIndicators.each(function(i){
          var currentIndicator = $(this);
          carouselIndicatorsTarget = "#" + currentTargetID;   
          carouselNavIndex = "carousel-nav-" + i;
          currentIndicator.attr('data-target',carouselIndicatorsTarget);
          currentIndicator.attr('id',carouselNavIndex);

          currentIndicator.on("click", function() {
          var $this = $(this),        
          gutter = -87 ,
          windowWidth = $(window).width();
          carouselIndicators.removeClass("active");
          currentIndicator.addClass('active');
          $this.addClass("active");
          if($(window).width() <= 992 && $(window).width() >= 768){
              gutter = -170;
          }else if($(window).width() >= 992 && $(window).width() <= 1020){
              gutter = -107;
          }
          else if($(window).width() >= 1020 && $(window).width() <= 1200){
              gutter = -128;
          }
          else if($(window).width() >= 1200){
              gutter = -101;
          }        
          carouselParent.css({ 'transform': 'translate(' + gutter * $this.index() + 'px' + ', ' + '0' + ')' });
      }); 

       $('#carousel-nav-0').addClass('active');
       }); 

   });


}


function updateCardModuleIds(){
	$(".accordion-module-wrapper .view-more .card-module").each(function(index){
			var className = "acc-card-module-" + index;
			$(this).attr('id',className);
    });
}

    function setSpeakersColHeight(section){

     $(section).each(function(){       
       var maxHeight = 0;
       var currentSection = $(this);
       currentSection.find(".item").css("height","auto");
            currentSection.find(".item").each(function(){
               if ($(this).height() > maxHeight) { 
                  maxHeight = $(this).height();
              }
            });
             currentSection.find('.item').height(maxHeight);
     });
    
  }

  
    if($('#my-video').length > 0){
      player = videojs('#my-video');
      player.on('ready', function () {
       player.addClass('show');
      });

      var overlay = $('.videojs-hero-overlay');
      player.on(['play', 'playing'], function () {
       overlay.addClass('hide');
       $('.homepage-videobanner').css({'max-height' : "600px", 'overflow' : 'hidden'});
      });
      player.on(['pause'], function () {
       overlay.removeClass('hide');
       $('.homepage-videobanner').css({'max-height' : "500px", 'overflow' : 'hidden'});
      });

    }

     





    
});

function updateSlider(){
 // $('#gallery-slideshow').addClass('gallery-slick-mob');
  var arrowOffsetTop = $('.slick-slide img').height() + 50;
  var sliderCounterTop = $('.slick-slide img').height() + 40;
  $('.slick-prev, .slick-next').css('top',arrowOffsetTop);
  $('.gallery-slideshow .slider-active').css('top',sliderCounterTop);

}


var getUrlParameter = function getUrlParameter(sParam) {
    var sPageURL = decodeURIComponent(window.location.search.substring(1)),
        sURLVariables = sPageURL.split('&'),
        sParameterName,
        i;

    for (i = 0; i < sURLVariables.length; i++) {
        sParameterName = sURLVariables[i].split('=');

        if (sParameterName[0] === sParam) {
            return sParameterName[1] === undefined ? true : sParameterName[1];
        }
    }
};

$(document).ready(function () {
  var qstring = getUrlParameter('submitted');

  if(qstring == "true"){
   $.magnificPopup.open({
    items: {
        src: '<div id="test-popup" class="white-popup">Thank you for your Summary submission.</div>' ,
    },
    type: 'inline'
      });
 }

});

