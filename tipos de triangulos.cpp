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
    double a, b, c;
    
    cout<<"Triangulos";

    cout<<"\nDigite o valor dos lados do triangulo: ";
    
    cout<<"Digite o valor de A:";
    cin>> a;
    cout<<"Digite o valor de B:";
    cin>> b;
    cout<<"Digite o valor de C:";
    cin>> c;
    
    if(a+b>c && b+c>a && a+c>b){
        if(a==b && b==c){
            cout<<"O triangulo é equilatero";
    }
    else{if(a==b || b==c || c==a){
    cout<<"O triangulo é isosceles";
    }else{
        cout<<"O triangulo é escaleno";
    }}}
    
    return 0;
}