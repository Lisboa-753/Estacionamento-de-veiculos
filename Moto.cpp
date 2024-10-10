#include "Moto.hpp"

Moto::~Moto(){
	cout << "A moto caiu..." << endl;
}

Moto::Moto(string modelo) : Veiculo(modelo){
	cout << "A Moto " << modelo << " foi criada" << endl;

}
void Moto::mover() {
	cout << "A moto " << this->modelo << " esta se movendo" << endl;

}