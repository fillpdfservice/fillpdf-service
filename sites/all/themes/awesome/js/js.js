// rounded corners
	$(function(){			
			$('.b').corner("tl tr bl br 15px");		
			$('.c').corner("tl tr bl br 10px");
			$('.d').corner("tl tr bl br 10px");							
			});
//end rounded corners

// slide-out
	$(function() {
		$("div.panel_button").click(function(){
			$("div#slide-down").animate({
				height: "350px"
			})
			.animate({
				height: "400px"
			}, "fast");
			$("div.panel_button").toggle();
		});	
		
	   $("div#hide_button").click(function(){
			$("div#slide-down").animate({
				height: "0px"
			}, "fast");
	   });	
	});

$(document).ready(function(){
  // Reset Font Size
  var originalFontSize = $('html').css('font-size');
  $(".resetFont").click(function(){
  $('html').css('font-size', originalFontSize);
  });
  // Increase Font Size
  $(".increaseFont").click(function(){
  	var currentFontSize = $('html').css('font-size');
 	var currentFontSizeNum = parseFloat(currentFontSize, 10);
    var newFontSize = currentFontSizeNum*1.2;
	$('html').css('font-size', newFontSize);
	return false;
  });
  // Decrease Font Size
  $(".decreaseFont").click(function(){
  	var currentFontSize = $('html').css('font-size');
 	var currentFontSizeNum = parseFloat(currentFontSize, 10);
    var newFontSize = currentFontSizeNum*0.8;
	$('html').css('font-size', newFontSize);
	return false;
  });
});

$(document).ready(function() {
	
	// the div that will be hidden/shown
	var panel = $("#box");
	//the button that will toggle the panel
	var button = $("#top a");
	// do you want the panel to start off collapsed or expanded?
	var initialState = "expanded"; // "expanded" OR "collapsed"
	// the class added when the panel is hidden
	var activeClass = "hidden";
	// the text of the button when the panel's expanded
	var visibleText = "hide";
	// the text of the button when the panel's collapsed
	var hiddenText = "show";
	
	//---------------------------
	// don't    edit    below    this    line,
	// unless you really know what you're doing
	//---------------------------
	
	if($.cookie("panelState") == undefined) {
		$.cookie("panelState", initialState);
	} 
	
	var state = $.cookie("panelState");
	
	if(state == "collapsed") {
		panel.hide();
		button.text(hiddenText);
		button.addClass(activeClass);
	}
   
	button.click(function(){
		if($.cookie("panelState") == "expanded") {
			$.cookie("panelState", "collapsed");
			button.text(hiddenText);
			button.addClass(activeClass);
		} else {
			$.cookie("panelState", "expanded");
			button.text(visibleText);
			button.removeClass(activeClass);
		}
		
		panel.slideToggle("slow");
		
		return false;
	});
});