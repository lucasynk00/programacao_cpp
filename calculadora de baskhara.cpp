/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath> //Biblioteca de Comandos Matemáticos
using namespace std;
int main()
{
    cout<<"Calculadora de Baskhara";
    cout<<"-----------------------";
    
    float a;
    float b;
    float c;
    float delta;
    double raiz_delta;
    double solucao1;
    double solucao2;
    
    cout<< "\nDigite o valor de a:";
    cin>> a;
    cout<< "\nDigite o valor de b:";
    cin>> b;
    cout<< "\nDigite o valor de c:";
    cin>> c;
    
    //Cálculo do Delta
    delta = b*b-4*a*c;
    
    cout<< "\nDelta = "<< delta;
    
    raiz_delta = sqrt(delta);
    
    cout<< "\nRaiz Delta = "<< raiz_delta;
    
    solucao1 = (-b+raiz_delta)/(2*a);
    solucao2 = (-b-raiz_delta)/(2*a);
    
    cout<< "\n X1 = " << solucao1;
    cout<< "\n X2 = " << solucao2;
    
    
    return 0;
}