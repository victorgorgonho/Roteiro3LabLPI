#ifndef CARDIOLOGISTA_H
#define CARDIOLOGISTA_H

#include <iostream>
#include "Medico.h"

class Cardiologista : public Medico{
    public:
        Cardiologista();
        ~Cardiologista();

        virtual void RealizarCirurgia();
};

#endif