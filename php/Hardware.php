<?php
include("Product.php");

// Hardware merupakan turunan Product
class Hardware extends Product
{
    // attribute Hardware
    private $brand = "";
    private $model = "";
    // constructor
    public function __construct($brand = "", $model = "")
    {
        $this->brand = $brand;
        $this->model = $model;
    }
    // getter setter brand
    public function getBrand()
    {
        return $this->brand;
    }
    public function setBrand($brand)
    {
        $this->brand = $brand;
    }
    // getter setter model
    public function getModel()
    {
        return $this->model;
    }
    public function setModel($model)
    {
        $this->model = $model;
    }
    // method untuk menampilkan semua attribute Hardware
    public function printHardware()
    {
        echo "Brand: " . $this->getBrand() . "<br/>";
        echo "Model: " . $this->getModel() . "<br/>";
    }
}
