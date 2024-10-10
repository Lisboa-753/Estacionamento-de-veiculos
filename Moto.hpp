#ifndef MOTO_HPP
#define MOTO_HPP
#include <string>

#include "Veiculo.hpp"
using namespace std;

class Moto : public Veiculo {

public:
	~Moto();
	Moto(string);
	void mover();
};



#endif // !MOTO_HPP
