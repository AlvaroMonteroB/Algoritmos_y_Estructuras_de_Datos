#include<iostream>
#include<stack>
using namespace std;
string posfijo(string frase);
string prefijo(string frase);

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
    while (count>=0)
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
        count--;
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