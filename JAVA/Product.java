public class Product {

	private String idProduct;
	private int price;

	public Product(int price, String idProduct){
		this.price = price;
		this.idProduct = idProduct;
	}

	public Product(){

	}

	public void setPrice(int price){
		this.price = price;
	}

	public void setIdProduct(String idProduct){
		this.idProduct = idProduct;
	}

	public int getPrice(){
		return this.price;
	}

	public String getIdProduct(){
		return this.idProduct;
	}

}