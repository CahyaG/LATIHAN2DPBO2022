#include <iostream>

using namespace std;

class Product
{
private:
    // attribute dari Product
    int idProduct;
    int price;

public:
    // contructor
    Product() {}

    Product(int idProduct, int price)
    {
        this->idProduct = idProduct;
        this->price = price;
    }

    // getter setter idProduct
    int getIdProduct()
    {
        return this->idProduct;
    }

    void setIdProduct(int idProduct)
    {
        this->idProduct = idProduct;
    }

    // getter setter price
    int getPrice()
    {
        return this->price;
    }

    void setPrice(int price)
    {
        this->price = price;
    }

    // method untuk menampilkan semua attribute Product
    void printProduct()
    {
        cout << "ID Product: " << getIdProduct() << endl;
        cout << "Price: Rp. " << getPrice() << endl;
    }

    // destructor
    ~Product() {}
};