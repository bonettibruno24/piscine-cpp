#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack <string> cartas; //ELEMENTO STACK DO TIPO STRING COM O NOME 


    //METODO PUSH

    cartas.push("Rei de copas"); //O PRIMEIRO VALOR DO STACK SERá O ULTIMO ADICIONADO QUE É O REIS DE PAUS, PORQUE ELE É O ULTIMO QUE FOI ADC
    cartas.push("Rei de espadas");
    cartas.push("Rei de ouros");
    cartas.push("Rei de paus");
    
    if(cartas.empty()){
        cout << "Pilha vazia \n\n";
    }else{
        cout << "Pilha com cartas \n\n";
    }

    while(!cartas.empty()){
        cartas.pop();
    }

    cout << "Tamanho da pilha: " << cartas.size() << "\n";

    cout << "Carta do topo: " << cartas.top() << "\n";

   // POP REMOVE O ULTIMO ELEMENTO DA PILHA.
    cartas.pop();
    cartas.pop();

    cout << "Nova carta do topo: " << cartas.top() << "\n";

   //cartas.pop(); //METODO POP, RETIRA O ULTIMO VALOR ADICIONADO AO STACK. OU SEJA, RETIRA O REIS DE PAUS.

  /*METODOS QUE PODE SER UTILIZADO PARA PILHAS: 
   PUSH()
   POP()
   TOP()
   SIZE()  TAMANHO 0 OU 1
   EMPTY()  SE ESTÁ CHEIA OU VAZIA
   */



    return 0;
}