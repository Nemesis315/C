#include <iostream>
#include "Contatore.h"
#include "ContatoreDoppio.h"
using namespace std;

int main()
{
    Contatore c1(10, 2);
    ContatoreDoppio c2(10);

    cout << "Contatore c1: " << c1.getValore() << endl;
    cout << "ContatoreDoppio c2: " << c2.getValore() << endl;

    c1.incrementa();
    c2.incrementa();

    cout << "Contatore c1 dopo incremento: " << c1.getValore() << endl;
    cout << "ContatoreDoppio c2 dopo incremento: " << c2.getValore() << endl;

    return 0;
}