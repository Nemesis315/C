#include <iostream>
#include "Rettangolo1_h"
#include "Rettangolo1.cpp"
using namespace std;

int main()
{
    Rettangolo1_h* rettangolo1 = new Rettangolo1_h(25, 10);
    cout << "Base: " << rettangolo1->getBase() << endl;
    cout << "Altezza: " << rettangolo1->getAltezza() << endl;
    cout << "Area: " << rettangolo1->area() << endl;
    cout << "Perimetro: " << rettangolo1->perimetro() << endl;

    delete rettangolo1;
    return 0;
}