#include "Rettangolo1_h"
#include <iostream>

using namespace std;

Rettangolo1_h::Rettangolo1_h(int base, int altezza)
{
    this->base = base;
    this->altezza = altezza;
}

void Rettangolo1_h::setBase(int base)
{
    this->base = base;
}

void Rettangolo1_h::setAltezza(int altezza)
{
    this->altezza = altezza;
}

int Rettangolo1_h::getBase()
{
    return base;
}

int Rettangolo1_h::getAltezza()
{
    return altezza;
}

int Rettangolo1_h::area()
{
    return base * altezza;
}

int Rettangolo1_h::perimetro()
{
    return 2 * (base + altezza);
}