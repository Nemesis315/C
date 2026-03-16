#ifndef PILA2_H
#define PILA2_H

#include <iostream>
#include <string>

using namespace std;

struct Nodo // Struttura del nodo della pila
{
    int info; // Campo che contiene il valore dell'elemento nella pila
    Nodo* next; // Puntatore al nodo successivo nella pila, che rappresenta il nodo sotto l'elemento attuale
};


class Pila // Classe che rappresenta la pila
{
    private: // Puntatore al nodo superiore della pila

        Nodo* top; // Puntatore al nodo superiore della pila

    public: // Costruttore della pila

        Pila(); // Inizializza la pila vuota

        void push(int valore); // Aggiunge un elemento alla cima della pila

        void pop(); // Rimuove l'elemento in cima alla pila

        int Top(); // Restituisce l'elemento in cima alla pila senza rimuoverlo

        bool isEmpty(); // Verifica se la pila è vuota

        void print(); // Stampa gli elementi della pila dalla cima alla base

};


#endif // PILA2_H