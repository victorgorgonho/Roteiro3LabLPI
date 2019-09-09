#include "Cardiologista.h"

using namespace std;

Cardiologista::Cardiologista(){
    nome = " ";
    especialidade = "Cardiologista";
    altura = peso = 0;
}

Cardiologista::~Cardiologista(){
    
}

void Cardiologista::RealizarCirurgia(){
    cout << "Realizando cirurgia de Cardiologista." << endl;
}
