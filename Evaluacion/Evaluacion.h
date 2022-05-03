#include<iostream>
#include<stack>
#include<typeinfo>
using namespace std;
string posfijo(string frase);
string prefijo(string frase);
bool equilibrio(string cadena);

string posfijo(string frase){//usar cola para la salida
    int len;
    char comp;
    string salida;
    stack<char> operadores;
    stack<char> output;
    len=frase.size();
    for (int i = 0; i < len; i++)
    {
        comp=salida[i];
    }
    return salida;
}
string prefijo(string frase){
    int count,len;
    len=frase.size();
    count=len;
    string salida;
    char aux,comparacion;
    stack<char> operadores;
    stack<char> output;
    for (int i = len; i >= 0; i--)
    {
        comparacion=frase[count];
        switch (comparacion)
        {
        case ')':
            operadores.push(')');
            break;
        case '+':
            operadores.push('+');
            break;
        case '-':
            operadores.push('-');
            break;   
        // Pila de salida
        case '(':
            while (operadores.top()!=')')
            {
                output.push(operadores.top());
                operadores.pop();
            }
            
            output.push(operadores.top());
            break;
        
        default:
            output.push(comparacion);
            break;
        }
    }
    
    
    int cc=0;
    
    while (output.empty()!=false)
    {
        salida[cc]=output.top();
        output.pop();
        cc++;
    }
    
    return salida;
}


string evaluacion(string frase){
    int tam=frase.size();
}


bool equilibrio(string cadena){
    stack<char>signo;
    int tam;
    bool flag,sflag=true,eq;
    tam=cadena.size();
    cout<<tam<<endl;
    for (int i = 0; i < tam; i++)
    {
        switch (cadena[i])
        {
        case '(':
            signo.push('(');
            break;
        case '[':
            signo.push('[');
            break;
        case ')':
            if (signo.empty())
            {
                sflag=false;
            }
            
            if (signo.top()=='(')
            {
                signo.pop();
                flag=true;
            }else{
                flag=false;
            }
            
            break;
        case ']':
         if (signo.empty())
            {
                sflag=false;
            }
            if(signo.top()=='['){
                signo.pop();
                flag=true;
            }else{
                flag=false;
            }
            break;
        
        default:
            break;
        }
        
    }
    if(signo.size()>0){
        flag=false;
    }
    if(sflag&&flag){
        cout<<"Existe equilibrio"<<endl;
        eq=true;
    }else{
        cout<<"No existe equilibrio"<<endl;
        eq=false;
    }
    return eq;
    



}
