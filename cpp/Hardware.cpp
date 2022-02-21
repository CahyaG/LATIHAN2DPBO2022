#include <string>
#include <iostream>

using namespace std;

#include "Product.cpp"

// Hardware merupakan turunan dari Product
class Hardware : public Product
{
private:
    // attribute dari Hardware
    string brand;
    string model;

public:
    // contructor
    Hardware() {}
    Hardware(string brand, string model)
    {
        this->brand = brand;
        this->model = model;
    }

    // getter setter brand
    string getBrand()
    {
        return this->brand;
    }
    void setBrand(string brand)
    {
        this->brand = brand;
    }

    // getter setter model
    string getModel()
    {
        return this->model;
    }
    void setModel(string model)
    {
        this->model = model;
    }

    // method print semua atribut hardware
    void printHardware()
    {
        cout << "Brand: " << getBrand() << endl;
        cout << "Model: " << getModel() << endl;
    }

    // destructor
    ~Hardware() {}
};