public class Memory extends Hardware{

	private int frequency, memorySize;
	private String supportsCuda;

	public Memory(int frequency, int memorySize, String supportsCuda){
		this.frequency = frequency;
		this.memorySize = memorySize;
		this.supportsCuda = supportsCuda;
	}

	public Memory(){

	}

	public void setFrequency(int frequency){
		this.frequency = frequency;
	}

	public void setMemorySize(int memorySize){
		this.memorySize = memorySize;
	}

	public void setSupportsCuda(String supportsCuda){
		this.supportsCuda = supportsCuda;
	}


	public int getFrequency(){
		return this.frequency;
	}

	public int getMemorySize(){
		return this.memorySize;
	}
	public String getSupportsCuda(){
		return this.supportsCuda;
 	}

	
	

}