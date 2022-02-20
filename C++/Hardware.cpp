#include <iostream>
#include <string>
using namespace std;

class Hardware : public Product{
	
	private:
		string brand, model;
	
	public:
		
		Hardware(string brand, string model){
			this->brand = brand;
			this->model = model;
		}
		
		Hardware(){
			this->brand = "";
			this->model = "";
		}

		
		void setBrand(string brand){
			this->brand = brand;
		}

		void setModel(string model){
			this->model = model;
		}


		string getBrand(){
			return this->brand;
		}
		string getModel(){
			return this->model;
		}

		~Hardware()
		{

	}

};