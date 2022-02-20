from Memory import Memory




n = int(input("Masukan Banyaknya Barang : "))

item = [Memory() for i in range(n)]

i = 0;
for i in range(n):
	print("-------------------------")
	print("  Barang Ke - ", i+1)
	idProduct = str(input("Masukan Id Produk     : "))
	brand = str(input("Masukan Brand Produk  : "))
	model = str(input("Masukan Model Produk  : "))
	frequency = int(input("Masukan Frekuensi     : "))
	memorySize = str(input("Masukan Ukuran Memori : "))
	supportsCuda = str(input("Apakah Support Cuda   : "))
	price = str(input("Masukan Harga         : "))

	print("\n")

	item[i].setIdProduct(idProduct)
	item[i].setBrand(brand)
	item[i].setModel(model)
	item[i].setFrequency(frequency)
	item[i].setMemorySize(memorySize)
	item[i].setSupportsCuda(supportsCuda)
	item[i].setPrice(price)

print("\n=========================")
print("     DATA BARANG\n\n")

for i in range(n):

	print("+Barang Ke - " + str(i+1))
	print("  ID Product    : " + str(item[i].getIdProduct()))
	print("  Brand         : " + str(item[i].getBrand()))
	print("  Model         : " + str(item[i].getModel()))
	print("  Frequency     : " + str(item[i].getFrequency()) + " MHz")
	print("  Memory Size   : " + str(item[i].getMemorySize()) + " GB")
	print("  Supports Cuda : " + str(item[i].getSupportsCuda()))
	print("  Price         : Rp" + str(item[i].getPrice()) + "\n")

print("\n   Program Selesai")
print("=========================")