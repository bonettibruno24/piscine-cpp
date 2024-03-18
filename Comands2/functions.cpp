#include <iostream>
using namespace std;

// Protótipo da função soma()
void text();
void soma(int n1, int n2);
int soma2(int n1, int n2);
void tr(string tra[4]);

int main() {
    // Chamando a função soma() E CHAMANDO ELA 10 Vezes
    // for(int i=0; i<10; i++){
    //     soma();
    // }

    int res;
    string transp [4]= {"Carro","Moto","Barco","Aviao"};

    soma(15,5);
    res=soma2(170,30);

    cout << "Valor da res: " << res << "\n";
    // CHAMANDO A FUNÇÃO TR E PASSANDO PARA ELA O VECTOR TRANSP
    tr(transp);

    return 0;
}
// Definição da função soma()
void text() {
    cout << "\nDias Uteis para formacao\n";
}
void soma(int n1, int n2){
    cout << "Soma: " << n1+n2 << "\n";
}

int soma2(int n1, int n2){
    return n1+n2;
}
void tr(string tra[4]){
    for (int i=0; i<4 ; i++)
    {
        cout << tra[i] << "\n";
    }
    
}