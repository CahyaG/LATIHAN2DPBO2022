<?php
include("Memory.php");

$mem = new Memory();
$mem->setIdProduct(1);
$mem->setPrice(3000000);
$mem->setBrand("Acer");
$mem->setModel("Acer-12");
$mem->setFrequency(2667);
$mem->setMemorySize(8);
$mem->setSupportCuda(False);

$mem->printProduct();
$mem->printHardware();
$mem->printMemory();
