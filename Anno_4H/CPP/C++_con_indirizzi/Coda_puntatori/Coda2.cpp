#include "Coda2.h"
#include <iostream>
using namespace std;

Coda::Coda() // Costruttore della coda, inizializza la coda vuota
{
    Inizio = NULL; // La coda è vuota, quindi il puntatore Inizio è NULL
    Fine = NULL; // La coda è vuota, quindi il puntatore Fine è NULL
}

void Coda::Inserisci(int valore) // Aggiunge un elemento alla fine della coda
{
    Nodo* newNode = new Nodo; // Crea un nuovo nodo
    newNode->Info = valore; // Assegna il valore al campo Info del nuovo nodo
    newNode->next = NULL; // Il campo next del nuovo nodo è NULL, poiché sarà l'ultimo nodo della coda

    if (Fine != NULL) // Se la coda non è vuota, collega il nuovo nodo al nodo di fine attuale
    {
        Fine->next = newNode; // Il campo next del nodo di fine attuale punta al nuovo nodo
    }
    Fine = newNode; // Il puntatore Fine ora punta al nuovo nodo, che è diventato il nuovo nodo di fine della coda

    if (Inizio == NULL) // Se la coda era vuota prima dell'inserimento, il puntatore Inizio deve anche puntare al nuovo nodo
    {
        Inizio = newNode; // Il puntatore Inizio ora punta al nuovo nodo, che è diventato anche il nodo di inizio della coda
    }

}

void Coda::Rimuovi() // Rimuove l'elemento all'inizio della coda
{
    if (Inizio != NULL) // Controlla se la coda non è vuota prima di rimuovere un elemento
    {
        Nodo* temp = Inizio; // Salva il nodo attualmente all'inizio della coda in un puntatore temporaneo
        Inizio = Inizio->next; // Il puntatore Inizio ora punta al nodo successivo, che diventa il nuovo nodo di inizio della coda
        delete temp; // Dealloca la memoria del nodo rimosso per evitare perdite di memoria

        if (Inizio == NULL) // Se la coda è diventata vuota dopo la rimozione, anche il puntatore Fine deve essere impostato a NULL
        {
            Fine = NULL; // Il puntatore Fine ora è NULL, indicando che la coda è vuota
        }
    }
}

int Coda::PrimoElemento() // Restituisce l'elemento all'inizio della coda senza rimuoverlo
{
    if (Inizio != NULL) // Controlla se la coda non è vuota prima di accedere all'elemento inizio
    {
        return Inizio->Info; // Restituisce il valore del campo Info del nodo di inizio della coda
    }
    else
    {
        throw runtime_error("La coda è vuota. Non è possibile accedere al primo elemento."); // Lancia un'eccezione se la coda è vuota
    }
}

bool Coda::isEmpty() // Verifica se la coda è vuota
{
    return (Inizio == NULL); // La coda è vuota se il puntatore Inizio è NULL
}

