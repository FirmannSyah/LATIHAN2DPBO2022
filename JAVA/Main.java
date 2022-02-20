import java.util.Scanner;

public class Main{

	public static void main(String[] args){

		int n = 0;

		Scanner masukan = new Scanner(System.in);

		System.out.print("Masukan banyaknya barang : ");
		n = masukan.nextInt();


		Memory item[] = new Memory[n];
		String supportsCuda, brand, model, idProduct;
		int frequency, memorySize, price;

		int i;

		System.out.print("\n");
		for(i = 0; i < n; i++){
			System.out.print("-------------------------");
			System.out.println("\n Barang Ke - " + (i+1) + "\n");
			item[i] = new Memory();

			System.out.print("Masukan Id Produk     : ");
			idProduct = masukan.next();

			System.out.print("Masukan Brand Produk  : ");
			brand = masukan.next();

			System.out.print("Masukan Model Produk  : ");
			model = masukan.next();
 
			System.out.print("Masukan Frekuensi     : ");
			frequency = masukan.nextInt();

			System.out.print("Masukan Ukuran Memori : ");
			memorySize = masukan.nextInt();

			System.out.print("Apakah Support Cuda   : ");
			supportsCuda = masukan.next();

			System.out.print("Masukan Harga Product : ");
			price = masukan.nextInt();

			System.out.print("\n");


			item[i].setIdProduct(idProduct);
			item[i].setBrand(brand);
			item[i].setModel(model);
			item[i].setFrequency(frequency);
			item[i].setMemorySize(memorySize);
			item[i].setSupportsCuda(supportsCuda);
			item[i].setPrice(price);

		}
		System.out.print("\n=========================");
		System.out.print("\n     DATA BARANG\n\n");
		for (i = 0; i < n; i++){

            System.out.println("+Barang Ke - " + (i+1));

            System.out.println("  ID Produk       : " + item[i].getIdProduct());
            System.out.println("  Brand           : " + item[i].getBrand());
            System.out.println("  Model           : " + item[i].getModel());
            System.out.println("  Frekuensi       : " + item[i].getFrequency() + "MHz");
            System.out.println("  Ukuran Memori   : " + item[i].getMemorySize() + " GB");
            System.out.println("  Supports Cuda   : " + item[i].getSupportsCuda());
            System.out.println("  Harga           : Rp " + item[i].getPrice() + "\n");
        }  

        System.out.print("\n   Program Selesai");
        System.out.print("\n=========================");

	}
}