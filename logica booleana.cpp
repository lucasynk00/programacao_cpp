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
    //Negação
    //bool a = 1;
    //a = !a;
    //cout<<a;
    
    //Conjunção
    cout<< "CONJUNÇÃO (e)";
    bool chuva = false;
    bool nublado = true;
    bool e = chuva && nublado;
    
    
    cout<<"\nChuva. Valor = "<< chuva;
    cout<<"\nNublado. Valor = "<< nublado;
    cout<< "\nHoje está chovendo e hoje está sol. VALOR = "<< e;
    
    cout<< "\n";
    cout<< "\n DISJUNÇÃO (ou)";
    
    bool ou = chuva || nublado;
    
    cout<< "\nChuva. Valor = "<< chuva;
    cout<< "\nNublado. Valor = "<< nublado; 
    cout<< "\nHoje está chovendo e hoje está sol. VALOR = "<< ou;

    return 0;
}