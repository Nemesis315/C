#include <iostream>
#include "Rettangolo1_h"
#include "Rettangolo1.cpp"
using namespace std;

int main()
{
    Rettangolo1_h* rettangolo1 = new Rettangolo1_h();
    Rettangolo1_h* rettangolo2 = new Rettangolo1_h(25, 10);

    //Rettangolo 1
    cout << "Rettangolo 1" << endl;
    cout << endl;
    cout << "Base: " << rettangolo1->getBase() << endl;
    cout << "Altezza: " << rettangolo1->getAltezza() << endl;
    cout << "Area: " << rettangolo1->calcolaArea() << endl;
    cout << "Perimetro: " << rettangolo1->calcolaPerimetro() << endl;
    cout << endl;

    //Rettangolo 2
    cout << "Rettangolo 2" << endl;
    cout << endl;
    cout << "Base: " << rettangolo2->getBase() << endl;
    cout << "Altezza: " << rettangolo2->getAltezza() << endl;
    cout << "Area: " << rettangolo2->calcolaArea() << endl;
    cout << "Perimetro: " << rettangolo2->calcolaPerimetro() << endl;


    delete rettangolo1;
    delete rettangolo2;
    return 0;
}