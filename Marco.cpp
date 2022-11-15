#include "Marco.h"

void Marco::Paint_Marco(NodoProcess *&list)
{
     for(int f=0;f<heigth;f++){
          for(int c=0;c<width;c++){
               if(f == 0 || f == heigth-1 || c==0 || c==width-1){
                    cout<<char(178);
               }else{
                    cout<<"";
               }    
          }
             cout<<endl;
     }
       
}

void Marco::set_width(int value_width)
{
    width = value_width;
}

void Marco::set_heigth(int value_heigth)
{
    heigth = value_heigth;
}

void Marco::set_capacity(int value_capacity)
{
     capacity = value_capacity;
}

int Marco::get_width(){return width;}
int Marco::get_heigth(){return heigth;}
int Marco::get_capacity(){return capacity;}