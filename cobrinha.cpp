/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <random>
using namespace std;
int main()
{
    double tabuleiro[10][10] = {0};
    int cobra[1][2] = {{5,6}};
    int maca[1][2];
    
    maca[0][0] = (rand()%9)+1;
    maca[0][1] = (rand()%9)+1;
    int x;
   
   for (int i = 0; i <10; i++){
       cout<< tabuleiro[i][0]<< tabuleiro[i][1]<< tabuleiro[i][2]<< tabuleiro[i][3]<< tabuleiro[i][4]<< tabuleiro[i][5]<< tabuleiro[i][6]<< tabuleiro[i][7]<< tabuleiro[i][8]<< tabuleiro[i][9]<<endl;
   }
   
   cout<< "----------------------------"<< endl;
   tabuleiro[cobra[0][0]][cobra[0][1]] = 8;
   tabuleiro[maca[0][0]][maca[0][1]] = 6;

   for (int i = 0; i <10; i++){
       cout<< tabuleiro[i][0]<< tabuleiro[i][1]<< tabuleiro[i][2]<< tabuleiro[i][3]<< tabuleiro[i][4]<< tabuleiro[i][5]<< tabuleiro[i][6]<< tabuleiro[i][7]<< tabuleiro[i][8]<< tabuleiro[i][9]<<endl;
   }
    
    while (true){
    
        cout<< "Movimento: ";
        cin >> x;
        
        if (x == 8){
            cobra[0][0] = cobra[0][0] -1;
        }
        
        if (x == 2){
            cobra[0][0] = cobra[0][0] +1;
        }
        
        if (x == 4){
            cobra[0][1] = cobra[0][1] -1;
        }
        
        if (x == 6){
            cobra[0][1] = cobra[0][1] +1;
        }
        
        cout<< "----------------------------"<< endl;
        
        for (int i = 0; i <10; i++){ //Reset do Tabuleiro
            for(int j = 0; j< 10; j++){
                tabuleiro[i][j] = 0;
            }
        }
        
       tabuleiro[cobra[0][0]][cobra[0][1]] = 8; //Nova posição da cabra
       tabuleiro[maca[0][0]][maca[0][1]] = 6;
    
       for (int i = 0; i <10; i++){ //Print do Tabuleiro
           cout<< tabuleiro[i][0]<< tabuleiro[i][1]<< tabuleiro[i][2]<< tabuleiro[i][3]<< tabuleiro[i][4]<< tabuleiro[i][5]<< tabuleiro[i][6]<< tabuleiro[i][7]<< tabuleiro[i][8]<< tabuleiro[i][9]<<endl;
       }
    }
   
    
    return 0;
    
}

