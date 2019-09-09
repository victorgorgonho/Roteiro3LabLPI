#include "Nutricionista.h"

using namespace std;

Nutricionista::Nutricionista(){
    nome = " ";
    especialidade = "Nutricionista";
    altura = peso = 0;
}

Nutricionista::~Nutricionista(){
    
}

void Nutricionista::RealizarCirurgia(){
    cout << "Realizando consulta de Nutricionista." << endl;
}
