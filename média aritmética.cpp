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
   double n1, n2, n3, ma;
   
   cout<<"Insira a nota do 1° trimestre: ";
   cin>>n1;
   
   cout<<"Insira a nota do 2° trimestre: ";
   cin>>n2;
   
   cout<<"Insira a nota do 3° trimestre: ";
   cin>>n3;
   
   ma = (n1+n2+n3)/3;
   cout<<"Média: " << ma;
   
   
   
   
    return 0;
}