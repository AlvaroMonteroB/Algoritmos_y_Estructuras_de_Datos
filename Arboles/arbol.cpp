#include<iostream>
using namespace std;

void C_nuevoNodo(Nodo *rama);


typedef struct{

}Valor;
typedef struct Nodo{
        Valor cant;
        Nodo *derecha;
        Nodo *izquierda;

}Nodo;

int main(){
    Nodo *raiz=NULL;
    


}



void C_nuevoNodo(Nodo **Hoja){
    if (Hoja==NULL)
    {
        *Hoja=new Nodo();
    }
    

}