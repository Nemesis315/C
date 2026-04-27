#include <iostream>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *next;
};

class Lista
{
    private:
    Nodo *testa;
    public:
    Lista(): testa(nullptr) {}

    ~Lista()
    {
        Nodo *temp;
        temp = testa;
        while (testa != nullptr)
        {
            testa = testa->next;
            delete temp;
        }
    }

    bool isEmpty()
    {
        return testa == nullptr;
    }

    void aggiungiKNodi(int k)
    {
        if(testa == nullptr)
        {
            cout << "Lista Vuota" << endl;
            return;
        }

        int cont = 0;

        while (k > cont)
        {
            Nodo *temp = new Nodo;
        
            cout << "Inserire un valore: " << endl;
            cin >> temp->dato;
            temp->next = testa;
            testa = temp;
            cont++;
        }
    }

    int contaMaggioreDi(int x)
    {
        if(testa == nullptr)
        {
            cout << "Lista Vuota" << endl;
            return -1;
        }

        Nodo *temp;
        temp = testa;
        int cont = 0;

        while (temp != nullptr)
        {
            if(temp->dato > x)
            {
                cont++;
            }
            temp = temp->next;
        }
        return cont;
    }

    int ListaOrdinata()
    {
        if(testa == nullptr)
        {
            cout << "Lista Vuota" << endl;
            return -1;
        }

        Nodo *temp;
        temp = testa;
        int buffer = 0;

        while (temp->next != nullptr)
        {
            if(temp->dato > buffer)
            {
                buffer = temp->dato;
            }
            else
            {
                return false;
            }
        }
        return true;
    }

    int cancellaPari()
    {
        if(testa == nullptr)
        {
            cout << "Lista Vuota" << endl;
            return -1;
        }

        Nodo *temp;
        temp = testa;

        while (temp != nullptr)
        {
            if(temp->dato % 2 == 0)
            {
                Nodo *daCancellare = temp;
                temp = temp->next;
                delete daCancellare;
            }
            else
            {
                temp = temp->next;
            }
        }
        return 0;
    }

    int invertiLista()
    {
        if(testa == nullptr)
        {
            cout << "Lista Vuota" << endl;
            return -1;
        }

        Nodo *temp = testa;
        Nodo *prev = nullptr;
        Nodo *next = nullptr;

        while (temp != nullptr)
        {
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        testa = prev;
        return 0;
    }

    int stampa()
    {
        if(testa == nullptr)
        {
            cout << "Lista Vuota" << endl;
            return -1;
        }

        Nodo *temp;
        temp = testa;

        while (temp != nullptr)
        {
            cout << temp->dato << " ";
            temp = temp->next;
        }
        cout << endl;
        return 0;
    }
};

int main()
{
    Lista l;
    l.aggiungiKNodi(5);
    l.stampa();
    cout << "Ci sono " << l.contaMaggioreDi(3) << " numeri maggiori di 3" << endl;
    cout << "La lista è ordinata? " << (l.ListaOrdinata() ? "Sì" : "No") << endl;
    l.cancellaPari();
    cout << "Lista dopo aver cancellato i numeri pari: ";
    l.stampa();
    l.invertiLista();
    cout << "Lista invertita: ";
    l.stampa();

    return 0;
}