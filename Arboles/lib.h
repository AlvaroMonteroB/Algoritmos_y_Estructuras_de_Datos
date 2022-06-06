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
void menu(Nodo *&raiz);
Nodo* C_nuevoNodo(int valor);
bool A_nuevoNodo(Nodo *&Hoja,int numero);
void Preorden(Nodo *R);
void inorden(Nodo *R);
void posorden(Nodo *R);
void preordenconv(Nodo *R);
void preordenconv(Nodo *R);
void posordenconv(Nodo *R);
void inordenconv(Nodo *R);
void eliminar(Nodo *&raiz);
void espejo(Nodo *raiz);

//================================================================
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

void menu(Nodo *&raiz){
    int opt,num;
    cout<<"1.-Crear Nodo"<<endl<<"2.-Eliminar nodos"<<endl<<"3.-Imprimir nodos en preorden"<<endl<<"4.-Imprimir en postorden"<<endl<<"5.-Imprimir inorden"<<endl<<"6.-Preorden converso"<<endl<<"7.-Posorden converso"<<endl<<"8.-Inorden converso"<<endl;
    cin>>opt;
    switch (opt)
    {
    case 1:
        cout<<"Introduce una clave"<<endl;
        cin>>num;
        A_nuevoNodo(raiz,num);
        break;
    case 2:
        if (raiz!=NULL)
        {
            
        }else{
            cout<<"No hay arbol"<<endl;
        }
        break;
    case 3:
        if (raiz!=NULL)
        {
            Preorden(raiz);cout<<endl;
        }else{
            cout<<"No hay arbol"<<endl;
        }
        break;
    case 4:
    if (raiz!=NULL)
        {
            posorden(raiz);cout<<endl;
        }else{
            cout<<"No hay arbol"<<endl;
        }
        break;
    case 5:
    if (raiz!=NULL)
        {
            inorden(raiz);cout<<endl;
        }else{
            cout<<"No hay arbol"<<endl;
        }
        break;
    case 6:
        if (raiz!=NULL)
        {
            preordenconv(raiz);cout<<endl;
        }else{
            cout<<"No hay arbol"<<endl;
        }
        break;
    case 7:
        if (raiz!=NULL)
        {
            posordenconv(raiz); cout<<endl;
        }else{
            cout<<"No hay arbol"<<endl;
        }
        break;
    case 8:
        if (raiz!=NULL)
        {
            inordenconv(raiz); cout<<endl;
        }else{
            cout<<"No hay arbol"<<endl;
        }
        break;

    default:
    cout<<"Introduce una opcion valida"<<endl;
    system("pause");
    system("cls");
        break;
    }


}

Nodo* C_nuevoNodo(int valor){
    Nodo *a=(Nodo*)malloc(sizeof(Nodo));
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

void Preorden(Nodo *R){
    if(R){
        cout<<R->clave<<" ";
        Preorden(R->izquierda);
        Preorden(R->derecha);
    }
}

void inorden(Nodo *R){
    if (R)
    {
        inorden(R->izquierda);
        cout<<R->clave<<" ";
        inorden(R->derecha); 
    }
    
    
}

void posorden(Nodo *R){
    if (R)
    {
        posorden(R->izquierda);
        posorden(R->derecha);
        cout<<R->clave<<" ";
    }
    
    
}

void preordenconv(Nodo *R){
        cout<<R->clave<<" ";
        preordenconv(R->derecha);
        preordenconv(R->izquierda);
}

void posordenconv(Nodo *R){
         if (R)
    {
        posordenconv(R->derecha);
        posordenconv(R->izquierda);
        cout<<R->clave<<" ";
    }
}

void inordenconv(Nodo *R){
        if (R)
    {
        inordenconv(R->derecha);
        cout<<R->clave<<" ";
        inordenconv(R->izquierda); 
    }
}

void eliminar(Nodo *&raiz){
        
}

void espejo(Nodo *raiz){
        

}