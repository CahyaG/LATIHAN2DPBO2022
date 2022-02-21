from Product import Product
# Hardware merupakan turunan dari Product
class Hardware(Product):
    # contructor
    def __init__(self):
        self.brand = ""
        self.model = ""
    # getter setter brand
    def getBrand(self):
        return self.brand
    
    def setBrand(self, brand):
        self.brand = brand
    # getter setter model
    def getModel(self):
        return self.model

    def setModel(self, model):
        self.model = model
    # method untuk menampilkan semua attribute Hardware
    def printHardware(self):
        print("Brand: " + self.getBrand())
        print("Model: " + self.getModel())