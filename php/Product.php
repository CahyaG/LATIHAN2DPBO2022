<?php
class Product
{
    // attribute Product
    private $idProduct = 0;
    private $price = 0;
    // constructor
    public function __construct($idProduct = 0, $price = 0)
    {
        $this->idProduct = $idProduct;
        $this->price = $price;
    }
    // getter setter idProduct
    public function getIdProduct()
    {
        return $this->idProduct;
    }
    public function setIdProduct($idProduct)
    {
        $this->idProduct = $idProduct;
    }
    // getter setter price
    public function getPrice()
    {
        return $this->price;
    }
    public function setPrice($price)
    {
        $this->price = $price;
    }
    // method untuk menampilkan semua attribute Product
    public function printProduct()
    {
        echo "ID Product: " . $this->getIdProduct() . "<br/>";
        // price di format agar tampil dalam format idr
        echo "Price: Rp." . number_format($this->getPrice(), 2, ",", ".") . "<br/>";
    }
}
