
#include "UseProcess.cpp"
#include <conio.h>

void list_process(NodoProcess *);

int main()
{
    NodoProcess *lista = NULL;
    Proceso *p = new Proceso(); 
    Marco *marco = new Marco();
    UseProcess *newUse = new UseProcess();
  
    cout<<endl<<"Ingrese el proceso: ";
    p->set_name('b');
    p->set_page_size(2);
    
    newUse->inputProcess(lista,*p,marco);

    cout<<endl<<"Ingrese el proceso: ";
    p->set_name('a');
    p->set_page_size(7);

    newUse->inputProcess(lista,*p,marco);

    cout<<endl<<"Ingrese el proceso: ";
    p->set_name('c');
    p->set_page_size(5);

    newUse->inputProcess(lista,*p,marco);

    // marco->Paint_Marco(lista);

    list_process(lista);
    
    newUse->endProcess(lista,'a');
    getch();
    system("cls");
    list_process(lista);

   
    getch();
    return 0;
}

void list_process(NodoProcess *list){
    NodoProcess *actual = new NodoProcess();
    actual = list;

    while(actual != NULL){

        cout<<endl<<actual->proceso->get_name()<<" tiene:"<<actual->proceso->get_page_size()<<" paginas"<< "estado: "<<actual->proceso->get_is_run();

        actual = actual->Next_process;
    }
}