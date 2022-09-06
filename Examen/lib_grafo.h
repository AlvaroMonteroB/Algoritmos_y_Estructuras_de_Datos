#include<iostream>
#include<string.h>
using namespace std;
//===========================================================================
typedef struct Grafo{
    int V;
    int E;
    int **Adj;
}Grafo;
//===========================================================================
void menu(Grafo *&vertice);

//==========================================================================
//=============================Funciones====================================
//==========================================================================

void menu(Grafo *&vertice){
    int  maxren=0,ren=0,aristas,nodos,pos,ren;
    string nomnod,vinculos;
    FILE *archivo;
    char linea[15];
    archivo = fopen("grafo1_def.txt", "r");
    while(fgets(linea, 15, archivo) != NULL){
        maxren++;
    }
    string vinculos;
    rewind(archivo);
    while(fgets(linea, 100, archivo) != NULL){
        if(ren == 1){
            nomnod = linea;
            ren++;
        }
        else if(ren == 2){
            aristas = atoi(linea);
            ren++;
        }
        else{
            vinculos[pos] = *linea;
            pos++;
        }
    }
    fclose(archivo);
    
}