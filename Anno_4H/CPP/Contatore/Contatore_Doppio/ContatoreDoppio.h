#ifndef CONTATORE_DOPPIO_H
#define CONTATORE_DOPPIO_H

#include "Contatore.h"

class ContatoreDoppio : public Contatore
{
    public:
    ContatoreDoppio(int valore) : Contatore(valore) {}
    void incrementa();
};

#endif