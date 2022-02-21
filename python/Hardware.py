from Product import Product

class Hardware(Product):
    def __init__(self):
        self.brand = ""
        self.model = ""

    def getBrand(self):
        return self.brand
    
    def setBrand(self, brand):
        self.brand = brand

    def getModel(self):
        return self.model

    def setModel(self, model):
        self.model = model

    def printHardware(self):
        print("Brand: " + self.getBrand())
        print("Model: " + self.getModel())