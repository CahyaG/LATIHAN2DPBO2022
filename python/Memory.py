from pickle import FALSE
from Hardware import Hardware

class Memory(Hardware):
    def __init__(self):
        self.frequency = 0
        self.memorySize = 0
        self.supportCuda = False

    def getFrequency(self):
        return self.frequency

    def setFrequency(self, frequency):
        self.frequency = frequency

    def getMemorySize(self):
        return self.memorySize

    def setMemorySize(self, memorySize):
        self.memorySize = memorySize

    def isSupportCuda(self):
        return self.supportCuda

    def setSupportCuda(self, supportCuda):
        self.supportCuda = supportCuda

    def printMemory(self):
        print("Frequency : {}Mhz".format(self.getFrequency()))
        print("Memory Size : {}GB".format(self.getMemorySize()))
        print("Support Cuda: ", end="")
        if self.isSupportCuda():
            print("Yes")
        else:
            print("No")