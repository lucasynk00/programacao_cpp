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
    cout<<"Calculadora de Perímetro de Triângulo"; //Saída de dados
    
    //Tipo inteiro
    
    int a;
    int b;
    int c;
    
    cout<< "\nInsira o valor do Lado a:";
    cin>> a;
    cout<< "\nInsira o valor do Lado b:";
    cin>> b;
    cout<< "\nInsira o valor do Lado c:";
     cin>> c;
    
    int soma = a+b+c;
    cout << "\nSoma = "<< soma;

    return 0;
}