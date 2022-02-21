#include <string>
#include <iostream>

using namespace std;

#include "Product.cpp"

class Hardware : public Product
{
private:
    string brand;
    string model;

public:
    Hardware() {}
    Hardware(string brand, string model)
    {
        this->brand = brand;
        this->model = model;
    }

    string getBrand()
    {
        return this->brand;
    }
    void setBrand(string brand)
    {
        this->brand = brand;
    }

    string getModel()
    {
        return this->model;
    }
    void setModel(string model)
    {
        this->model = model;
    }

    void printHardware()
    {
        cout << "Brand: " << getBrand() << endl;
        cout << "Model: " << getModel() << endl;
    }
    ~Hardware() {}
};