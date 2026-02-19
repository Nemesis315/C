#ifndef QUADRATO_H
#define QUADRATO_H

#include "Rombo.h"

class Quadrato : public Rombo
{
    private:
        int lato;

    public:
        Quadrato(int lato = 1);
        void setLato(int lato);
        void stampaQuadrato();

        void calcolaArea();
        void calcolaPerimetro();
};

#endif // QUADRATO_H