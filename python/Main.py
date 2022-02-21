from Memory import Memory
# Membuat object dari class Memory
mem = Memory()
# input/set setiap attribute dari object mem
id = int(input("ID Product: "))
price = int(input("Price: "))
brand = str(input("Brand: "))
model = str(input("Model: "))
freq = int(input("Frequency (Mhz): "))
memSize = int(input("Memory Size (GB): "))
supCuda = str(input("Support Cuda (yes/no): "))

mem.setIdProduct(id)
mem.setPrice(price)
mem.setBrand(brand)
mem.setModel(model)
mem.setFrequency(freq)
mem.setMemorySize(memSize)

if supCuda.lower() == "yes":
    mem.setSupportCuda(True)
else:
    mem.setSupportCuda(False)

# print hasil
print("===========================\nOutput\n===========================")
mem.printProduct()
mem.printHardware()
mem.printMemory()