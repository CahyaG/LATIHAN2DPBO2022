from pickle import FALSE
from Hardware import Hardware
# Memory merupakan turunan dari Hardware
class Memory(Hardware):
    # constructor
    def __init__(self):
        self.frequency = 0
        self.memorySize = 0
        self.supportCuda = False
    # getter setter frequency
    def getFrequency(self):
        return self.frequency

    def setFrequency(self, frequency):
        self.frequency = frequency
    # getter setter memorySize
    def getMemorySize(self):
        return self.memorySize

    def setMemorySize(self, memorySize):
        self.memorySize = memorySize
    # getter setter supportCuda
    # getter menggunakan is karena attribute merupakan boolean
    def isSupportCuda(self):
        return self.supportCuda

    def setSupportCuda(self, supportCuda):
        self.supportCuda = supportCuda
    # method muntuk menampilkan semua attribute Memory
    def printMemory(self):
        print("Frequency : {}Mhz".format(self.getFrequency()))
        print("Memory Size : {}GB".format(self.getMemorySize()))
        print("Support Cuda: ", end="")
        if self.isSupportCuda():
            print("Yes")
        else:
            print("No")