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

        void stampa() //metodo per stampare la frazione
        {
            cout << numeratore << "/" << denominatore;
        }
};

int main() //funzione principale
{
    Frazione f1,f2; //creazione degli oggetti f1 e f2 della classe Frazione

    f1.setNumeratore(12); //setto il numeratore di f1 a 12

    f1.setDenominatore(4); //setto il denominatore di f1 a 4

    int n1 = f1.getNumeratore(); //ottengo il numeratore di f1 e lo salvo in n1

    cout << "La frazione e': "; //stampo a video la frase

    f1.stampa(); //chiamo il metodo stampa per l'oggetto f1

    return 0;
}
