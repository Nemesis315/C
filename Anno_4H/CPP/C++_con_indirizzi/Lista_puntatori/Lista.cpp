#include <iostream>
#include <string>

using namespace std;

struct Nodo
{
    int dato;
    Nodo* next;
};

class Lista
{
    private:
        Nodo* inizio;
        Nodo* fine;
    public:
        Lista()
        {
            inizio = NULL;
            fine = NULL;
        }

        void InserisciInTesta(int valore)
        {
            Nodo* nuovoNodo = new Nodo;
            nuovoNodo->dato = valore;
            nuovoNodo->next = inizio;
            inizio = nuovoNodo;
            if (fine == NULL)
            {
                fine = nuovoNodo;
            }
        }

        void InserisciInCoda(int valore)
        {
            Nodo* nuovoNodo = new Nodo;
            nuovoNodo->dato = valore;
            nuovoNodo->next = NULL;
            if (fine != NULL)
            {
                fine->next = nuovoNodo;
            }
            fine = nuovoNodo;
            if (inizio == NULL)
            {
                inizio = nuovoNodo;
            }
        }

        void InserisciInPosizione(int valore, int posizione)
        {
            if (posizione < 0)
            {
                return;
            }
            if (posizione == 0)
            {
                InserisciInTesta(valore);
                return;
            }
            Nodo* nuovoNodo = new Nodo;
            nuovoNodo->dato = valore;
            nuovoNodo->next = NULL;
            Nodo* temp = inizio;
            for (int i = 0; temp != NULL && i < posizione - 1; i++) // Scorri fino alla posizione precedente
            {
                temp = temp->next;
            }
            if (temp == NULL)
            {
                delete nuovoNodo;
                return;
            }
            nuovoNodo->next = temp->next;
            temp->next = nuovoNodo;
            if (nuovoNodo->next == NULL)
            {
                fine = nuovoNodo;
            }
        }

        void EliminaInPosizione(int posizione)
        {
            if (posizione < 0 || inizio == NULL)
            {
                return;
            }
            if (posizione == 0)
            {
                EliminaInTesta();
                return;
            }
            Nodo* temp = inizio;
            for (int i = 0; temp != NULL && i < posizione - 1; i++)
            {
                temp = temp->next;
            }
            if (temp == NULL || temp->next == NULL)
            {
                return;
            }
            Nodo* nodoDaEliminare = temp->next;
            temp->next = nodoDaEliminare->next;
            if (nodoDaEliminare == fine)
            {
                fine = temp;
            }
            delete nodoDaEliminare;
        }

        void EliminaInCoda()
        {
            if (fine != NULL)
            {
                if (inizio == fine)
                {
                    delete fine;
                    inizio = NULL;
                    fine = NULL;
                }
                else
                {
                    Nodo* temp = inizio;
                    while (temp->next != fine)
                    {
                        temp = temp->next;
                    }
                    delete fine;
                    fine = temp;
                    fine->next = NULL;
                }
            }
        }

        void EliminaInTesta()
        {
            if (inizio != NULL)
            {
                Nodo* temp = inizio;
                inizio = inizio->next;
                delete temp;
                if (inizio == NULL)
                {
                    fine = NULL;
                }
            }
        }

        void StampaLista()
        {
            Nodo* temp = inizio;
            while (temp != NULL)
            {
                cout << temp->dato << " ";
                temp = temp->next;
            }
            cout << endl;
        }
};

int main()
{
    Lista lista;
    lista.InserisciInCoda(10);
    lista.InserisciInCoda(20);
    lista.InserisciInCoda(30);
    cout << "Lista dopo inserimenti in coda: ";
    lista.StampaLista();

    lista.InserisciInTesta(5);
    cout << "Lista dopo inserimento in testa: ";
    lista.StampaLista();

    lista.InserisciInPosizione(15, 2);
    cout << "Lista dopo inserimento in posizione 2: ";
    lista.StampaLista();

    lista.EliminaInPosizione(1);
    cout << "Lista dopo eliminazione in posizione 1: ";
    lista.StampaLista();

    lista.EliminaInCoda();
    cout << "Lista dopo eliminazione in coda: ";
    lista.StampaLista();

    lista.EliminaInTesta();
    cout << "Lista dopo eliminazione in testa: ";
    lista.StampaLista();

    return 0;
}