#include <iostream>
#include "Rettangolo.h"

using namespace std;

Rettangolo :: Rettangolo(double base, double altezza)
{
    this->base = base;
    this->altezza = altezza;
}
        
void Rettangolo :: setBase(double base)
{
    this->base = base;
}

void Rettangolo :: setAltezza(double altezza)
{
    this->altezza = altezza;
}

double Rettangolo :: getBase()
{
    return base;
}

double Rettangolo :: getAltezza()
{
    return altezza;
}

double Rettangolo :: calcolaArea()
{
    return base * altezza;
}

double Rettangolo :: calcolaPerimentro()
{
    return 2 * (base + altezza);
}
