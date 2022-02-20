class Product:

	def __init__(self):
		self.price = 0
		self.idProduct = ""



	def setPrice(self, price):
		self.price = price

	def setIdProduct(self, idProduct):
		self.idProduct = idProduct


	def getPrice(self):
		return self.price

	def getIdProduct(self):
		return self.idProduct