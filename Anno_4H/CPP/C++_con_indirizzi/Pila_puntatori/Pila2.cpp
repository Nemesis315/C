#include <iostream>
#include <string>
#include "Pila2.h"

using namespace std;









Pila::Pila() // Inizializza la pila vuota
{
    top = NULL; // La pila è vuota, quindi il puntatore top è NULL
}

void Pila::push(int valore) // Aggiunge un elemento alla cima della pila
{
    Nodo* newNode = new  Nodo; // Crea un nuovo nodo
    newNode->info = valore; // Assegna il valore al campo info del nuovo nodo
    newNode->next = top; // Il campo next del nuovo nodo punta al nodo attualmente in cima alla pila
    top = newNode; // Il puntatore top ora punta al nuovo nodo, che è diventato la nuova cima della pila
}

void Pila::pop() // Rimuove l'elemento in cima alla pila
{
    if (top != NULL) // Controlla se la pila non è vuota prima di rimuovere un elemento
    {
        Nodo* temp = top; // Salva il nodo attualmente in cima alla pila in un puntatore temporaneo
        top = top->next; // Il puntatore top ora punta al nodo successivo, che diventa la nuova cima della pila
        delete temp; // Dealloca la memoria del nodo rimosso per evitare perdite di memoria
    }
}

int Pila::Top() // Restituisce l'elemento in cima alla pila senza rimuoverlo
{
    if (top != NULL) // Controlla se la pila non è vuota prima di accedere all'elemento in cima
    {
        return top->info; // Restituisce il valore del campo info del nodo in cima alla pila
    }
        return 0; // Valore di default se la pila è vuota
    }

bool Pila::isEmpty() // Verifica se la pila è vuota
{
    return top == NULL; // Restituisce true se il puntatore top è NULL, indicando che la pila è vuota, altrimenti restituisce false
}

void Pila::print() // Stampa gli elementi della pila dalla cima alla base
{
    Nodo* current = top; // Inizia a stampare dal nodo in cima alla pila
    while (current != NULL) // Continua a stampare finché non si raggiunge la fine della pila (quando current diventa NULL)
    {
        cout << current->info << " "; // Stampa il valore del campo info del nodo corrente seguito da uno spazio

        current = current->next; // Passa al nodo successivo nella pila
    }

    cout << endl; // Stampa una nuova linea dopo aver stampato tutti gli elementi della pila
}

