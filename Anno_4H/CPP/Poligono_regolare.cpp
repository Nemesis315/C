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
    ~Poligono_regolare();

    double perimetro()
    {
        return numero_lati * lunghezza_lato;
    }

    void contronta_perimetro(Poligono_regolare p)
    {
        double p1 = perimetro();
        double p2 = p.perimetro();

        if (p1 > p2)
        {
            cout << "Il primo poligono ha un perimetro maggiore: " << p1 << endl;
        }
        else if (p1 < p2)
        {
            cout << "Il secondo poligono ha un perimetro maggiore: " << p2 << endl;
        }
        else
        {
            cout << "I due poligoni hanno lo stesso perimetro: " << p1 << endl;
        }
    }
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

    Poligono_regolare p1(4, 2.5, "blu");
    Poligono_regolare p2(n_lati, lunghezza, colore);


    cout << "Perimetro del primo poligono: " << p1.perimetro() << endl;
    cout << "Perimetro del secondo poligono: " << p2.perimetro() << endl;

    p1.contronta_perimetro(p2);

    return 0;
}
