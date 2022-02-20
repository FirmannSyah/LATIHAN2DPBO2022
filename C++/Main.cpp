#include <iostream>
#include <string>

#include "Product.cpp"
#include "Hardware.cpp"
#include "Memory.cpp"

using namespace std;

int main(){
	int price, frequency, memorySize;
	string brand, idProduct, model, supportsCuda;

	int n;

	cout << "Masukan banyaknya barang : " << endl;
	cin >> n;

	Memory item[n];

	int i;

	for(i = 0; i < n ; i++){
		cout << "-------------------------" << endl;
		cout << " Barang Ke - " << i+1 << endl;

		cout << "Masukan Id Produk     : ";
		cin >> idProduct;
		cout << "Masukan Brand Produk  : ";
		cin >> brand;
		cout << "Masukan Model Produk  : ";
		cin >> model;
		cout << "Masukan Frekuensi     : ";
		cin >> frequency;
		cout << "Masukan Ukuran Memori : ";
		cin >> memorySize;
		cout << "Apakah Support Cuda   : ";
		cin >> supportsCuda;
		cout << "Masukan Harga Produk  : ";
		cin >> price;
		cout << endl;


		item[i].setIdProduct(idProduct);
		item[i].setBrand(brand);
		item[i].setModel(model);
		item[i].setFrequency(frequency);
		item[i].setMemorySize(memorySize);
		item[i].setSupportsCuda(supportsCuda);
		item[i].setPrice(price);

	}

	cout << endl << "=========================" << endl;
	cout << "     DATA BARANG" << endl << endl;

	for (i = 0; i < n; i++) {

        cout <<"+Barang Ke - " << i+1 << endl;

        cout <<"  ID Produk       : " << item[i].getIdProduct() << endl;
        cout <<"  Brand           : " << item[i].getBrand() << endl;
        cout <<"  Model           : " << item[i].getModel() << endl;
        cout <<"  Frekuensi       : " << item[i].getFrequency() << "MHz" << endl;
        cout <<"  Ukuran Memori   : " << item[i].getMemorySize() << " GB" << endl;
        cout <<"  Supports Cuda   : " << item[i].getSupportsCuda() << endl;
        cout <<"  Harga           : Rp " << item[i].getPrice() << endl << endl;

        }  

     cout << "    PROGRAM SELESAI" << endl;
     cout << "=========================" << endl;
}