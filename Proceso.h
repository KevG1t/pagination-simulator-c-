#ifndef PROCESO_H
#define PROCESO_H

#include <iostream>


using namespace std;

class Proceso
{
    //ATRIBUTOS
    private:
        char name;
        int page_size;
        bool is_run;
    //METODOS    
    public:
        Proceso()
        {
            name = ' ';
            page_size = 0;
            is_run = false;
        }

        void set_name(char);
        void set_page_size(int);
        void set_is_run(bool);

        char get_name();
        int get_page_size();
        bool get_is_run();
};
#endif