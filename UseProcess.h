#ifndef USEPROCESS_H
#define USEPROCESS_H

#include "Marco.cpp"


using namespace std;

class UseProcess{

    private:
    public:
    
        UseProcess(){}
        void inputProcess(NodoProcess *&,Proceso&,Marco*&);
        void endProcess(NodoProcess *&,char);
        void paintProcessStatus(NodoProcess *);

};

#endif