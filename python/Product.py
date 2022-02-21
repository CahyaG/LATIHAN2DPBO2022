class Product:
    def __init__(self):
        self.idProduct = 0
        self.price = 0

    def getIdProduct(self):
        return self.idProduct
    
    def setIdProduct(self, idProduct):
        self.idProduct = idProduct

    def getPrice(self):
        return self.price
    
    def setPrice(self, price):
        self.price = price

    def printProduct(self):
        print("ID Product: {}".format(self.getIdProduct()))
        print("Price: Rp.{:,}".format(self.getPrice()))