#include "Contatore.h"
#include <iostream>

Contatore::Contatore(int valore, int passo)
{
    this->valore = valore;
    this->passo = passo;
}

void Contatore::incrementa()
{
    valore += passo;
}

void Contatore::decrementa()
{
    valore -= passo;
}

int Contatore::getValore()
{
    return valore;
}

int Contatore::getPasso()
{
    return passo;
}

void Contatore::setValore(int valore)
{
    this->valore = valore;
}

void Contatore::setPasso(int passo)
{
    this->passo = passo;
}

void Contatore::reset()
{
    valore = 0;
}
