#include <iostream>
#include "Quadrilatero.h"
#include "Trapezio.h"
using namespace std;

Trapezio::Trapezio(int lato1, int lato2, int lato3, int lato4, int altezza) : Quadrilatero(lato1, lato2, lato3, lato4)
{
    this->altezza = altezza;
}

void Trapezio::setAltezza(int altezza)
{
    this->altezza = altezza;
}

void Trapezio::stampaTrapezio()
{
    cout << "Trapezio:" << endl;
    stampaLati();
    cout << "Altezza: " << altezza << endl;
}

void Trapezio::calcolaArea()
{
    double area = ((lato1 + lato3) / 2.0) * altezza;
    cout << "Area: " << area << endl;
}

void Trapezio::calcolaPerimetro()
{
    int perimetro = lato1 + lato2 + lato3 + lato4;
    cout << "Perimetro: " << perimetro << endl;
}