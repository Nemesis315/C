#include <iostream>

using namespace std;

class Rettangolo
{
    private:
        double base;
        double altezza;
    
    public:
        Rettangolo(double base = 10.0, double altezza = 2.0)
        {
            this->base = base;

            this->altezza = altezza;
        }
    

        double calcolaArea()
        {
            return base * altezza;
        }

        double calcolaPerimentro()
        {
            return 2 * (base + altezza);
        }
};

int main()
{
    double base, altezza;

    cout << "Inserire la base del rettangolo: ";
    cin >> base;

    cout << "Inserire l'altezza del rettangolo: ";
    cin >> altezza;

    Rettangolo r1(base, altezza);

    Rettangolo r2; //rettangolo con valori di default

    Rettangolo r3(6.0); //rettangolo con altezza di default

    cout << "Area del rettangolo: " << r1.calcolaArea() << endl;
    cout << "Perimetro del rettangolo: " << r1.calcolaPerimentro() << endl;

    cout << "Area del rettangolo: " << r2.calcolaArea() << endl;
    cout << "Perimetro del rettangolo: " << r2.calcolaPerimentro() << endl;

    cout << "Area del rettangolo: " << r3.calcolaArea() << endl;
    cout << "Perimetro del rettangolo: " << r3.calcolaPerimentro() << endl;



    return 0;
}