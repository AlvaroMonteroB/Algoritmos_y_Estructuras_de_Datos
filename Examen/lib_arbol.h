#include<iostream>
using namespace std;
//=========Estructura para arboles===============
typedef struct Nodo{
    int clave;
    Nodo *izquierda;
    Nodo *derecha;
}Nodo;

//===========================================================================

bool A_nuevoNodo(Nodo *&Hoja,int numero);
Nodo * C_nuevoNodo(int valor);
void menu(Nodo *&raiz);
void imp_niv(Nodo *raiz,int nivel,int obj);

//==========================================================================
//=============================Funciones====================================
//==========================================================================

void menu(Nodo *&raiz){
    int lvl=1;
    //int *array;
    A_nuevoNodo(raiz,49);
    A_nuevoNodo(raiz,37);
    A_nuevoNodo(raiz,89);
    A_nuevoNodo(raiz,53);
    A_nuevoNodo(raiz,41);
    A_nuevoNodo(raiz,13);
    A_nuevoNodo(raiz,7);
    A_nuevoNodo(raiz,19);
    A_nuevoNodo(raiz,71);
    A_nuevoNodo(raiz,82);
    A_nuevoNodo(raiz,60);
    A_nuevoNodo(raiz,25);

    for (int i = 1; i < 13; i++)
    {
        imp_niv(raiz,lvl,i);
    }
    system("pause");
}


bool A_nuevoNodo(Nodo *&Hoja,int numero){//Paso por referencia
    if (Hoja==NULL)
    {
        Hoja=C_nuevoNodo(numero);
        return true;
    }
    if (Hoja->clave==numero)
    {
        cout<<"El valor ya existe";
        return true;
    }
    if ((Hoja)->clave>numero)//izquierda
    {
        A_nuevoNodo((Hoja)->izquierda,numero);
        return true;
    }
    if (Hoja->clave<numero)
    {
        A_nuevoNodo(Hoja->derecha,numero);
        return true;
    }

}


Nodo * C_nuevoNodo(int valor){
    Nodo *a=new Nodo();
    if (a==NULL)
    {
        cout<<"Error al asignar memoria";
        return NULL;
    }else{
        cout<<"Memoria alocada con exito"<<endl;
    }
    
    a->clave=valor;
    a->derecha=NULL;
    a->izquierda=NULL;
    
    return a;
}

void imp_niv(Nodo *raiz,int nivel,int obj){//zig zag tree
    if(raiz==NULL){
        return;
    }
    if (nivel==obj)
    {
     cout<<raiz->clave<<" ";
    }
    if(nivel<obj){
    nivel++;
    if (nivel%2==0)
    {
    imp_niv(raiz->derecha,nivel,obj);
        imp_niv(raiz->izquierda,nivel,obj);
    }else{
        imp_niv(raiz->izquierda,nivel,obj);
    imp_niv(raiz->derecha,nivel,obj);
    }
    
    
    }
    return;
    

}