#include <iostream>
using namespace std;

struct Carro {
    string nome;
    string cor;
    int pot;
    int velMax;
};

int main(){

    Carro car1; //DECLARAÇÃO DE VARIAVEL CAR1 DO TIPO CARRO
    Carro car2;

    car1.nome="tornado";
    car1.cor="Vermelho";
    car1.pot= 450;
    car1.velMax= 350;

    car2.nome="Luxo";
    car2.cor="Preto";
    car2.pot= 450;
    car2.velMax= 350;

    cout <<"Nome......." <<car1.nome << "\n";
    cout <<"Cor........" <<car1.cor << "\n";
    cout <<"Potencia......." <<car1.pot << "\n";
    cout <<"Velocidade maxima ........." << car1.velMax << "\n";

    return 0;
}