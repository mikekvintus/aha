<head>
    <META HTTP-EQUIV="refresh" CONTENT="15">
</head>
<h1>This is our cool display!</h1> - Refreshes every 15 seconds<br/>
<?php
$dirname = "../images/";
$images = glob($dirname."*.jpg");
foreach($images as $image) {
echo '<img src="'.$image.'" style="width:250px;height:250px;"/>';
}
?>
