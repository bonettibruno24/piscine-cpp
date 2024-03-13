#include <iostream>

using namespace std;

int main(){
    //[3] primeiro indicie que controla as linhas da tebela e [4] as colunas.
  int matriz[3][4];
  int l,c;
    //adicionando os valores de forma AUTOMATICA pelo for.
      for(l=0 ; l<3; l++) {
        for(c=0 ; c<4 ; c++){
           cin >> matriz[l][c];
        }
    }

    //adicionar valores a estrutura de forma MANUAL
    // complete line  
    matriz[0][0]=0;
    matriz[0][1]=0;
    matriz[0][2]=0;
    matriz[0][3]=0;

    matriz[1][0]=1;
    matriz[1][1]=1;
    matriz[1][2]=1;
    matriz[1][3]=1;

    matriz[2][0]=2;
    matriz[2][1]=2;
    matriz[2][2]=2;
    matriz[2][3]=2;

    //inha começando em 0. Enquanto linha for menor que 3
    
    for(l=0 ; l<3; l++) {
        for(c=0 ; c<4 ; c++){
            cout << matriz[l][c] << " ";
        }
        cout << "\n";
    }

    return 0;
}