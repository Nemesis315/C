#ifndef Coda2_h
#define Coda2_h

#include <iostream>

using namespace std;

struct Nodo // Struttura del nodo della coda
{
    int Info; // Campo che contiene il valore dell'elemento nella coda
    Nodo* next; // Puntatore al nodo successivo nella coda, che rappresenta il nodo dopo l'elemento attuale
};

class Coda
{
private:
    Nodo* Inizio; // Puntatore al nodo di inizio della coda
    Nodo* Fine; // Puntatore al nodo di fine della coda
public:
    Coda(); // Costruttore della coda, inizializza la coda vuota


    void Inserisci(int valore); // Aggiunge un elemento alla fine della coda


    void Rimuovi(); // Rimuove l'elemento all'inizio della coda


    int PrimoElemento(); // Restituisce l'elemento all'inizio della coda senza rimuoverlo


    bool isEmpty(); // Verifica se la coda è vuota

    
};

#endif /* Coda2_h */