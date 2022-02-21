#include <iostream>

using namespace std;

class Product
{
private:
    int idProduct;
    int price;

public:
    Product() {}

    Product(int idProduct, int price)
    {
        this->idProduct = idProduct;
        this->price = price;
    }

    int getIdProduct()
    {
        return this->idProduct;
    }

    void setIdProduct(int idProduct)
    {
        this->idProduct = idProduct;
    }

    int getPrice()
    {
        return this->price;
    }

    void setPrice(int price)
    {
        this->price = price;
    }

    void printProduct()
    {
        cout << "ID Product: " << getIdProduct() << endl;
        cout << "Price: Rp. " << getPrice() << endl;
    }

    ~Product() {}
};