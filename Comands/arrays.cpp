#include <iostream>
using namespace std;
int main(){

int vetor[5];
int i;

vetor[0]=10;
vetor[1]=20;
vetor[2]=30;
vetor[3]=40;
vetor[4]=50;

for(i=0;  i<5 ; i++){

cout <<  vetor[i] << "\n";
}


int size =5 ;
int vetor[size];
int i;

vetor[0]=10;
vetor[1]=20;
vetor[2]=30;
vetor[3]=40;
vetor[4]=50;

for(i=0;  i<size ; i++){

cout <<  vetor[i] << "\n";
}


// DIVINDO PELO TAMANHO DO ESPAÇO ALOCADO NA MEMÓRIA UTILIZANDO TYPEOF
int vetor[5];
int i;

vetor[0]=10;
vetor[1]=20;
vetor[2]=30;
vetor[3]=40;
vetor[4]=50;

for(i=0;  i<sizeof(vetor)/4 ; i++){

cout <<  vetor[i] << "\n";
}


return 0;
}