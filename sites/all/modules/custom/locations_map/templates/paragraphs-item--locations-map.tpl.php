<div><a name="<?php echo $paragraphs['anchor']; ?>" id="<?php echo $paragraphs['anchor']; ?>"></a></div>

<div class="mck-para-locations-map mck-para-locations-map-<?php echo $paragraphs['id']; ?>" data-locations-map-id="<?php echo $paragraphs['id']; ?>">
  <div class="container">
    <div class="row">
      <div class="col">
        <div style="position: relative">
          <?php if (!empty($paragraphs['title'])) { ?>
            <div class="chart-title"><?php echo $paragraphs['title']; ?></div>
          <?php } ?>

          <?php if (count($paragraphs['legends']) > 0) { ?>
            <div class="chart-legends">
              <div class="filter-by">Filter by:</div>
              <ul>
                <?php foreach ($paragraphs['legends'] as $legend) { ?>
                  <li>
                    <a href="javascript:void(0);" class="legend" data-locations-map-legend-color="<?php echo $legend['color']; ?>">
                      <div class="left"><div class="color" style="background: <?php echo $legend['color']; ?>;"></div></div>
                      <div class="right"><div class="label"><?php echo check_plain($legend['label']); ?></div></div>
                    </a>
                  </li>
                <?php } ?>
              </ul>
              <div class="view-all"><a href="javascript:void(0);">View all</a></div>
            </div>
          <?php } ?>
        </div>
      </div>
    </div>
  </div>
  <div class="container-fluid pl-0 pr-0">
    <div class="row">
      <div class="col">
        <div class="chart-map" id="mck-para-locations-map-<?php echo $paragraphs['id']; ?>"></div>
      </div>
    </div>
  </div>
</div>

<script src="https://www.amcharts.com/lib/4/core.js"></script>
<script src="https://www.amcharts.com/lib/4/maps.js"></script>
<script src="https://www.amcharts.com/lib/4/geodata/worldLow.js"></script>
<script>
  var mckLocationsMaps = mckLocationsMaps || [];
  mckLocationsMaps.push({
    id: <?php echo $paragraphs['id']; ?>,
    map: new mckLocationsMap(),
    paragraphs: {
      highlight: "<?php echo $paragraphs['highlight']; ?>",
      items: <?php echo ($paragraphs['items']); ?>
    }
  });

  function mckLocationsMap() {
    /////////////////////////////////////////////////////////////
    // Create map instance
    /////////////////////////////////////////////////////////////

    am4core.options.autoSetClassName = true;

    var chart = am4core.create("mck-para-locations-map-<?php echo $paragraphs['id']; ?>", am4maps.MapChart);
    // Enable mouse wheel zooming.
    chart.chartContainer.wheelable = false;
    // Set map definition
    chart.geodata = am4geodata_worldLow;
    // Set projection
    chart.projection = new am4maps.projections.Miller();
    // Show zoom control.
    chart.zoomControl = new am4maps.ZoomControl();

    <?php if ($paragraphs['highlight'] == 'country') { ?>
    /////////////////////////////////////////////////////////////
    // Create map polygon series
    /////////////////////////////////////////////////////////////

    var polygonSeries = chart.series.push(new am4maps.MapPolygonSeries());
    // Make map load polygon (like country names) data from GeoJSON
    polygonSeries.useGeodata = true;
    // Remove Antarctica
    polygonSeries.exclude = ["AQ"];
    polygonSeries.data = <?php echo $paragraphs['items']; ?>;

    var mapSeriesTemplate = polygonSeries.mapPolygons.template;

    // Bind "fill" property to "fill" key in data
    mapSeriesTemplate.propertyFields.fill = "maker_fill_color";

    <?php if (!empty($paragraphs['maker_hover_fill_color'])) { ?>
    // Create hover state and set alternative fill color
    var mapSeriesTemplateHoverState = mapSeriesTemplate.states.create("hover");
    mapSeriesTemplateHoverState.propertyFields.fill = "maker_hover_fill_color";
    <?php } ?>

    mapSeriesTemplate.events.on("hit", function(ev) {
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
    // Create map polygon series
    /////////////////////////////////////////////////////////////

    var polygonSeries = chart.series.push(new am4maps.MapPolygonSeries());
    // Make map load polygon (like country names) data from GeoJSON
    polygonSeries.useGeodata = true;
    // Remove Antarctica
    polygonSeries.exclude = ["AQ"];

    /////////////////////////////////////////////////////////////
    // Create image series
    /////////////////////////////////////////////////////////////

    var mapSeries = chart.series.push(new am4maps.MapImageSeries());
    mapSeries.tooltip.getFillFromObject = false;
    mapSeries.tooltip.background.fill = am4core.color("#fff");
    mapSeries.tooltip.label.fill = am4core.color("#000");
    mapSeries.tooltip.label.padding(8,8,8,8);
    mapSeries.data = <?php echo $paragraphs['items']; ?>;

    // Create a circle image in image series template so it gets replicated to all new images
    var mapSeriesTemplate = mapSeries.mapImages.template;
    // Set property fields
    mapSeriesTemplate.propertyFields.latitude = "latitude";
    mapSeriesTemplate.propertyFields.longitude = "longitude";
    mapSeriesTemplate.propertyFields.fill = "maker_fill_color";

    <?php if (!empty($paragraphs['maker_hover_fill_color'])) { ?>
    // Create hover state and set alternative fill color
    var mapSeriesTemplateHoverState = mapSeriesTemplate.states.create("hover");
    mapSeriesTemplateHoverState.propertyFields.fill = "maker_hover_fill_color";
    <?php } ?>

    var mapSeriesTemplateMaker = mapSeriesTemplate.createChild(am4core.Circle);
    mapSeriesTemplateMaker.tooltipText = "{title}";
    mapSeriesTemplateMaker.tooltipY = -<?php echo $paragraphs['maker_radius']; ?>;
    //mapSeriesTemplateMaker.fill = am4core.color("<?php echo $paragraphs['maker_fill_color']; ?>");
    mapSeriesTemplateMaker.nonScaling = true;
    mapSeriesTemplateMaker.radius = <?php echo $paragraphs['maker_radius']; ?>;
    mapSeriesTemplateMaker.stroke = am4core.color("<?php echo $paragraphs['maker_border_color']; ?>");
    mapSeriesTemplateMaker.strokeWidth = <?php echo $paragraphs['maker_border_width']; ?>;
    mapSeriesTemplateMaker.nonScaling = false;
    mapSeriesTemplateMaker.events.on("hit", function(ev) {
      chart.closeAllPopups();
      var popup = chart.openPopup(ev.target.dataItem.dataContext.popup);
      popup.showCurtain = true;
      // Set popup position to related to the current selected maker.
      popup.top = 20;
      popup.left = 20;
    }, this);
    <?php } ?>

    return {
      chart: typeof chart !== 'undefined' ? chart : null,
      polygonSeries: typeof polygonSeries !== 'undefined' ? polygonSeries : null,
      mapSeries: typeof mapSeries !== 'undefined' ? mapSeries : null,
      mapSeriesTemplate: mapSeriesTemplate || null,
      mapSeriesTemplateMaker: typeof mapSeriesTemplateMaker !== 'undefined' ? mapSeriesTemplateMaker : null,
    }
  }
</script>
