#include <iostream>
#include <stdlib.h>

using namespace std;
int main(){
    char palavras[30], letras[5], secret[30];
    int tam,i,chances,acertos;
    bool acerto;

    chances=6;
    tam=0;
    i=0;
    acerto = false;
    acertos=0;

    cout << "Digite uma palavra: ";
    cin >> palavras;
    system("cls");


    // ALOCANDO A PALAVRA SECRETA NO INDICIE 0 E REALIZANDO O TAMANHO DA PALAVRA
    while(palavras[i] != '\0'){
        i++;
        tam++;
    }
   // PARA PALAVRA SECRETA É APRESENTADO COM TRACO 
    for(i=0; i<30; i++){
        secret[i] ='-';
    }
    // inicio do loop de jogo. VERIFICA SE O NUMERO DE CHANCES É MAIOR QUE ZERO, E VERIIFICA NUMERO DE ACERTOS É  MENOR QUE O TAMANHO DA PALAVRA SECRETA.
    while((chances > 0) && (acertos < tam)){
        cout << "chances: " << chances << "\n\n";
        cout << "Palavra secreta: " ;
        for (i=0;  i<tam;  i++){
            cout << secret[i];

        }
       // SE A PALAVRA NO INDICIE 0 DA PALAVRA SECRETA FOR IGUAL A LETRA DIGITADA O ACERTO É VERDADEIRO,  E O INDICIE 0 DA PALAVRA SECRETA RECEBE A LETRA CONTANDO COMO ACERTO.
        cout << "\n\nDigite uma letra: ";
        cin >> letras[0];
        for(i=0; i<tam; i++){
            if (palavras[i]==letras[0]){
                acerto=true;
                secret[i]=palavras[i];
                acertos++;
            }
        }
        //SE VOCE NAO ACERTOU A LETRA DEVE DIMINUIR O NUMERO DE CHANCES
        if(!acerto){
            chances --;

        }
       // CASO O ACERTO SEJA FALSO ELE LIMPA O SIISTEMA E EMITE UM AVISO PARA O USUARIO PARA TENTAR NOVAMENTE. CAINDO NA CONDIÇÃO FIINAL.
        acerto=false;
        system("cls");
    }

    if(acertos==tam){
        cout << "Parabens, voce VENCEU a partda ";
    }else{
        cout << "Infelizmente voce PERDEU, tente novamente ";
    }
    system("pause");
    return 0;
}
