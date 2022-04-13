/*
======================================
 ▪* Montero Barraza Alvaro David*
     *2BV1 Ingenieria en IA ▪*  
=======================================
 */
#include<iostream>
#include<string>
#include<stack>
#include<stdlib.h>
#include<equilibrio.h>
using namespace std;

int main(){
    stack<char> signo;
    string cadena;
    bool flag;
    int tam;
    cout<<"Introduce un string para ser analizado";
    cin>>cadena;
    tam=cadena.size();
    for (int i = 0; i < tam; i++)
    {
        if (cadena[i]=='(')
        {
            signo.push(cadena[i]);
        }else if(cadena[i]=='[' ){
                signo.push(cadena[i]);
        }else if(cadena[i]==')'){
            if (signo.top()==cadena[i])
            {
                flag=true;
                signo.pop();
            }else{
                flag=false;
            }
        
        }else if(cadena[i]==']'){
            if(signo.top()==cadena[i]){
                flag=true;
                signo.pop();
            }else{
                flag=false;
            }
        }
        
    }
    if(flag){
        cout<<"Existe equilibrio";
    }else{
        cout<<"No existe equilibrio";
    }
    system("pause");
    



}