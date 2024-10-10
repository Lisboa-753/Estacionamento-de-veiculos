#include <iostream>
#include "Veiculo.hpp"
#include "Carro.hpp"
#include "Moto.hpp"
#include "Estacionamento.hpp"

using namespace std;

int main()
{
    
    Veiculo* c = new Carro("Astra");
    c->mover();

    Veiculo* m = new Moto("Hornet");
    m->mover();


    //Intanciando um estacionamento

    Estacionamento* est = new Estacionamento("FHO Car");
    
    est->comprar(m->getModelo(), "moto");
    est->comprar(c->getModelo(), "carro");
    est->exibirFrota();

    /*liberando a memoria de ovjetos não mais utilizados*/
    delete c;
    delete m;

    //Vendendo veiculo..
    est->vender("Astra");

    return 0;
}
