#include <iostream>
#include "Quadrilatero.h"
#include "Trapezio.h"
#include "Rombo.h"
using namespace std;

Rombo::Rombo(int lato1, int lato2, int lato3, int lato4, int diagonale1, int diagonale2) : Quadrilatero(lato1, lato2, lato3, lato4)
{
    this->diagonale1 = diagonale1;
    this->diagonale2 = diagonale2;
}

void Rombo::setDiagonale1(int diagonale1)
{
    this->diagonale1 = diagonale1;
}

void Rombo::setDiagonale2(int diagonale2)
{
    this->diagonale2 = diagonale2;
}

void Rombo::stampaRombo()
{
    cout << "Rombo:" << endl;
    stampaLati();
    cout << "Diagonale 1: " << diagonale1 << endl;
    cout << "Diagonale 2: " << diagonale2 << endl;
}

void Rombo::calcolaArea()
{
    double area = (diagonale1 * diagonale2) / 2.0;
    cout << "Area: " << area << endl;
}

void Rombo::calcolaPerimetro()
{
    int perimetro = 4 * lato1; // Tutti i lati del rombo sono uguali
    cout << "Perimetro: " << perimetro << endl;
}