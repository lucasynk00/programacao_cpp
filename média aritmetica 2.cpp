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
    cout<<"Calculadora de Aprovação";
    cout<<"\n ----------------------";
    
    int b1, b2, b3, ma;
    
    cout<<"\n Digite a nota do B1: ";
    cin>> b1;
    
    cout<<"\n Digite a nota do B2: ";
    cin>> b2;

    cout<<"\n Digite a nota do B3: ";
    cin>> b3;
    
    ma = (b1+b2+b3)/3;
    
    cout<<"\n A média é: "<< ma;
    if(b1 >= 0 && b1<=100 && b2 >= 0 && b2<=100 && b3 >= 0 && b3<=100){
    if (ma >= 70){
        cout<<"\n O aluno foi aprovado";
    }else{
        cout<<"\n O aluno foi reprovado";
    }
}else{
    cout<<"Verifique os valores";
}
cout<<"\nOBRIGADO POR USAR O NOSSO SISTEMA!";
    return 0;
}