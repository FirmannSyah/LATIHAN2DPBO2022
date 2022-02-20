from Hardware import Hardware


class Memory(Hardware):


	def __init__(self):
		self.frequency = 0
		self.memorySize = 0
		self.supportsCuda = ""

	def setFrequency(self, frequency):
		self.frequency = frequency

	def setMemorySize(self, memorySize):
		self.memorySize = memorySize

	def setSupportsCuda(self, supportsCuda):
		self.supportsCuda = supportsCuda

	def getMemorySize(self):
		return self.memorySize
		
	def getFrequency(self):
		return self.frequency

	def getSupportsCuda(self):
		return self.supportsCuda