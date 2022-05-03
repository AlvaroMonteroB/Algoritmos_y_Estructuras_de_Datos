/*
======================================================================================
======================================================================================
==============================SUBFIJO=================================================
======================================================================================
======================================================================================
A+B*C+D---->((A+(B*C))+D)---->((A+BC*)+D)----->ABC*+D+
(A+B)*(C+D)----->(AB+*CD+)---->AB+CD+*
A*B+C*D------->AB*+CD*---->AB*CD*+
A+B+C+D------->AB++C+D---->AB+C++D--->AB+C+D+
======================================================================================
======================================================================================
==============================PREFIJO=================================================
======================================================================================
======================================================================================
A+B*C+D------->((A+(B*C))+D)-------->((A+*BC)+D)------>(+A*BC+D)----->++A*BCD
(A+B)*(C+D)------->((A+B)*(C+D))----(+AB*+CD)---->*+AB+CD
A*B+C*D--------->*AB+*CD----->+*AB*CD
A+B+C+D--------->(((A+B)+C)+D)----->((+AB+C)+D)------>(++ABC+D)-------->+++ABCD0
*/
/*
PREFIJA
(((5*4)+(7/2))-3)----->((*54+/72)-3)----->+*54/72-3----->+*54-/723
*/
#include <iostream>
#include <stack>
#include "Evaluacion.h"
using namespace std;

int main(){
    int len,count;
    bool eq;
    string posf,pref;
    stack<char> operadores;
    stack<char> output;
    string frase;
    do
    {
        cout<<"Introduce un string"<<endl;
        cin>>frase;
        eq=equilibrio(frase);
        if (eq)
        {
        pref=prefijo(frase);
        cout<<"En prefijo es: "<<pref<<endl;
        posf=posfijo(frase);
        cout<<"En posfijo es: "<<posf<<endl;
        system("pause");
        }else{
            return 0;
            }
    } while (1>0);
    
    
    
    
    
}
