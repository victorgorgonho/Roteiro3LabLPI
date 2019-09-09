/*
===============================================================================
Polimorfismo trata-se de você possuir mais de uma forma de iniciar uma classe, 
herdando os mesmos métodos, por exemplo, possuir uma classe Medico, e possuir 
mais de um tipo de Medico, que possuem não só os metodos que Medico possui, co-
mo acrescentando ou modificando seus metodos livremente.
===============================================================================
*/

#include <iostream>
#include "Cardiologista.h"
#include "Nutricionista.h"

using namespace std;

int main(){
    Medico *c1 = new Cardiologista();
    Medico *n1 = new Nutricionista();

    cout << c1->getEspecialidade() << ":\n";
    c1->RealizarCirurgia();
    cout << endl;
    
    cout << n1->getEspecialidade() << ":\n";
    n1->RealizarCirurgia();
    cout << endl;

    return 0;
}