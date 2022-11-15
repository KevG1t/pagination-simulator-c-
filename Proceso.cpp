#include "Proceso.h"

    //DEFINIR NOMBRE
    void Proceso::set_name(char value_name)
    {
        name = value_name;
    }
    //DEFINIR TAMAÑO DE PAGINA
    void Proceso::set_page_size(int value_page_size)
    {
        page_size = value_page_size;
    }
    //DEFINIR ESTADO
    void Proceso::set_is_run(bool value_is_run)
    {
        is_run = value_is_run;
    }

    //RETORNAR NAME Y TAMAÑO DE PÁGINAS
    char Proceso::get_name(){return name;}
    int Proceso::get_page_size(){return page_size;}
    bool Proceso::get_is_run(){return is_run;}