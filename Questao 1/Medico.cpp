#include "Medico.h"

Medico::Medico(){
    nome = " ";
    especialidade = "Nenhuma";
    altura = peso = 0;
}

Medico::~Medico(){

}

void Medico::setNome(std::string nome){
    this->nome = nome;
}

void Medico::setEspecialidade(std::string especialidade){
    this->especialidade = especialidade;
}

void Medico::setAltura(double altura){
    if(altura > 0)
        this->altura = altura;
    else
        this->altura = 0;
}

void Medico::setPeso(double peso){
    if(peso > 0)
        this->peso = peso;
    else
        this->peso = 0;
}

std::string Medico::getNome(){
    return nome;
}

std::string Medico::getEspecialidade(){
    return especialidade;
}

double Medico::getAltura(){
    return altura;
}

double Medico::getPeso(){
    return peso;
}
