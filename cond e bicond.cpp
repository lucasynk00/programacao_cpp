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
   bool p = 1;
   bool q = 1;
   
   bool cond = !p || q;
   
   cout<<"\nValor de se p então q: "<< cond;
   cout<<"\n-------------------- ";
   
   
  
  cout<<"Bicondicional";
  bool bicond = !(p||q) || (p&&q);
  cout<<"\nValor de p se, e somente se q: "<< bicond;
  cout<<"\n--------------------";
  
 
  
  

    return 0;
}