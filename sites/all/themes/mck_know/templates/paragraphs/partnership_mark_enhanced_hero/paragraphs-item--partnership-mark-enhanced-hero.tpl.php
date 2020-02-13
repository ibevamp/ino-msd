
<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */

//ddl($content);
$paraID   = $variables['elements']['#entity']->item_id;

$background   = isset($content['field_pm_background'])? $content['field_pm_background']['#items'][0]['value'] : "";
$pm_position     = isset($content['field_pm_position'])? $content['field_pm_position']['#items'][0]['value'] : "";
$heading_font = isset($content['field_pm_heading_font'])? $content['field_pm_heading_font']['#items'][0]['value'] : "";

$image_cutout       = isset($content['field_pm_image_cutout']['#items'][0]['uri']) ? $content['field_pm_image_cutout']['#items'][0]['uri'] : NULL;
$image_cutout       = isset($image_cutout) ? file_create_url($image_cutout) : NULL;

$logo       = isset($content['field_pm_logo']['#items'][0]['uri']) ? $content['field_pm_logo']['#items'][0]['uri'] : NULL;
$logo       = isset($logo) ? file_create_url($logo) : NULL;

$signature_logo       = isset($content['field_pm_signature_logo']['#items'][0]['uri']) ? $content['field_pm_signature_logo']['#items'][0]['uri'] : NULL;
$signature_logo       = isset($signature_logo) ? file_create_url($signature_logo) : NULL;

$title              = isset($content['field_pm_title']) ? render($content['field_pm_title']) : '';
$subtitle           = isset($content['field_pm_subtitle']) ? render($content['field_pm_subtitle']) : '';
$date           = isset($content['field_pm_date']) ? render($content['field_pm_date']) : '';
$client_name           = isset($content['field_pm_client_name']) ? render($content['field_pm_client_name']) : '';
$partner_name           = isset($content['field_pm_partner_name']) ? render($content['field_pm_partner_name']) : '';
$description           = isset($content['field_pm_description']) ? render($content['field_pm_description']) : '';
$logoSize    = $content['field_pm_larger_logo'][0]['#markup']? "larger-logo" : "";


?>

<div class="wrapper oneup-medium-hero partnership-mark-enhanced-hero <?php echo $pm_position; ?> <?php echo $heading_font; ?> <?php echo $logoSize; ?>">
  <section class="up medium-hero careers">
    <div class="partnership-mark <?php echo $background; ?>">
			<div class="animation"> 
<svg id="seq1" xmlns="http://www.w3.org/2000/svg" preserveAspectRatio="none" class="lines-seq seq1" width="2070" height="1420" viewBox="0 0 2070 1420"> 
<path id="s1line1" d="M106.2,6640.47,2259.46-3764.09" fill="none" stroke="#00a9f4" stroke-width="1.5"></path> 
<path id="s1line2" d="M18.27,6546.9l2338-10251.06" fill="none" stroke="#01a6f4" stroke-width="1.5"></path>
 <path id="s1line3" d="M-69.65,6453.34,2453.1-3644.22" fill="none" stroke="#01a4f3" stroke-width="1.5"></path>
 <path id="s1line4" d="M-157.82,6359.38l2707-9943.21" fill="none" stroke="#02a1f3" stroke-width="1.5"></path> 
 <path id="s1line5" d="M-245.28,6266.57,2645.58-3523.65" fill="none" stroke="#039ff3" stroke-width="1.5"></path>
 <path id="s1line6" d="M-333.2,6173,2742.39-3463.71" fill="none" stroke="#049cf2" stroke-width="1.5"></path>
 <path id="s1line7" d="M-422.12,6079.5,2838.21-3403.71" fill="none" stroke="#049af2" stroke-width="1.5"></path>
 <path id="s1line8" d="M-509.29,5985.48,2935.27-3343.38" fill="none" stroke="#0597f2" stroke-width="1.5"></path>
 <path id="s1line9" d="M-597.75,5892.73,3030.69-3283.14" fill="none" stroke="#0695f1" stroke-width="1.5"></path>
 <path id="s1line10" d="M-685.67,5799.17,3127.51-3223.2" fill="none" stroke="#0792f1" stroke-width="1.5"></path>
 <path id="s1line11" d="M-773.84,5705.2l3997.41-8868" fill="none" stroke="#078ff1" stroke-width="1.5"></path>
 <path id="s1line12" d="M-861.77,5611.64,3320.39-3102.87" fill="none" stroke="#088df0" stroke-width="1.5"></path>
 <path id="s1line13" d="M-949.23,5518.83l4366-8561.52" fill="none" stroke="#098af0" stroke-width="1.5"></path> 
 <path id="s1line14" d="M-1037.39,5424.86,3512.87-2982.29" fill="none" stroke="#0a88f0" stroke-width="1.5"></path>
 <path id="s1line15" d="M-1125.32,5331.3l4735-8253.66" fill="none" stroke="#0a85ef" stroke-width="1.5"></path>
 <path id="s1line16" d="M-1213.24,5237.74,3706.5-2862.42" fill="none" stroke="#0b83ef" stroke-width="1.5"></path> 
 <path id="s1line17" d="M-1302.1,5145.24,3802.38-2801.43" fill="none" stroke="#0c80ef" stroke-width="1.5"></path>
 <path id="s1line18" d="M-1388.87,5051,3899-2741.85" fill="none" stroke="#0c7dee" stroke-width="1.5"></path> 
 <path id="s1line19" d="M-1477.79,4957.46,3994.8-2681.85" fill="none" stroke="#0d7bee" stroke-width="1.5"></path>
 <path id="s1line20" d="M-1565.71,4863.9,4091.62-2621.91" fill="none" stroke="#0e78ee" stroke-width="1.5"></path>
 <path id="s1line21" d="M-1653.82,4770.94,4187.74-2560.52" fill="none" stroke="#0f76ed" stroke-width="1.5"></path>
 <path id="s1line22" d="M-1741.74,4677.37l6026.3-7178" fill="none" stroke="#0f73ed" stroke-width="1.5"></path>
 <path id="s1line23" d="M-1829.91,4583.41l6210.53-7023.6" fill="none" stroke="#1071ec" stroke-width="1.5"></path>
 <path id="s1line24" d="M-1917.37,4490.6,4477-2380" fill="none" stroke="#116eec" stroke-width="1.5"></path> 
 <path id="s1line25" d="M-2005.29,4397l6579.15-6717.1" fill="none" stroke="#126cec" stroke-width="1.5"></path>
 <path id="s1line26" d="M-2093.46,4303.07,4669.92-2259.68" fill="none" stroke="#1269eb" stroke-width="1.5"></path> <path id="s1line27" d="M-2181.38,4209.51,4766.74-2199.74" fill="none" stroke="#1366eb" stroke-width="1.5"></path> <path id="s1line28" d="M-2269.84,4116.76l7132-6256.26" fill="none" stroke="#1464eb" stroke-width="1.5"></path> <path id="s1line29" d="M-2357.76,4023.2,4959-2079.56" fill="none" stroke="#1461ea" stroke-width="1.5"></path> <path id="s1line30" d="M-2444.94,3929.17l7501-5948.4" fill="none" stroke="#155fea" stroke-width="1.5"></path> <path id="s1line31" d="M-2533.39,3836.42,5151.45-1959" fill="none" stroke="#165cea" stroke-width="1.5"></path> <path id="s1line32" d="M-2621.32,3742.86,5248.27-1899" fill="none" stroke="#175ae9" stroke-width="1.5"></path> <path id="s1line33" d="M-2709.49,3648.9,5344.33-1838.65" fill="none" stroke="#1757e9" stroke-width="1.5"></path> <path id="s1line34" d="M-2797.41,3555.33l8238.56-5334" fill="none" stroke="#1854e9" stroke-width="1.5"></path> <path id="s1line35" d="M-2885.33,3461.77,5538-1718.79" fill="none" stroke="#1952e8" stroke-width="1.5"></path> <path id="s1line36" d="M-2974.25,3368.27l8608-5027.06" fill="none" stroke="#1a4fe8" stroke-width="1.5"></path> <path id="s1line37" d="M-3061,3275l8791.41-4873.2" fill="none" stroke="#1a4de8" stroke-width="1.5"></path> <path id="s1line38" d="M-3149.88,3181.49l8976.14-4719.7" fill="none" stroke="#1b4ae7" stroke-width="1.5"></path> <path id="s1line39" d="M-3237.8,3087.93,5923.08-1478.28" fill="none" stroke="#1c48e7" stroke-width="1.5"></path> <path id="s1line40" d="M-3325.73,2994.37,6019.9-1418.34" fill="none" stroke="#1d45e7" stroke-width="1.5"></path> <path id="s1line41" d="M-3413.43,2901.16l9529-4258.86" fill="none" stroke="#1d43e6" stroke-width="1.5"></path> <path id="s1line42" d="M-3501.35,2807.59,6212.38-1297.76" fill="none" stroke="#1e40e6" stroke-width="1.5"></path> </svg> <svg id="seq2" xmlns="http://www.w3.org/2000/svg" preserveAspectRatio="none" class="lines-seq seq2" width="2070" height="1420" viewBox="0 0 2070 1420"> <path id="s2line1" d="M-539.72-4148.72l2654.25,10113" fill="none" stroke="#00a9f4"></path> <path id="s2line2" d="M-591.82-4049.48l2731,9909.25" fill="none" stroke="#01a6f4"></path> <path id="s2line3" d="M-643.51-3949.8l2807,9705.49" fill="none" stroke="#01a4f3"></path> <path id="s2line4" d="M-695.23-3849.26,2187.7,5652.46" fill="none" stroke="#02a1f3"></path> <path id="s2line5" d="M-746.92-3749.58,2212,5548.38" fill="none" stroke="#039ff3"></path> <path id="s2line6" d="M-798.6-3649.9,2236.21,5444.29" fill="none" stroke="#049cf2"></path> <path id="s2line7" d="M-850.29-3550.22,2260.46,5340.2" fill="none" stroke="#049af2"></path> <path id="s2line8" d="M-902-3450.54,2285.6,5235.28" fill="none" stroke="#0597f2"></path> <path id="s2line9" d="M-954.1-3350.43,2310.27,5131.63" fill="none" stroke="#0695f1"></path> <path id="s2line10" d="M-1005.79-3250.75l3340.32,8278.3" fill="none" stroke="#0792f1"></path> <path id="s2line11" d="M-1057.48-3151.08,2358.78,4923.46" fill="none" stroke="#078ff1"></path> <path id="s2line12" d="M-1109.17-3051.4,2383,4819.37" fill="none" stroke="#088df0"></path> <path id="s2line13" d="M-1161.3-2951.29l3569,7667" fill="none" stroke="#098af0"></path> <path id="s2line14" d="M-1213-2851.62,2432,4611.64" fill="none" stroke="#0a88f0"></path> <path id="s2line15" d="M-1264.68-2751.94,2456.21,4507.55" fill="none" stroke="#0a85ef"></path> <path id="s2line16" d="M-1316.36-2652.25,2481.35,4402.63" fill="none" stroke="#0b83ef"></path> <path id="s2line17" d="M-1368.08-2551.71,2505.57,4299.41" fill="none" stroke="#0c80ef"></path> <path id="s2line18" d="M-1420.18-2452.47,2530.27,4194.9" fill="none" stroke="#0c7dee"></path> <path id="s2line19" d="M-1471.45-2352.35,2554.08,4091.23" fill="none" stroke="#0d7bee"></path> <path id="s2line20" d="M-1523.55-2253.11,2578.78,3986.73" fill="none" stroke="#0e78ee"></path> <path id="s2line21" d="M-1575.24-2153.43,2603,3882.64" fill="none" stroke="#0f76ed"></path> <path id="s2line22" d="M-1626.51-2053.3,2627.72,3778.14" fill="none" stroke="#0f73ed"></path> <path id="s2line23" d="M-1677.76-1954,2652.4,3674.5" fill="none" stroke="#1071ec"></path> <path id="s2line24" d="M-1729.89-1853.94l4407,5424.79" fill="none" stroke="#116eec"></path> <path id="s2line25" d="M-1782-1753.84,2700.9,3466.32" fill="none" stroke="#126cec"></path> <path id="s2line26" d="M-1833.71-1654.16,2726,3363.12" fill="none" stroke="#1269eb"></path> <path id="s2line27" d="M-1885.84-1554.06,2749.83,3258.59" fill="none" stroke="#1366eb"></path> <path id="s2line28" d="M-1937.53-1454.38,2774.08,3154.5" fill="none" stroke="#1464eb"></path> <path id="s2line29" d="M-1988.77-1355.11,2799.64,3050" fill="none" stroke="#1461ea"></path> <path id="s2line30" d="M-2040.46-1255.43,2823.89,2945.94" fill="none" stroke="#155fea"></path> <path id="s2line31" d="M-2092.58-1155.34,2847.72,2841.4" fill="none" stroke="#165cea"></path> <path id="s2line32" d="M-2144.28-1055.65,2872.82,2738.2" fill="none" stroke="#175ae9"></path> <path id="s2line33" d="M-2196-956l5093,3590.09" fill="none" stroke="#1757e9"></path> <path id="s2line34" d="M-2248.09-855.88l5169,3385.47" fill="none" stroke="#1854e9"></path> <path id="s2line35" d="M-2298.92-756.17,2946,2425.53" fill="none" stroke="#1952e8"></path> <path id="s2line36" d="M-2350.61-656.49,2970.27,2321.44" fill="none" stroke="#1a4fe8"></path> <path id="s2line37" d="M-2402.74-556.39,2994.94,2217.8" fill="none" stroke="#1a4de8"></path> <path id="s2line38" d="M-2454.43-456.71,3019.19,2113.71" fill="none" stroke="#1b4ae7"></path> <path id="s2line39" d="M-2506.53-357.47,3043.89,2009.2" fill="none" stroke="#1c48e7"></path> <path id="s2line40" d="M-2558.69-256.51l5626.38,2162" fill="none" stroke="#1d45e7"></path> <path id="s2line41" d="M-2609.94-157.25,3092.37,1801.89" fill="none" stroke="#1d43e6"></path> <path id="s2line42" d="M-2661.62-57.56,3117.51,1697" fill="none" stroke="#1e40e6"></path> </svg></div><div  class="text-wrapper text-xl -text-center main-heading">
				<h2  class="headline section-heading"><?php echo render($title) ?></h2>
				<h4  class="headline section-heading"><?php echo render($subtitle) ?><?php echo render($date) ?></h4>
					<?php if(isset($content['field_pm_logo']) && ($content['field_pm_logo_position_banner'][0]['#markup'] == 1)){ ?>
					<div class="banner-client-details">
						<?php if(isset($content['field_pm_logo_descr'])){
							print $logo_descr;
						} ?>
						<div class="client-logo" style="background-image: url(<?php echo $logo?>);"></div>
					</div>
				<?php } ?>
			</div>
			
			<div class="photo-render" style="background-image: url(<?php echo $image_cutout?>);"></div>
    </div>
	<?php if(isset($content['field_pm_logo']) || isset($content['field_pm_description']) ){ ?>
		<article class="up body">
		  <header class="text-xl">
			   <?php if(isset($content['field_pm_logo']) && ($content['field_pm_logo_position_banner'][0]['#markup'] == 0)){ ?>
				 <div class="client-details">
					Our proposal for:
					<div class="client-logo" style="background-image: url(<?php echo $logo?>);"></div>
				</div>   
			 <?php } ?>				
				<?php if(isset($content['field_pm_description'])){ ?>		   
					<div class="description">
							<p>Welcome</p>
							<p>Dear <?php echo $client_name; ?></p>
							<?php echo render($description) ?>
							<?php if(isset($content['field_pm_partner_name'])){ ?>
								<p>Kind Regards,</p>	
								<p><?php echo $partner_name; ?></p>
							<?php } ?>		
							<?php if(isset($content['field_pm_signature_logo'])){ ?>
								<div class="signature-logo" style="background-image: url(<?php echo $signature_logo; ?>);"></div>
							<?php } ?>					
					</div>
				<?php } ?>	
				
				
			 
		  </header>
		</article>
	<?php } ?>
  </section>
</div>
