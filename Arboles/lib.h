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
void menu();
Nodo* C_nuevoNodo(int valor);
void A_nuevoNodo(Nodo *&Hoja,int numero);
void Preorden(Nodo *R);

//================================================================
void A_nuevoNodo(Nodo *&Hoja,int numero){//Paso por referencia
    if (Hoja==NULL)
    {
        Nodo *Hoja=C_nuevoNodo(numero);
        return;
    }
    if ((Hoja)->clave==numero)
    {
        cout<<"El valor ya existe";
        return;
    }
    if ((Hoja)->clave>numero)//izquierda
    {
        A_nuevoNodo((Hoja)->izquierda,numero);
        return;
    }
    if (Hoja->clave<numero)
    {
        A_nuevoNodo(Hoja->derecha,numero);
        return;
    }
    
    
    

}

void menu(){
    int opt,num;
    Nodo *raiz;
    cout<<"1.-Crear Nodo"<<endl<<"2.-Eliminar nodos"<<endl<<"3.-Imprimir nodos en preorden"<<endl<<"4.-Imprimir en postorden"<<endl;
    cin>>opt;
    switch (opt)
    {
    case 1:
        cout<<"Introduce una clave"<<endl;
        cin>>num;
        A_nuevoNodo(raiz,num);
        break;
    case 2:
        break;
    case 3:
        if (raiz)
        {
            Preorden(raiz);
        }else{
            cout<<"No hay arbol"<<endl;
        }
    
    
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
    a->derecha=NULL;
    a->izquierda=NULL;
    return a;
}

void Preorden(Nodo *R){
    if(R){
        cout<<R->clave;
        Preorden(R->izquierda);
        Preorden(R->derecha);
    }
}