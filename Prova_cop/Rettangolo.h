#ifndef RETTANGOLO_H
#define RETTANGOLO_H

class Rettangolo
{
    private:
        double base;
        double altezza;
    
    public:
        Rettangolo(double base = 10.0 , double altezza = 2.0);

        void setBase(double base);

        void setAltezza(double altezza);

        double getBase();

        double getAltezza();

        double calcolaArea();
        
        double calcolaPerimentro();

};

#endif
