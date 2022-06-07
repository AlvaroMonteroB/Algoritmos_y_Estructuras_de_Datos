#include<iostream>

using namespace std;

//==========================================================================
typedef struct{
    int numero;
}Valor;

typedef struct Nodo{
        int clave;
        Valor cant;
        Nodo *derecha;
        Nodo *izquierda;

}Nodo;
//==========================================================================
void menu2(Nodo *&raiz1,Nodo *&raiz2);
bool comp_arbol(Nodo *raiz1,Nodo *raiz2);
bool A_nuevoNodo(Nodo *&Hoja,int numero);
Nodo * C_nuevoNodo(int valor);
//===========================================================================
void menu2(Nodo *&raiz1,Nodo *&raiz2){
    int opt,cant;
    cout<<"1.-Agregar Nodo a arbol 1"<<endl<<"2.-Agregar nodo a arbol 2"<<endl<<"3.-Comparar arboles"<<endl;
    cin>>opt;
    switch (opt)
    {
    case 1:
        cout<<"Introduce un numero"<<endl;
        cin>>cant;
        A_nuevoNodo(raiz1,cant);
        break;
    case 2:
        cout<<"Introduce un numero"<<endl;
        cin>>cant;
        A_nuevoNodo(raiz2,cant);
        break;
    case 3:
        bool a;
        a=comp_arbol(raiz1,raiz2);
        if (a)
        {
            cout<<"Los arboles son iguales"<<endl;
        }else{
            cout<<"Los arboles no son iguales"<<endl;
        }
        
        break;
    default:
        cout<<"Introduce una opción válida"<<endl;
        break;
    }
}


bool comp_arbol(Nodo *raiz1,Nodo *raiz2){
    if (raiz1==NULL&&raiz2==NULL)
    {
        return true;
    }else if(raiz1!=NULL&&raiz2!=NULL){
        bool a=comp_arbol(raiz1->izquierda,raiz2->izquierda)&&comp_arbol(raiz1->derecha,raiz2->derecha);
     return a;   
    }
    return false;
    
}   


bool A_nuevoNodo(Nodo *&Hoja,int numero){//Paso por referencia
    if (Hoja==NULL)
    {
        Hoja=C_nuevoNodo(numero);
        return true;
    }
    if (Hoja->clave==numero)
    {
        cout<<"El valor ya existe"<<endl;
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