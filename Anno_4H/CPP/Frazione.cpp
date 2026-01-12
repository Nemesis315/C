#include <iostream> //direttiva al preprocessore per includere la libreria standard di input/output
using namespace std; //Utilizzo lo spazio gia esistente "std"

class Frazione //Creo la classe Frazione
{
    private: //attributi privati
        int numeratore; //Dichiarazione attributo numeratore di tipo intero
        int denominatore; //Dichiarazione attributo denominatore di tipo intero

    public: //metodi pubblici
        Frazione(){}; //costruttore di default

        void setNumeratore(int n) //metodo per settare il numeratore
        {
            numeratore = n;
        }
        void setDenominatore(int d) //metodo per settare il denominatore
        {
            denominatore = d;
        }

        int getNumeratore() //metodo per ottenere il numeratore
        {
            return numeratore;
        }

        int getDenominatore() //metodo per ottenere il denominatore
        {
            return denominatore;
        }

        int MCD(int x, int y) //funzione per calcolare il massimo comune divisore
        {
            while (x != y)
            {
                if (x > y)
                {
                    x = x - y;
                }
                else
                {
                    y = y - x;
                }
            }

            return x;
        }

        void semplifica() //metodo per semplificare la frazione
        {
            int r = MCD(numeratore, denominatore); //calcolo il massimo comune divisore tra numeratore e denominatore
            numeratore /= r; //divido il numeratore per il massimo comune divisore
            denominatore /= r; //divido il denominatore per il massimo comune divisore
        }

        void stampa() //metodo per stampare la frazione
        {
            cout << numeratore << "/" << denominatore;
        }
};

int main() //funzione principale
{
    Frazione f1,f2; //creazione degli oggetti f1 e f2 della classe Frazione

    cout << "Inserire numeratore della frazione: "; //stampo a video la frase

    int n; //dichiarazione variabile intera n

    int d; //dichiarazione variabile intera d

    cin >> n; //leggo da tastiera il valore di n

    f1.setNumeratore(n); //setto il numeratore di f1 al valore

    cout << "Inserire denominatore della frazione: "; //stampo a video la frase

    cin >> d; //leggo da tastiera il valore di d

    f1.setDenominatore(d); //setto il denominatore di f1 al valore

    //int n1 = f1.getNumeratore(); //ottengo il numeratore di f1 e lo salvo in n1

    f1.semplifica(); //chiamo il metodo semplifica per l'oggetto f1

    cout << "La frazione e': "; //stampo a video la frase

    f1.stampa(); //chiamo il metodo stampa per l'oggetto f1

    cout << endl; //vado a capo
    
    return 0;
}
