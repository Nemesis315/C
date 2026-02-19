#include <iostream>
#include "Quadrilatero.h"

using namespace std;

Quadrilatero::Quadrilatero(int lato1, int lato2, int lato3, int lato4)
{
    this->lato1 = lato1;
    this->lato2 = lato2;
    this->lato3 = lato3;
    this->lato4 = lato4;
}

void Quadrilatero::setLato1(int lato1)
{
    this->lato1 = lato1;
}

void Quadrilatero::setLato2(int lato2)
{
    this->lato2 = lato2;
}

void Quadrilatero::setLato3(int lato3)
{
    this->lato3 = lato3;
}

void Quadrilatero::setLato4(int lato4)
{
    this->lato4 = lato4;
}

void Quadrilatero::stampaLati()
{
    cout << "Lato 1: " << lato1 << endl;
    cout << "Lato 2: " << lato2 << endl;
    cout << "Lato 3: " << lato3 << endl;
    cout << "Lato 4: " << lato4 << endl;
}

void Quadrilatero::calcolaPerimetro()
{
    int perimetro = lato1 + lato2 + lato3 + lato4;
    cout << "Perimetro: " << perimetro << endl;
}