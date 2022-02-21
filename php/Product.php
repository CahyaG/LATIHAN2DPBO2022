<?php
class Product
{
    private $idProduct = 0;
    private $price = 0;

    public function __construct($idProduct = 0, $price = 0)
    {
        $this->idProduct = $idProduct;
        $this->price = $price;
    }

    public function getIdProduct()
    {
        return $this->idProduct;
    }
    public function setIdProduct($idProduct)
    {
        $this->idProduct = $idProduct;
    }

    public function getPrice()
    {
        return $this->price;
    }
    public function setPrice($price)
    {
        $this->price = $price;
    }
    public function printProduct()
    {
        echo "ID Product: " . $this->getIdProduct() . "<br/>";
        echo "Price: Rp." . number_format($this->getPrice(), 2, ",", ".") . "<br/>";
    }
}
