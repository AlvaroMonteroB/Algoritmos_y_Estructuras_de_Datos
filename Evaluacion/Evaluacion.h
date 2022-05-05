#include<iostream>
#include<stack>
#include<queue>
#include<typeinfo>
using namespace std;
string postfijo(string frase);//posfija
string prefijo(string frase);//inifja
bool equilibrio(string cadena);
int prioridad(char car);
//==================================================================
//======================FUNCIONES PRINCIPALES=======================
//==================================================================
//infija a postfija
string postfijo(string frase){//TODO: usar cola para la salida  
    int len;
    char comp;
    string salida;
    stack<char> operadores;
    queue<char> output;
    len=frase.size();
    for (int i = 0; i < len; i++)
    {
        
        switch (frase[i])
        {
        case '(':
            operadores.push('(');
            break;
        case ')':
                while (operadores.top()!='(')
                {
                    comp=operadores.top();
                    operadores.pop();
                    output.push(comp);
                }
                operadores.pop();
            break;
        case '^':
        case '*':
        case '/':
        case '+':
        case '-':
            while (prioridad(frase[i])<=prioridad(operadores.top()))
            {
                comp=operadores.top();
                operadores.pop();
                output.push(comp);
            }
            operadores.push(frase[i]);
        
        default:
        //es un numero
        output.push(frase[i]);
            break;
        }
    }
    while (!operadores.empty())
    {
        output.push(operadores.top());
        operadores.pop();
    }
    
    for (int i = 0; i < output.size(); i++)
    {
        salida[i]=output.front();
        output.pop();
    }
    
    return salida;
}




string prefijo(string frase){//FIXME: 
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



//==================================================================
//======================FUNCIONES AUXILIARES========================
//==================================================================
string evaluacion(string frase){//TODO:
    int tam=frase.size();
}


bool equilibrio(string cadena){
    stack<char>signo;
    int tam;
    bool flag,sflag=true,eq;
    tam=cadena.size();
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


int prioridad(char car){
    switch (car)
    {
    case '^':
        return 3;
        break;

    case '/':
        return 2;
        break;
    
    case '*':
        return 2;
        break;
    
    case '+':
    case '-':
        return 1;
        break;
    default:
        return 0;
        break;
    }
}