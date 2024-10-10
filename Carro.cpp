#include "Carro.hpp"

Carro::~Carro(){
	cout << "Carro caiu.." << endl;
}

Carro::Carro(string modelo) : Veiculo(modelo){
	cout << "O carro " << modelo << " foi criado" << endl;
}

void Carro::mover(){
	cout << "O carro " << this->modelo << " esta se movendo" << endl;
}
