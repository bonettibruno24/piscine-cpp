#include <iostream>

using namespace std;
int main(){

    int n1,n2, nota;
    string res;

    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;

    nota=n1+n2;

    (nota >= 60) ? res="Aprovado" : res="Reprovado";
    res=(nota >= 60) ? "Aprovado" : "Reprovado";
    cout <<"\nSituacao do aluno: "<< res << "\n\n";

    int n5,x;

    x=5;
    cout << "Digite o valor de X: ";
    cin >> n5;

    (n5 >= 15) ? x++ : x--;
    cout << "O valor de X:" << x << "\n";



    return 0;
}
