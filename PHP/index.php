<?php

include "Product.php";
include "Hardware.php";
include "Memory.php";



$item = new Memory();
$item->setIdProduct("A01");
$item->setBrand("Asus");
$item->setModel("Rx5500");
$item->setFrequency(2000);
$item->setMemorySize(16);
$item->setSupportsCuda("NO");
$item->setPrice(4000000);


echo "========== DATA BARANG ==========="."<br/>";

	echo "<br/>";
	echo "+Barang Ke -  1" . "<br/>" . "<br>";

	echo "ID Product: ".$item->getIdProduct()."<br/>";
	echo "Brand           : ".$item->getBrand()."<br/>";
	echo "Model           : ".$item->getModel()."<br/>";
	echo "Frekuensi       : ".$item->getFrequency()." MHz"."<br/>";
	echo "Ukuran Memori   : ".$item->getMemorySize()." GB"."<br/>";
	echo "Supports Cuda   : ".$item->getSupportsCuda()."<br/>";
	echo "Harga           : Rp ".$item->getPrice()."<br/>";


?>