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

    while(palavras[i] != '\0'){
        i++;
        tam++;
    }
    for(i=0; i<30; i++){
        secret[i] ='-';
    }
    while((chances > 0) && (acertos < tam)){
        cout << "chances: " << chances << "\n\n";
        cout << "Palavra secreta: " ;
        for (i=0;  i<tam;  i++){
            cout << secret[i];

        }
        cout << "\n\nDigite uma letra: ";
        cin >> letras[0];
        for(i=0; i<tam; i++){
            if (palavras[i]==letras[0]){
                acerto=true;
                secret[i]=palavras[i];
                acertos++;
            }
        }
        if(!acerto){
            chances --;

        }
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
