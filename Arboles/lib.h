#include"iostream"
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
void C_nuevoNodo(Nodo **Hoja,int numero){
    if (Hoja==NULL)
    {
        *Hoja=new Nodo();
    }
    

}

void menu(){
    int opt;
    cout<<"1.-Crear Nodo"<<endl<<"2.-Eliminar nodos"<<endl;
    cin<<opt;
    

}