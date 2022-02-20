public class Hardware extends Product {

	private String brand, model;


	public Hardware(String brand, String model){
		this.model = model;
		this.brand = brand;
	}

	public Hardware(){

	}

	public void setBrand(String brand){
		this.brand = brand;
	}

	public void setModel(String model){
		this.model = model;
	}

	public String getBrand(){
		return this.brand;
	}

	public String getModel(){
		return this.model;
	}

}