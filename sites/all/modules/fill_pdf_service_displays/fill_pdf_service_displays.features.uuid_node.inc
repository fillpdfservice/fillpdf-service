<?php

/**
 * Implementation of hook_uuid_features_default_content().
 */
function fill_pdf_service_displays_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'type' => 'page',
  'language' => '',
  'uid' => '187',
  'status' => '1',
  'created' => '1331152832',
  'changed' => '1331842224',
  'comment' => '0',
  'promote' => '0',
  'moderate' => '0',
  'sticky' => '0',
  'tnid' => '0',
  'translate' => '0',
  'revision_uid' => '187',
  'title' => 'FAQ',
  'body' => 'Jump to a question:
<ol>
  <li><a href="#qh">How do I use this service?</a></li>
  <li><a href="#qi">How do I fill (stamp) images into my PDF?</a></li>
  <li><a href="#qr">When is my monthly limit for PDF merges reset?</a></li>
  <li><a href="#qdo">Do I have to use the Drupal module to read and fill PDFs with the service?</a></li>
  <li><a href="#qs">Where are your Terms of Service?</a></li>
  <li><a href="#qp">Is my confidential information safe?</a></li>
  <li><a href="#qc">The Premium and Business plans say that they come with help setting up one initial form\'s Webform/CCK-to-PDF mapping. What does this mean, and what are the terms?</a></li>
  <li><a href="#qu">I still don\'t understand what this service does. What should I do?</a></li>
</ol>

<strong id="qh">How do I use this service?</strong>
Fill PDF Service is currently intended for use with the Drupal CMS and the <a href="http://drupal.org/project/fillpdf">Fill PDF module</a>. Install and configure that module, fill in the field for your API key, and the module will transparently interface with the service when it needs to read or fill PDFs.

<strong id="qi">How do I fill (stamp) images into my PDF?</strong>
Image stamping is covered in the <a href="http://drupal.org/node/1431638#image-stamping">Drupal module documentation</a>. Follow the instructions there, and note the limitations. The same limitations apply to the service. You can also <a href="/contact">contact Fill PDF Service</a> if you need professional help making your PDF compatible with this feature. There is a fee for this service.

<strong id="qr">When is my monthly usage for PDF merges reset?</strong>
Your monthly limit is reset on the first of the month each month.

<strong id="qdo">Do I have to use the Drupal module to read and fill PDFs with the service?</strong>
It is possible to use it directly if a developer looks at the programming code in the Drupal module and adapts it to their needs. API calls are made over the XML-RPC protocol.

<strong id="qs">Where are your Terms of Service?</strong>
Fill PDF Service doesn\'t have hard-and-fast terms of service at the moment. The features and limits you see on the <a href="/products">Pricing + Signup page</a> are essentially the terms of service. As more users begin to use the service, Fill PDF Service will revise its terms as necessary, and it reserves the right to close user accounts if they willfully affect the quality of service for other users.

Put simply, however, exercise common sense, and you\'ll be fine. If you have concerns about your planned usage, please <a href="/contact">contact Fill PDF Service</a>.

<strong id="qp">Is my information safe? What if your service gets compromised?</strong>
<strong>Yes</strong>; Fill PDF Service has an SSL certificate so that your interaction with the service can be encrypted over a trusted connection. For maximum safety, make sure that you select <em>Use HTTPS</em> when configuring the Fill PDF module in Drupal.

<strong>Fill PDF Service does not retain your PDF templates or data for more than a few moments.</strong>

When you make a request to the service, your PDF template is transmitted. If you are parsing/reading fields in the PDF, this is all that is sent. If you are filling in the PDF with data, the names and values of PDF fields (including images needed to stamp image fields) are also sent. This data is momentarily saved to temporary storage so that Fill PDF Service can fill your request, and it is destroyed immediately afterward.

<strong>Fill PDF Service does retain some statistical information:</strong>

Fill PDF Service may record statistical information about your usage to enable it to provide and improve the service. For example, it stores how many times you have populated PDFs (so it can check it against your monthly limit), and it may store the size of the data you have transmitted so that it can estimate server bandwidth needs and provide appropriately-priced subscription plans.

As far as privacy goes, Fill PDF Service doesn\'t share your information, nor does it want to. The site uses Google Analytics to collect information about site traffic and visitors so Fill PDF Service can improve the service and present information better. You can search the Internet for add-ons for your Web Browser that disable this tracking, and the Service Web site will respect that setting.

As such, cookies may be stored on your computer for various activities, as is common on most Web sites. This has to be done so that you can log in, sign up for the service, and so on.

<strong id="qc">The Premium and Business plans say that they come with help setting up one initial form\'s Webform/CCK-to-PDF mapping. What does this mean, and what are the terms?</strong>
This service covers the upload of one interactive PDF template and the configuration of up to 20 fields within the Drupal Fill PDF module\'s administration screens. In addition, the mapped data must come from the Token or Webform Tokens modules. If the PDF template needs to be made interactive, more than 20 fields need to be configured, or advanced data mapping (such as stamping an image field with a QR Code) is needed, those portions of the work will be billed as consulting hours. Fill PDF Service will let you know if this is the case and provide an estimate prior to proceeding.

<strong id="qu">I still don\'t understand what this service does. What should I do?</strong>
This service is primarily aimed at Drupal developers using the Fill PDF module. Try talking to your developer if you need help understanding the benefits of using it versus other alternatives. You (or your developer) can also check out the <a href="/content/why-web-service">Why the Web Service?</a> article.
',
  'teaser' => 'Jump to a question:
<ol>
  <li><a href="#qh">How do I use this service?</a></li>
  <li><a href="#qi">How do I fill (stamp) images into my PDF?</a></li>
  <li><a href="#qr">When is my monthly limit for PDF merges reset?</a></li>
  <li><a href="#qdo">Do I have to use the Drupal module to read and fill PDFs with the service?</a></li>
  <li><a href="#qs">Where are your Terms of Service?</a></li>
  <li><a href="#qp">Is my confidential information safe?</a></li>',
  'log' => '',
  'revision_timestamp' => '1331842224',
  'format' => '1',
  'name' => 'wizonesolutions',
  'picture' => '',
  'data' => 'a:4:{s:6:"mollom";a:2:{s:10:"session_id";s:29:"1283813741-1009067ea2b9d5e865";s:7:"captcha";s:5:"gbe4m";}s:7:"contact";i:1;s:13:"form_build_id";s:37:"form-59cd329dfb81796f648d558988a2dad9";s:5:"table";a:1:{i:5;a:6:{s:4:"name";s:15:"FillPDF License";s:6:"remove";i:0;s:10:"expiration";s:10:"1331791258";s:8:"polarity";s:3:"add";s:3:"qty";s:0:"";s:11:"granularity";s:3:"day";}}}',
  'path' => 'content/faq',
  'last_comment_timestamp' => '1331152832',
  'last_comment_name' => NULL,
  'comment_count' => '0',
  'taxonomy' => array(),
  'files' => array(),
  'page_title' => FALSE,
  'uuid' => 'e63198a2-6eda-11e1-80db-001bfc5286c3',
  'revision_uuid' => NULL,
  'pathauto_perform_alias' => FALSE,
  'date' => '2012-03-07 13:40:32 -0700',
);
  return $nodes;
}
