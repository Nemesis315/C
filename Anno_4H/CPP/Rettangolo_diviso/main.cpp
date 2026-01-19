#include <iostream>
#include "Rettangolo.h"

using namespace std;

int main()
{
    double base, altezza;

    cout << "Inserire la base del rettangolo: ";
    cin >> base;

    cout << "Inserire l'altezza del rettangolo: ";
    cin >> altezza;

    Rettangolo r1(base, altezza);

    cout << "Area del rettangolo: " << r1.calcolaArea() << endl;
    cout << "Perimetro del rettangolo: " << r1.calcolaPerimentro() << endl;

    return 0;
}