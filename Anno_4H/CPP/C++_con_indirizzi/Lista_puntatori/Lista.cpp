#include <iostream>

using namespace std;

// Struttura del nodo della lista
struct Nodo 
{
    int info;
    Nodo* next;
};

// Classe Lista
class Lista {
private:
    Nodo* testa;

public:
    // Costruttore
    Lista() 
    {
        testa = NULL;
    }

    // Distruttore
    ~Lista() 
    {
        cancella_lista();
    }

    // Inserisci elemento in testa
    void inserisci_testa(int valore) 
    {
        Nodo* nuovo = new Nodo;
        nuovo->info = valore;
        nuovo->next = testa;
        testa = nuovo;
        cout << "Elemento " << valore << " inserito in testa.\n";
    }

    // Inserisci elemento in coda
    void inserisci_coda(int valore) 
    {
        Nodo* nuovo = new Nodo;
        nuovo->info = valore;
        nuovo->next = NULL;

        if (testa == NULL) 
        {
            testa = nuovo;
        }
        else 
        {
            Nodo* temp = testa;
            while (temp->next != NULL) 
            {
                temp = temp->next;
            }
            temp->next = nuovo;
        }
        cout << "Elemento " << valore << " inserito in coda.\n";
    }

    // Inserisci elemento in una posizione specifica (1-based index) con 2 puntatori
    void inserisci_posizione(int valore, int posizione) 
    {
        Nodo* temp;
        Nodo* q;
        if (testa == NULL || testa->info > valore)
        {
            inserisci_testa(valore);
            return;            
        }
        else
        {
            temp = testa;
            q = temp->next;

            while (q != NULL && q->info < valore)
            {
                temp = q;
                q = q->next;
            }
            
            // Inserisci il nuovo nodo tra temp e q
            Nodo* nuovo = new Nodo;
            nuovo->info = valore;
            nuovo->next = q;
            temp->next = nuovo;
            cout << "Elemento " << valore << " inserito in ordine.\n";
        }
    }

    // Stampa la lista
    void stampa() 
    {
        if (testa == NULL) 
        {
            cout << "Lista vuota!\n";
            return;
        }
        cout << "Lista: ";
        Nodo* temp = testa;
        while (temp != NULL) 
        {
            cout << temp->info;
            if (temp->next != NULL) 
            {
                cout << " -> ";
            }
            temp = temp->next;
        }
        cout << " -> NULL\n";
    }

    // Cancella tutta la lista
    void cancella_lista() {
        Nodo* temp;
        while (testa != NULL) {
            temp = testa;
            testa = testa->next;
            delete temp;
        }
        cout << "Lista cancellata.\n";
    }
};

// Funzione principale per il test
int main() 
{
    Lista lista;
    int scelta, valore;

    cout << "=== LISTA CON PUNTATORI (SOLO TESTA) ===\n\n";

    while (true) 
    {
        cout << "\n--- MENU ---\n";
        cout << "1. Inserisci elemento in testa\n";
        cout << "2. Inserisci elemento in coda\n";
        cout << "3. Inserisci elemento in posizione\n";
        cout << "4. Stampa lista\n";
        cout << "5. Cancella lista\n";
        cout << "0. Esci\n";
        cout << "Sceglia un'opzione: ";
        cin >> scelta;

        switch (scelta) 
        {
        case 1:
            cout << "Inserisci valore: ";
            cin >> valore;
            lista.inserisci_testa(valore);
            break;

        case 2:
            cout << "Inserisci valore: ";
            cin >> valore;
            lista.inserisci_coda(valore);
            break;

        case 3: 
        {
            int posizione;
            cout << "Inserisci valore: ";
            cin >> valore;
            cout << "Inserisci posizione (1-based index): ";
            cin >> posizione;
            lista.inserisci_posizione(valore, posizione);
            break;
        }

        case 4:
            lista.stampa();
            break;

        case 5:
            lista.cancella_lista();
            break;

        case 0:
            cout << "Arrivederci!\n";
            return 0;

        default:
            cout << "Opzione non valida!\n";
        }
    }

    return 0;
}
