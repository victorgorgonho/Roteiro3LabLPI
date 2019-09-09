#ifndef NUTRICIONISTA_H
#define NUTRICIONISTA_H

#include <iostream>
#include "Medico.h"

class Nutricionista : public Medico{
    public:
        Nutricionista();
        ~Nutricionista();

        virtual void RealizarCirurgia();
};

#endif