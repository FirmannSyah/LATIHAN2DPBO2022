<?php

class Product{

	
	private $price, $idProduct;


	public function __construct($price = 0, $idProduct = ""){
		$this->price = $price;
		$this->idProduct = $idProduct;
	}

	public function setPrice($price){
		$this->price = $price;
	}

	public function setIdProduct($idProduct){
		$this->idProduct = $idProduct;
	}


	public function getPrice(){
		return $this->price;
	}

	public function getIdProduct(){
		return $this->idProduct;
	}


	public function __destruct(){

	}

}

?>
