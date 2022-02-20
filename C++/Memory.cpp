#include <iostream>
#include <string>
using namespace std;

class Memory : public Hardware{

	private:

		int frequency, memorySize;
		string supportsCuda;

	public:

		Memory(int frequency, int memorySize, string supportsCuda){
			this->frequency = frequency;
			this->memorySize = memorySize;
			this->supportsCuda = supportsCuda;
		}

		Memory(){
			this->frequency = 0;
			this->memorySize = 0;
			this->supportsCuda = "";
		}


		void setFrequency(int frequency){
			this->frequency = frequency;
		}

		void setMemorySize(int memorySize){
			this->memorySize = memorySize;
		}
		
		void setSupportsCuda(string supportsCuda){
			this->supportsCuda = supportsCuda;
		}


		int getFrequency(){
			return this->frequency;
		}

		int getMemorySize(){
			return this->memorySize;
		}

		string getSupportsCuda(){
			return this->supportsCuda;
		}

		~Memory(){

		}

};