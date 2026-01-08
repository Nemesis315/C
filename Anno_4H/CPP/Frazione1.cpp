#include <iostream> //direttiva al preprocessore per includere la libreria standard di input/output

class Frazione //Creo la classe Frazione
{
    public: //attributi privati
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
};

int main() //funzione principale
{
    Frazione f1,f2; //creazione degli oggetti f1 e f2 della classe Frazione

    f1.setNumeratore(12); //setto il numeratore di f1 a 12
    f1.setDenominatore(4); //setto il denominatore di f1 a 4

    std::cout << "La frazione e': " << f1.numeratore << "/" << f1.denominatore << std::endl; //stampo a video la frazione

}
