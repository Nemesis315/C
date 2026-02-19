#include <iostream>
#include "Quadrilatero.h"
#include "Trapezio.h"
#include "Rombo.h"
#include "Quadrato.h"
#include "Quadrilatero.cpp"
#include "Trapezio.cpp"
#include "Rombo.cpp"
#include "Quadrato.cpp"
using namespace std;

int main()
{
    Quadrilatero*  q = new Quadrilatero(2, 3, 4, 5);
    q->stampaLati();
    q->calcolaPerimetro();

    cout << endl;

    Trapezio* t = new Trapezio(2, 3, 4, 5, 6);
    t->stampaTrapezio();
    t->calcolaArea();
    t->calcolaPerimetro();

    cout << endl;

    Rombo* r = new Rombo(2, 2, 2, 2, 3, 4);
    r->stampaRombo();
    r->calcolaArea();
    r->calcolaPerimetro();

    cout << endl;

    Quadrato* s = new Quadrato(4);
    s->stampaQuadrato();
    s->calcolaArea();
    s->calcolaPerimetro();

    return 0;
}