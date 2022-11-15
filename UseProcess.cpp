#include "UseProcess.h"

void UseProcess::inputProcess(NodoProcess *&list,Proceso &proceso,Marco *&marco){

    if(marco->get_capacity() > proceso.get_page_size()){
             proceso.set_is_run(true);
                marco->set_capacity((marco->get_capacity())-(proceso.get_page_size()));
    }else
        proceso.set_is_run(false);
    
    cout<<marco->get_capacity();

    NodoProcess *newprocess = new NodoProcess();
    newprocess->proceso->set_name(proceso.get_name());
    newprocess->proceso->set_page_size(proceso.get_page_size());
    newprocess->proceso->set_is_run(proceso.get_is_run());

    NodoProcess *aux = list;
    list = newprocess;
    newprocess->Next_process = aux;

}
void UseProcess::endProcess(NodoProcess *&list,char proceso){

if(list != NULL){
    NodoProcess *aux_eliminar;
    NodoProcess *anterior = NULL;
    aux_eliminar = list;

    while((aux_eliminar != NULL)&&(aux_eliminar->proceso->get_name() != proceso)){
        anterior = aux_eliminar;
        aux_eliminar = aux_eliminar->Next_process;
    }

    if(aux_eliminar == NULL){
        cout<<"Process not found";
    }else if(anterior == NULL){
        list = list->Next_process;
        delete aux_eliminar;
    }else{
        anterior->Next_process = aux_eliminar->Next_process;
        delete aux_eliminar;
    }
}



}

void UseProcess::paintProcessStatus(NodoProcess *){

}