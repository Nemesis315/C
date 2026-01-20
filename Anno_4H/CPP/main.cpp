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

    Rettangolo r2(10); //rettangolo con valori di default

    Rettangolo r3; //rettangolo con altezza di default

    cout << "Area del rettangolo: " << r1.calcolaArea() << endl;
    cout << "Perimetro del rettangolo: " << r1.calcolaPerimentro() << endl;

    cout << "Area del rettangolo: " << r2.calcolaArea() << endl;
    cout << "Perimetro del rettangolo: " << r2.calcolaPerimentro() << endl;

    cout << "Area del rettangolo: " << r3.calcolaArea() << endl;
    cout << "Perimetro del rettangolo: " << r3.calcolaPerimentro() << endl;



    return 0;
}
