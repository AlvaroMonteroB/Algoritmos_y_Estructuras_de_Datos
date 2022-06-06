#include<iostream>
#include"lib.h"
using namespace std;
void menu2(Nodo *&raiz);
//==========================================================================

void menu2(Nodo *&raiz){
    int opt;
    cout<<"1.-Agregar Nodo a arbol 1"<<endl<<"2.-Agregar nodo a arbol 2"<<endl<<"3.-Comparar arboles"<<endl;
    cin>>opt;
    switch (opt)
    {
    case 1:
        /* code */
        break;
    case 2:
        break;
    case 3:
        break;
    default:
        cout<<"Introduce una opción válida";
        break;
    }
}