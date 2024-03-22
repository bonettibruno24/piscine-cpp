#include <iostream>
#include <list>

using namespace std;

int main(){

    list <int> aula;
    int tam;
    list<int>::iterator it; //DECLARAÇÃO DO INTERATOR

    tam=10;
    for(int i=0; i<tam; i++){
        aula.push_front(i); //IMPRIME A LISTA DE TRAS PRA FRENTE
    }

    it=aula.begin();
    advance(it, 5); //POSIÇÃO PARA INICIAR A BUSCA

    aula.insert(it, 0); //VALOR A SER */

    aula.sort(); //ORDEM CRESCENTE
    aula.reverse(); //ORDEM DECRESCENTE

    cout << "Tamanho da lista: " << aula.size() << "\n";

    tam=aula.size();
    for(int i=0; i<tam; i++){
        cout << aula.front() << "\n";
        aula.pop_front(); //RETIRA O PRIMEIRO ELEMENTO
    }

    return 0;
}