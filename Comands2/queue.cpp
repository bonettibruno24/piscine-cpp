#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue <string> cartas;

    cartas.push("Rei de copas");
    cartas.push("Rei de espadas");
    cartas.push("Rei de ouros");
    cartas.push("Rei de paus");
    

    cout << "tamanho da fila: " << cartas.size() <<"\n\n";
    cout << "Primeira carta: " << cartas.front() << "\n\n";
    cout << "Ultima carta: " << cartas.back() << "\n\n";



    while(!cartas.empty()){
        cout << "Primeira carta: " << cartas.front() << "\n\n";
        cartas.pop();
    }


/*METODOS
EMPT
SIZE
FRONT 
BACK 
PUSH
*/

return 0;
}