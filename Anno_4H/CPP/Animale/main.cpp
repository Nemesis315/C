#include <iostream>
#include "Animale_h"
#include "string.h"
using namespace std;

int main()
{
    Animale* animale1 = new Animale(1, 1, 27, 65, "Zebra");
    cout << "Nome: " << animale1->getNome() << endl;
    cout << "Classificazione: " << animale1->getClassificazione() << endl;
    cout << "Sesso: " << animale1->getSesso() << endl;
    cout << "Longevita: " << animale1->getLongevita() << endl;
    cout << "Velocita: " << animale1->getVelocita() << endl;

    delete animale1;
    return 0;
}