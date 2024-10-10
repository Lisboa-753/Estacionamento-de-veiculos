#include "Estacionamento.hpp"
#include "Moto.hpp"
#include "Carro.hpp"

Estacionamento::Estacionamento(string){
	this->nome = nome;
}

bool Estacionamento::vender(string modelo){
	
	int pos = 0;
		
	for (Veiculo* v : this->frota) {
		if (v->getModelo() != modelo) {
			++pos;
		}
		else {
			delete v;
			this->frota.erase(this->frota.begin() + pos);
			return true;
		}
	}
	
	return false;
}

bool Estacionamento::comprar(string modelo, string tipo){
	
	Veiculo* v;

	if (tipo == "moto") {
		v = new Moto(modelo);
	}
	else {
		v = new Carro(modelo);
	}

	this->frota.push_back(v);
	return false;
}

void Estacionamento::exibirFrota(){
	cout << "A frota eh: " << endl;
	for (Veiculo* v : this->frota) {
		cout << "Modelo: " << v->getModelo() << endl;
	}

}
