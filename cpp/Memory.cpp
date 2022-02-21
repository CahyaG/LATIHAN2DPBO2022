#include <stdio.h>
using namespace std;

#include "Hardware.cpp"

class Memory : public Hardware
{
private:
    int frequency;
    int memorySize;
    bool supportCuda;

public:
    Memory() {}
    Memory(int frequency, int memorySize, bool supportCuda)
    {
        this->frequency = frequency;
        this->memorySize = memorySize;
        this->supportCuda = supportCuda;
    }

    int getFrequency()
    {
        return this->frequency;
    }
    void setFrequency(int frequency)
    {
        this->frequency = frequency;
    }

    int getMemorySize()
    {
        return this->memorySize;
    }
    void setMemorySize(int memorySize)
    {
        this->memorySize = memorySize;
    }

    bool isSupportCuda()
    {
        return this->supportCuda;
    }
    void setSupportCuda(bool supportCuda)
    {
        this->supportCuda = supportCuda;
    }

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
    ~Memory() {}
};