#ifndef MEDICO_H
#define MEDICO_H

#include <iostream>

class Medico{
    public:
        Medico();
        ~Medico();

        void setNome(std::string nome);
        void setEspecialidade(std::string especialidade);
        void setAltura(double altura);
        void setPeso(double peso);

        std::string getNome();
        std::string getEspecialidade();
        double getAltura();
        double getPeso();

        virtual void RealizarCirurgia() = 0;

    protected:
        std::string nome;
        std::string especialidade;
        double altura;
        double peso;
};

#endif