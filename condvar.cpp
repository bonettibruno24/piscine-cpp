#include <iostream>
#include <cstdlib>


using namespace std;
 int main(){
   int nota1, nota2;
   int res;
   char opc;

     while (true) {
         
        system("cls");
    
        cout << "Digite qual foi a Nota1: ";
        cin >> nota1;
        cout << "Digite qual foi a Nota2: ";
        cin >> nota2;

        res = nota1 + nota2;

        if (res >= 60) {
            cout << "\nVocê foi APROVADO";
        } else if (res >= 40) {
            cout << "\nVocê ficou de RECUPERACAO";
        } else {
            cout << "\nVocê foi REPROVADO";
        }

        cout << "\nDeseja Continuar? (s/n): ";
        cin >> opc;

        if (opc != 's' && opc != 'S') {
            break;
        }
    }
    return 0;
 }