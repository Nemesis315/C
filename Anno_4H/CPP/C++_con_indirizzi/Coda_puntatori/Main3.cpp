#include "Coda2.h"
#include "Coda2.cpp"
#include <iostream>
using namespace std;

int main()
{
    Coda coda; // Crea un'istanza della classe Coda

    coda.Inserisci(10); // Inserisce il valore 10 nella coda
    coda.Inserisci(20); // Inserisce il valore 20 nella coda
    coda.Inserisci(30); // Inserisce il valore 30 nella coda

    cout << "Primo elemento della coda: " << coda.PrimoElemento() << endl; // Stampa il primo elemento della coda

    coda.Rimuovi(); // Rimuove l'elemento all'inizio della coda

    cout << "Primo elemento dopo la rimozione: " << coda.PrimoElemento() << endl; // Stampa il nuovo primo elemento della coda

    return 0; // Termina il programma
}