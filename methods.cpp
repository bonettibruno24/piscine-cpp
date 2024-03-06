#include <iostream>
using namespace std;
// int main() {
//     cout << "Hello Mundo!\nHello C++!\n";

//     system("pause");
//     return 0;
// }
// variavéis

int main() {
    // TIPO NOME
    // TIPO NOME = VALOR

    int vidas = 0;  // 10, 20, 30
    char letra='B'; // 'a', 'b'
    char letras [20]; // 'a', 'b', 'c' 
    double decimal=5.2; //2.499999
    float decimal2=5.2; //2.5
    bool vivo=true; // true / false  . 0 e 1 
    string nome="Bruno"; //  "mundo"

    cout << "Digite o numero de vidas: ";
    cin >> vidas;
    cout << "Digite uma letra: ";
    cin >> letra;
    cout << "dinheiro: ";
    cin >> decimal;
    cout << "Digite seu nome: ";
    cin >> nome;

    // vidas=100;
     
    cout <<"\nvidas: " << vidas << "\nletra: "<< letra << "\nDinheiro: " << decimal <<  "\nNome: "<< nome ;

    return 0;
}



