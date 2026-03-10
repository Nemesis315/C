#include <iostream>
#include <string>
#include "Pila2.h"
#include "Pila2.cpp"

using namespace std;

int main()
{
    Pila pila; // Crea un'istanza della classe Pila

    pila.push(10); // Aggiunge l'elemento 10 alla pila
    pila.push(20); // Aggiunge l'elemento 20 alla pila
    pila.push(30); // Aggiunge l'elemento 30 alla pila

    cout << "Elementi nella pila: "; // Stampa un messaggio prima di mostrare gli elementi della pila
    pila.print(); // Stampa gli elementi attualmente presenti nella pila

    cout << "Elemento in cima alla pila: " << pila.Top() << endl; // Stampa l'elemento in cima alla pila

    pila.pop(); // Rimuove l'elemento in cima alla pila

    cout << "Elementi nella pila dopo pop: "; // Stampa un messaggio prima di mostrare gli elementi della pila dopo la rimozione
    pila.print(); // Stampa gli elementi attualmente presenti nella pila dopo la rimozione

    return 0; // Termina il programma con successo
}