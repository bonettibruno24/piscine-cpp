#include <iostream>
using namespace std;

struct Carro {
    string nome;
    string cor;
    int pot;
    int velMax;
    int vel;

    //PARAMETROS DE ENTRADA
    void insere(string stnome, string stcor, int stpot, int stvelMax){
        nome=stnome;
        cor=stcor;
        pot=stpot;
        velMax=stvelMax;
        vel=0;

    }

    void mostra(){
        cout <<"Nome......." << nome << "\n";
        cout <<"Cor........" << cor << "\n";
        cout <<"Potencia......." << pot << "\n";
        cout <<"Velocidade atual......." << vel << "\n";
        cout <<"Velocidade maxima ........." << velMax << "\n";
    
    }

    void mudarVel(int mv){
        vel=mv;
        if(vel>velMax){
            vel=velMax;
        }
        if(vel<0){
            vel=0;
        }
    }
};

int main(){

    Carro car1,car2,car3,car4; //DECLARAÇÃO DE VARIAVEL CAR1 DO TIPO CARRO

    //TRABAIO COM STRUCTS 
    car1.insere("tornado","Vermelho",450,250);
    car2.insere("Luxo","Preto",250,180);

    car1.mostra();
    car1.mudarVel(122);
    car1.mostra();

  
    cout <<"\nNome......." <<car1.nome << "\n";
    cout <<"Cor........" <<car1.cor << "\n";
    cout <<"Potencia......." <<car1.pot << "\n";
    cout <<"Velocidade maxima ........." << car1.velMax << "\n";

    return 0;
}