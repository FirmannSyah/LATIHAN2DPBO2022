#include <iostream>
#include <string>
using namespace std;

class Product{

	private:
		int price;
		string idProduct;

	public:

		Product(int price, string idProduct){
			this->price = price;
			this->idProduct = idProduct;
		}

		Product(){
			this->price = 0;
			this->idProduct = "";
		}

		void setPrice(int price){
			this->price = price;
		}
		
		void setIdProduct(string idProduct){
			this->idProduct = idProduct;
		}


		int getPrice(){
			return this->price;
		}

		string getIdProduct(){
			return this->idProduct;
		}

		
		~Product(){
			
		}

};