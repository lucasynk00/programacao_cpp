/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    double r, h;
    
    cout<<"Insira o raio: ";
    cin>>r;
    
    cout<<"Insira a altura: ";
    cin>>h;
    
    double areadocilindro=2*3.14*r*r+2*3.14*r*h;
    cout<<"\nárea do cilindro: "<<areadocilindro;
    
    //QUANTOS LITROS É NECESSÁRIO
    double litros;
    litros=areadocilindro/3;
    cout<<"\nLitros Necessárias: "<<litros;
    
    double quantaslatas=litros/5;
    quantaslatas=ceil(quantaslatas);
    cout<<"\nLatas Necessárias: "<<quantaslatas;
    
    cout<<"\nCADA LATA CUSTA 50tao";
    double valor=quantaslatas*50;
    cout<<"\nvalor: R$"<<valor;
    
    
    
    

    return 0;
}