#include<iostream>
using namespace std;
//================================================================
typedef struct{
    int numero;
}Valor;
typedef struct Nodo{
        int clave;
        Valor cant;
        Nodo *derecha;
        Nodo *izquierda;

}Nodo;
//================================================================
void A_nuevoNodo(Nodo **Hoja,int numero){
    if (Hoja==NULL)
    {
        Nodo *nuevo=C_nuevoNodo(numero);
        return;
    }
    if ((*Hoja)->clave==numero)
    {
        cout<<"El valor ya existe";
        return;
    }
    if ((*Hoja)->clave>numero)//izquierda
    {
        A_nuevoNodo((Hoja)->izquierda,numero);
    }
    
    
    

}

void menu(){
    int opt;
    cout<<"1.-Crear Nodo"<<endl<<"2.-Eliminar nodos"<<endl<<"3.-Imprimir nodos en preorden"<<endl<<"4.-Imprimir en postorden";
    cin>>opt;
    switch (opt)
    {
    case 1:
        
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    cout<<"Introduce una opcion valida"<<endl;
    system("pause");
    system("cls");
        break;
    }


}

Nodo* C_nuevoNodo(int valor){
    Nodo *a=new Nodo();
    a->clave=valor;
    a->derecha=a->izquierda=nullptr;
    return a;
}