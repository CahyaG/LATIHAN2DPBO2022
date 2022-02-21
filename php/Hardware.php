<?php
include("Product.php");

class Hardware extends Product
{
    private $brand = "";
    private $model = "";

    public function __construct($brand = "", $model = "")
    {
        $this->brand = $brand;
        $this->model = $model;
    }

    public function getBrand()
    {
        return $this->brand;
    }
    public function setBrand($brand)
    {
        $this->brand = $brand;
    }

    public function getModel()
    {
        return $this->model;
    }
    public function setModel($model)
    {
        $this->model = $model;
    }

    public function printHardware()
    {
        echo "Brand: " . $this->getBrand() . "<br/>";
        echo "Model: " . $this->getModel() . "<br/>";
    }
}
