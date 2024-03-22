#include  <iostream>
using namespace std;
void contador(int num, int cont=0);

int main(){
    contador(1
5);
    return 0;
}
//RECURSIVIDADE
void contador(int num, int cont){ 
    cout << cont << "\n";  //inicia o cont em 0 e logo ems seguida inicia o contador incrementando 1 1.
    if(num > cont){
        contador(num, ++cont); //CHAMA O NUM VALENDO 15 PASSANDO E O CONT INCREMENTADO
    }
}
