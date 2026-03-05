/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    double x = 10 ;
    double y = 20 ;
    
    double divisao = x/y;
    
    cout<<"Operadores Aritméticos";
    
    cout<<"\nValor de x + y: "<< x + y;
    cout<<"\nValor de x - y: "<< x - y;
    cout<<"\nValor de x . y: "<< x * y;
    cout<<"\nValor de x / y: "<< x / y;
    
    cout<<"\n\nOperadores Lógicos";
    
    bool menor = x<y;
    bool maior = x>y;
    bool igual = x==y;
    bool diferente = x!=y;
    cout<<"\nValor de x<y: "<< menor;
    cout<<"\nValor de x>y: "<< maior;
    cout<<"\nValor de x==y: "<< igual;
    cout<<"\nValor de x!=y: "<< diferente;
    
    
    
    
    
    
    return 0;
}