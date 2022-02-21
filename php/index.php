<?php
include("Memory.php");

// membuat object dari class Memory
$mem = new Memory();
// set setiap attribute dari object $mem
$mem->setIdProduct(1);
$mem->setPrice(3000000);
$mem->setBrand("Acer");
$mem->setModel("Acer-12");
$mem->setFrequency(2667);
$mem->setMemorySize(8);
$mem->setSupportCuda(False);
// print hasil
$mem->printProduct();
$mem->printHardware();
$mem->printMemory();
