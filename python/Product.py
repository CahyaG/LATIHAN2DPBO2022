class Product:
    # contructroe
    def __init__(self):
        self.idProduct = 0
        self.price = 0
    # getter setter idProduct
    def getIdProduct(self):
        return self.idProduct
    
    def setIdProduct(self, idProduct):
        self.idProduct = idProduct
    # getter setter price
    def getPrice(self):
        return self.price
    
    def setPrice(self, price):
        self.price = price

    def printProduct(self):
        print("ID Product: {}".format(self.getIdProduct()))
        # format {.,} agar price tampil dalam format idr
        print("Price: Rp.{:,}".format(self.getPrice()))