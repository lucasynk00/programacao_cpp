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
    int cod;
    cout<<"Digite o código do produto: ";
    cin>> cod;
    
    switch(cod){
        case 1:
        cout << "SUL";
        break;
        case 2:
        cout << "NORTE";
        break;
        case 3:
        cout << "LESTE";
        break;
        case 4:
        cout << "OESTE";
        break;
        
        default:
            cout << "IMPORTADO";
        
        
    }
    

    return 0;
}