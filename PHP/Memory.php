<?php

class Memory extends Hardware{
	
	private $frequency, $memorySize, $supportsCuda;

	public function __construct($frequency = 0, $memorySize = 0, $supportsCuda = ""){
		$this->frequency = $frequency;
		$this->memorySize = $memorySize;
		$this->supportsCuda = $supportsCuda;
	}

	
	public function setFrequency($frequency){
		$this->frequency = $frequency;
	}

	public function setMemorySize($memorySize){
		$this->memorySize = $memorySize;
	}

	public function setSupportsCuda($supportsCuda){
		$this->supportsCuda = $supportsCuda;
	}


	public function getFrequency(){
		return $this->frequency;
	}

	public function getMemorySize(){
		return $this->memorySize;
	}

	public function getSupportsCuda(){
		return $this->supportsCuda;
	}

	public function __destruct(){

	}

}

?>