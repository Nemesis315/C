#ifndef TRAPEZIO_H
#define TRAPEZIO_H

#include "Quadrilatero.h"

class Trapezio : public Quadrilatero
{
    private:
        int altezza;

    public:
        Trapezio(int lato1 = 1, int lato2 = 1, int lato3 = 1, int lato4 = 1, int altezza = 1);
        void setAltezza(int altezza);
        void stampaTrapezio();

        void calcolaArea();
        void calcolaPerimetro();
};

#endif // TRAPEZIO_H