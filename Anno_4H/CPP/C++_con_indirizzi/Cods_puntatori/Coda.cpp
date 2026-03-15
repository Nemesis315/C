#include <iostream>

using namespace std;

struct Nodo // Struttura del nodo della coda
{
    int info;
    Nodo* next;
};

typedef Nodo* PNodo;

class Coda // Classe che rappresenta la coda
{
    private: // Puntatori al nodo anteriore e posteriore della coda

        struct Nodo* inizio; // Puntatore al nodo anteriore della coda
        struct Nodo* fine; // Puntatore al nodo posteriore della coda

    public: // Costruttore della coda

        Coda() // Inizializza la coda vuota
        {
            inizio = NULL; // La coda è vuota, quindi il puntatore inizio è NULL
            fine = NULL; // La coda è vuota, quindi il puntatore fine è NULL
        }

        void Inserimento(int valore) // Aggiunge un elemento alla fine della coda
        {
            Nodo* newNode = new  Nodo; // Crea un nuovo nodo
            newNode->info = valore; // Assegna il valore al campo info del nuovo nodo
            newNode->next = NULL; // Il campo next del nuovo nodo è NULL, poiché sarà l'ultimo nodo della coda

            if (fine == NULL) // Se la coda è vuota, il nuovo nodo diventa sia il front che il rear
            {
                inizio = fine = newNode; // Il nuovo nodo è sia il front che il rear della coda
            }
            else // Altrimenti, aggiungi il nuovo nodo alla fine della coda e aggiorna il nodo in coda
            {
                fine->next = newNode; // Il campo next del nodo attualmente in fine punta al nuovo nodo
                fine = newNode; // Il puntatore fine ora punta al nuovo nodo, che è diventato l'ultimo nodo della coda
            }
        }

        void Estrazione() // Rimuove l'elemento all'inizio della coda
        {
            if (inizio != NULL) // Controlla se la coda non è vuota prima di rimuovere un elemento
            {
                Nodo* temp = inizio; // Salva il nodo attualmente all'inizio della coda in un puntatore temporaneo
                inizio = inizio->next; // Il puntatore inizio ora punta al nodo successivo, che diventa il nuovo inizio della coda

                if (inizio == NULL) // Se la coda è diventata vuota dopo la rimozione, aggiorna anche il rear
                {
                    fine = NULL; // La coda è vuota, quindi il puntatore rear è NULL
                }
                delete temp; // Dealloca la memoria del nodo rimosso per evitare perdite di memoria
            }
        }
};