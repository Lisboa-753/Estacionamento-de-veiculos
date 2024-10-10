#ifndef ESTACIONAMENTO_HPP
#define ESTACIONAMENTO_HPP
#include <vector>
#include "Veiculo.hpp"

using namespace std;

class Estacionamento {
private:
	string nome;
	vector<Veiculo*> frota;
public:
	Estacionamento(string);
	bool vender(string);
	bool comprar(string, string);
	void exibirFrota();

};


#endif // !ESTACIONAMENTO_HPP
