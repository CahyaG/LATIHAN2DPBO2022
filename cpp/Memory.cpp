#include <stdio.h>
using namespace std;

#include "Hardware.cpp"

// Memory merupakan turunan dari Hardware
class Memory : public Hardware
{
private:
    // Attribute dari Memory
    int frequency;
    int memorySize;
    bool supportCuda;

public:
    // constructor
    Memory() {}
    Memory(int frequency, int memorySize, bool supportCuda)
    {
        this->frequency = frequency;
        this->memorySize = memorySize;
        this->supportCuda = supportCuda;
    }

    // getter setter frequency
    int getFrequency()
    {
        return this->frequency;
    }
    void setFrequency(int frequency)
    {
        this->frequency = frequency;
    }

    // getter setter memorySize
    int getMemorySize()
    {
        return this->memorySize;
    }
    void setMemorySize(int memorySize)
    {
        this->memorySize = memorySize;
    }

    // getter setter supportCuda
    // getter menggunakan is karena attribut mempunyai tipe data boolean
    bool isSupportCuda()
    {
        return this->supportCuda;
    }
    void setSupportCuda(bool supportCuda)
    {
        this->supportCuda = supportCuda;
    }

    // method untuk menampilkan semua attribut Memory
    void printMemory()
    {
        cout << "Frequency: " << getFrequency() << " Mhz" << endl;
        cout << "Memory Size: " << getMemorySize() << " GB" << endl;
        cout << "Support Cuda: ";
        if (isSupportCuda())
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    // destructor
    ~Memory() {}
};