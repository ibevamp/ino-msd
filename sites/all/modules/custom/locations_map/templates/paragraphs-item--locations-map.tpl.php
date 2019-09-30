<?php
drupal_add_css(drupal_get_path('module', 'locations_map') . '/css/locations_map.css');
?>

<div class="mck-para-locations-map mck-para-locations-map-<?php echo $paragraphs['id']; ?>">
  <div class="container">
    <div class="row">
      <div class="col">
        <?php if(isset($paragraphs['title'])){ ?> 
			<div class="chart-title"><?php echo $paragraphs['title']; ?></div>
		<?php } ?>
        <div class="chart-map" id="mck-para-locations-map-<?php echo $paragraphs['id']; ?>"></div>
      </div>
    </div>
  </div>
</div>

<script src="https://www.amcharts.com/lib/4/core.js"></script>
<script src="https://www.amcharts.com/lib/4/maps.js"></script>
<script src="https://www.amcharts.com/lib/4/geodata/worldLow.js"></script>
<script>
  am4core.options.autoSetClassName = true;

  /////////////////////////////////////////////////////////////
  // Create map instance
  /////////////////////////////////////////////////////////////

  var chart = am4core.create("mck-para-locations-map-<?php echo $paragraphs['id']; ?>", am4maps.MapChart);

  // Enable mouse wheel zooming.
  chart.chartContainer.wheelable = false;

  // Set map definition
  chart.geodata = am4geodata_worldLow;

  // Set projection
  chart.projection = new am4maps.projections.Miller();

  // Show zoom control.
  chart.zoomControl = new am4maps.ZoomControl();

  /////////////////////////////////////////////////////////////
  // Create map polygon series
  /////////////////////////////////////////////////////////////

  var polygonSeries = chart.series.push(new am4maps.MapPolygonSeries());

  // Make map load polygon (like country names) data from GeoJSON
  polygonSeries.useGeodata = true;

  // Remove Antarctica
  polygonSeries.exclude = ["AQ"];


  <?php if ($paragraphs['highlight'] == 'country') { ?>
  var polygonTemplate = polygonSeries.mapPolygons.template;

  // Bind "fill" property to "fill" key in data
  polygonTemplate.propertyFields.fill = "maker_fill_color";

  // Create hover state and set alternative fill color
  var hs = polygonTemplate.states.create("hover");
  hs.propertyFields.fill = "maker_hover_fill_color";

  // polygonTemplate.tooltipText = "{title}";
  // polygonSeries.tooltip.getFillFromObject = false;
  // polygonSeries.tooltip.background.fill = am4core.color("#fff");
  // polygonSeries.tooltip.label.fill = am4core.color("#000");
  // polygonSeries.tooltip.label.padding(8,8,8,8);

  polygonSeries.data = <?php echo $paragraphs['items']; ?>;

  polygonTemplate.events.on("hit", function(ev) {
    chart.closeAllPopups();

    if (ev.target.dataItem.dataContext.popup) {
      var popup = chart.openPopup(ev.target.dataItem.dataContext.popup);
      popup.showCurtain = true;
      // Set popup position to related to the current selected maker.
      popup.top = 40;
      popup.left = 40;
    }
  }, this);
  <?php } ?>

  <?php if ($paragraphs['highlight'] == 'city') { ?>
  /////////////////////////////////////////////////////////////
  // Create image series
  /////////////////////////////////////////////////////////////

  var imageSeries = chart.series.push(new am4maps.MapImageSeries());
  imageSeries.tooltip.getFillFromObject = false;
  imageSeries.tooltip.background.fill = am4core.color("#fff");
  imageSeries.tooltip.label.fill = am4core.color("#000");
  imageSeries.tooltip.label.padding(8,8,8,8);
  imageSeries.data = <?php echo $paragraphs['items']; ?>;

  // Create a circle image in image series template so it gets replicated to all new images
  var imageSeriesTemplate = imageSeries.mapImages.template;
  // Set property fields
  imageSeriesTemplate.propertyFields.latitude = "latitude";
  imageSeriesTemplate.propertyFields.longitude = "longitude";

  var maker = imageSeriesTemplate.createChild(am4core.Circle);
  maker.tooltipText = "{title}";
  maker.tooltipY = -<?php echo $paragraphs['maker_radius']; ?>;
  maker.fill = am4core.color("<?php echo $paragraphs['maker_fill_color']; ?>");
  maker.stroke = am4core.color("#666");
  maker.nonScaling = true;
  maker.radius = <?php echo $paragraphs['maker_radius']; ?>;
  maker.strokeWidth = 0;
  maker.nonScaling = false;
  maker.events.on("hit", function(ev) {
    chart.closeAllPopups();
    var popup = chart.openPopup(ev.target.dataItem.dataContext.popup);
    popup.showCurtain = true;
    // Set popup position to related to the current selected maker.
    popup.top = 40;
    popup.left = 40;
  }, this);
  <?php } ?>
</script>
