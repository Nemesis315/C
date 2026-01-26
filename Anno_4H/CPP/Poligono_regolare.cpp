#include <iostream>

using namespace std;
class Poligono_regolare
{
private:
    int numero_lati;
    double lunghezza_lato;
    string colore;
public:
    Poligono_regolare(int numero_lati = 3, double lunghezza_lato = 1.0, string colore = "rosso")
    {
        this->numero_lati = numero_lati;
        this->lunghezza_lato = lunghezza_lato;
        this->colore = colore;
    }
    ~Poligono_regolare()
    {
        cout << "Distruttore" << endl;
    };

    //Metodi set e get

    void set_numero_lati(int numero_lati)
    {
        this->numero_lati = numero_lati;
    };

    void set_lunghezza_lato(double lunghezza_lato)
    {
        this->lunghezza_lato = lunghezza_lato;
    };

    void set_colore(string colore)
    {
        this->colore = colore;
    };

    int get_numero_lati()
    {
        return numero_lati;
    };
    
    double get_lunghezza_lato()
    {
        return lunghezza_lato;
    };

    string get_colore()
    {
        return colore;
    };

    double perimetro()
    {
        return numero_lati * lunghezza_lato;
    };
};

int main()
{   
    int n_lati;
    double lunghezza;
    string colore;

    cout << "Inserisci il numero di lati del secondo poligono: ";
    cin >> n_lati;
    cout << "Inserisci la lunghezza del lato del secondo poligono: ";
    cin >> lunghezza;
    cout << "Inserisci il colore del secondo poligono: ";
    cin >> colore;

    //Creazione degli oggetti Poligono_regolare

    Poligono_regolare p1(4, 2.5, "blu");
    Poligono_regolare p2(n_lati, lunghezza, colore);

    //Modifica dei valori del primo poligono

    p1.set_numero_lati(5);
    p1.set_lunghezza_lato(3.0);
    p1.set_colore("verde");

    //Stampa dei perimetri e confronto

    cout << "Perimetro del primo poligono: " << p1.perimetro() << endl;
    cout << "Perimetro del secondo poligono: " << p2.perimetro() << endl;

    cout << "Il poligono con il perimetro maggiore e': ";
    if (p1.perimetro() > p2.perimetro())
    {
        cout << "il primo poligono." << endl;
    }
    else if (p1.perimetro() < p2.perimetro())
    {
        cout << "il secondo poligono." << endl;
    }
    else
    {
        cout << "entrambi i poligoni hanno lo stesso perimetro." << endl;
    }
    return 0;
}
