#include <iostream>
#include "Quadrilatero.h"
#include "Trapezio.h"
#include "Rombo.h"
#include "Quadrato.h"
using namespace std;

Quadrato::Quadrato(int lato) : Rombo(lato, lato, lato, lato, 0, 0)
{
    this->lato = lato;
}

void Quadrato::setLato(int lato)
{
    this->lato = lato;
    setLato1(lato);
    setLato2(lato);
    setLato3(lato);
    setLato4(lato);
}

void Quadrato::stampaQuadrato()
{
    cout << "Quadrato:" << endl;
    stampaLati();
    cout << "Lato: " << lato << endl;
}

void Quadrato::calcolaArea()
{
    double area = lato * lato;
    cout << "Area: " << area << endl;
}

void Quadrato::calcolaPerimetro()
{
    int perimetro = 4 * lato;
    cout << "Perimetro: " << perimetro << endl;
}