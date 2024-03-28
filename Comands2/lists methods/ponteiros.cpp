#include <iostream>
using namespace std;

int main(){

    string veiculo = "Carro";
    //CRIAR PONTEIRO

    string *pv;   //O PONTEIRO ELE ARMAZENA O ENDEREÇO DE MEMORIA DE UMA VARIAVEL veiculo, O OPERADOR ASTERISCO INDICA QUE ELE E UM PONTEIRO!
    //O OPERADOR & SIGNIFICA ENDEREÇO DE MEMORIA.
    pv=&veiculo;
    

    cout << pv << "\n" <<&veiculo ;

    //MANIPULAR O VALOR DA VARIAVEIS VEICULO ATRAVES DO PONTEIRO
    *pv="Aviao";//NO ENDEREÇO APONTADO POR PV COLOQUE O VALOR AVIÃO

    cout << "\n" << veiculo <<"\n" << *pv;

    return 0;
}