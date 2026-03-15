#include <iostream>
#include <string>

using namespace std;

struct Nodo // Struttura del nodo della pila
{
    int info;
    Nodo* next;
};

typedef Nodo* PNodo;

class Pila // Classe che rappresenta la pila
{
    private: // Puntatore al nodo superiore della pila

        struct Nodo* top; // Puntatore al nodo superiore della pila

    public: // Costruttore della pila

        Pila() // Inizializza la pila vuota
        {
            top = NULL; // La pila è vuota, quindi il puntatore top è NULL
        }

        void push(int valore) // Aggiunge un elemento alla cima della pila
        {
            Nodo* newNode = new  Nodo; // Crea un nuovo nodo
            newNode->info = valore; // Assegna il valore al campo info del nuovo nodo
            newNode->next = top; // Il campo next del nuovo nodo punta al nodo attualmente in cima alla pila
            top = newNode; // Il puntatore top ora punta al nuovo nodo, che è diventato la nuova cima della pila
        }

        void pop() // Rimuove l'elemento in cima alla pila
        {
            if (top != NULL) // Controlla se la pila non è vuota prima di rimuovere un elemento
            {
                Nodo* temp = top; // Salva il nodo attualmente in cima alla pila in un puntatore temporaneo
                top = top->next; // Il puntatore top ora punta al nodo successivo, che diventa la nuova cima della pila
                delete temp; // Dealloca la memoria del nodo rimosso per evitare perdite di memoria
            }
        }

        int Top() // Restituisce l'elemento in cima alla pila senza rimuoverlo
        {
            if (top != NULL) // Controlla se la pila non è vuota prima di accedere all'elemento in cima
            {
                return top->info; // Restituisce il valore del campo info del nodo in cima alla pila
            }
            return 0; // Valore di default se la pila è vuota
        }

        bool isEmpty() // Verifica se la pila è vuota
        {
            return top == NULL; // Restituisce true se il puntatore top è NULL, indicando che la pila è vuota, altrimenti restituisce false
        }

        void print() // Stampa gli elementi della pila dalla cima alla base
        {
            Nodo* x = top; // Inizia a stampare dal nodo in cima alla pila
            while (x != NULL) // Continua a stampare finché non si raggiunge la fine della pila (quando x diventa NULL)
            {
                cout << x->info << " "; // Stampa il valore del campo info del nodo corrente seguito da uno spazio

                x = x->next; // Passa al nodo successivo nella pila
            }

            cout << endl; // Stampa una nuova linea dopo aver stampato tutti gli elementi della pila
        }
};

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