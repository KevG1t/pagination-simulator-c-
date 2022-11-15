#ifndef MARCO_H
#define MARCO_H

#include "Proceso.cpp"

struct NodoProcess{
         NodoProcess *Next_process;
         Proceso *proceso = new Proceso();
    };

using namespace std;

class Marco
{
    private:
        int width, heigth,capacity;
    public:
        Marco(int _width,int _heigth )
        {
            width = _width;
            heigth = _heigth;
        }

        Marco()
        {
            width = 12;
            heigth = 14;
            capacity = heigth-2;
        }

        void Paint_Marco(NodoProcess *&);
        void set_width(int);
        void set_heigth(int);
        void set_capacity(int);

        int get_width();
        int get_heigth();
        int get_capacity();
};
#endif