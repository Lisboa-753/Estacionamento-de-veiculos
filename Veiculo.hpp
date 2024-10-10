#ifndef VEICULO_HPP
#define VEICULO_HPP
#include <string>
#include <iostream>

using namespace std;

class Veiculo {
protected:
	string modelo;
public:
	~Veiculo();
	Veiculo(string modelo);
	string getModelo();
	virtual void mover() = 0;
};



#endif // !VEICULO_HPP
