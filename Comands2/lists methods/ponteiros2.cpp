#include <iostream>
using namespace std;

int main(){
   // MANIPULANDO ARRAYS COM PONTEIROS
    int *p;
    int vector[10];
    //PRIMEIRO EU PRECISO ASSOSCIAR O PONTEIRO A UM ARRAY
    p=&vector[0];
    //DEPOIS EU POSSO ACESSAR OS ELEMENTOS DO ARRAY ATRAVES DO PONTEIRO

    *p=10; //MESMA COISA QUE vector[0]=10;
    cout << "\n" << vector[0] << "\n";

    *(p+=1);
    *p=20; //MESMA COISA QUE vector[1]=20;
    cout << "\n" << vector[1] << "\n";

    // *(p+=1);
    // cout << "\n" <<p << "\n";



    return 0;
}