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
    int nota, falta;
    cout<<"Digite sua nota: ";
    cin>> nota;
    cout<<"Digite sua quantidade de falta: ";
    cin>> falta;
    
    if (nota>=60){
        if (falta<=20){
            cout<<"Você foi aprovado";
        }else{
            cout<<"Você foi reprovado";
        }
    }else{
        cout<<"Foi reprovado por nota";
    }

    return 0;
}