#include <bits/stdc++.h>

using namespace std;

#include "Memory.cpp"

string toLower(string s)
{
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c)
              { return std::tolower(c); });
    return s;
}

int main()
{
    Memory mem;
    int id, price, freq, memSize;
    string brand, model, supCuda;
    cout << "ID Product: ";
    cin >> id;
    mem.setIdProduct(id);

    cout << "Price(Rp): ";
    cin >> price;
    mem.setPrice(price);

    cout << "Brand: ";
    cin >> brand;
    mem.setBrand(brand);

    cout << "Model: ";
    cin >> model;
    mem.setModel(model);

    cout << "Frequency (Mhz): ";
    cin >> freq;
    mem.setFrequency(freq);

    cout << "Memory Size (GB): ";
    cin >> memSize;
    mem.setMemorySize(memSize);

    cout << "Support Cuda (yes/no): ";
    cin >> supCuda;
    if (toLower(supCuda) == "yes")
    {
        mem.setSupportCuda(true);
    }
    else
    {
        mem.setSupportCuda(false);
    }

    cout << "===========================\nOutput\n===========================\n";
    mem.printProduct();
    mem.printHardware();
    mem.printMemory();

    return 0;
}