/*
        Montero Barraza Álvaro David
        2BV1
        Ingeniería en Inteligencia Artificial
*/

#include<iostream>
#include<queue>
#include<stack>
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
void imp_niv(Nodo *raiz,int nivel);

//==========================================================================
//=============================Funciones====================================
//==========================================================================

void menu(Nodo *&raiz){
    int lvl=1;
    //int *array;
    int array[12]={49,37,89,53,41,13,7,19,71,82,60,25};
    for (int i = 0; i < 12; i++)
    {
        A_nuevoNodo(raiz,array[i]);
    }
        imp_niv(raiz,lvl);
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

void imp_niv(Nodo *raiz,int nivel){
    Nodo *auxnod;
    stack<Nodo*> aux;
    stack<Nodo*>Nivel_act;
    stack<Nodo*>nivel_sig;
    if(!raiz){
        return;
    }
    
    Nivel_act.push(raiz);
    while (!Nivel_act.empty())
    {
        auxnod=Nivel_act.top();
        Nivel_act.pop();
        if (auxnod)
        {
         cout<<auxnod->clave<<" ";
         if(nivel%2==0){
           nivel_sig.push(auxnod->izquierda);
           nivel_sig.push(auxnod->derecha);
            while (!nivel_sig.empty())
                {
                        aux.push(nivel_sig.top());
                        nivel_sig.pop();
                
         }while(!aux.empty()){
                        nivel_sig.push(aux.top());
                         aux.pop();
                }
                
        }else{
            nivel_sig.push(auxnod->derecha);
            nivel_sig.push(auxnod->izquierda);
        }
    if (Nivel_act.empty()){
            
    nivel++;
    aux=Nivel_act;
    Nivel_act=nivel_sig;
     nivel_sig=aux;}
        

        
        
        }
    

    
    }
}