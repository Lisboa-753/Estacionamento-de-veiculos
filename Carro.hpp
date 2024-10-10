#ifndef CARRO_HPP
#define CARRO_HPP
#include "Veiculo.hpp"

class Carro : public Veiculo {
public:
	~Carro();
	Carro(string modelo);
	void mover();

};



#endif // !CARRO_HPP
