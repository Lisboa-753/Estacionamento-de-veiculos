#include "Veiculo.hpp"


Veiculo::~Veiculo(){
	cout << "Veiculo destruido.." << endl;
}

Veiculo::Veiculo(string modelo){
	cout << "Construindo um VEICULO: " << modelo <<endl;
	this->modelo = modelo;
}

string Veiculo::getModelo(){
	return this->modelo;
}
