#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
//  PRIMEIRO PARAMETRO ARMAZENA A QUANTIDADE DE ARGUMENTOS (QUANTIDADE DE PARAMETROS), E SEGUNDO ARMAZENA OS ARGUMENTOS.
int main(int argc, char *argv[]) {
    // Verifica se pelo menos um argumento foi passado
    if (argc > 1) {
        if (!strcmp(argv[1], "carro")) {
            cout << "Vai de carro \n\n";
        } else if (!strcmp(argv[1], "moto")) {  // verifica se o primeiro argumento passado para o programa é igual à string "moto". Se for, imprime "Vai de moto"
            cout << "Vai de moto \n\n";
        } else {
            cout << "Vou de ape mesmo \n\n";
        }
    } else {
        cout << "Nenhum argumento passado!\n";
    }
    system("pause");

    return 0;
}
