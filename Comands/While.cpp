#include <iostream>
using namespace std;
int main()
{

    // FORMA DE UTILIZAR O WHILE

    int n;
    n=0;
    while(n<10){
        cout << n << "\n";
        n++;
    }
    cout << "\n Rotina Finalizada\n";

      int cont;
      cont=0;

        while(cont++<20){
            cout << "Testando sequencia - " << cont << "\n" ;
            if(cont == 10){
                break;
            }
        }

        cout << "\n Rotina Finalizada\n";


//UTILIZAÇÃO COMANDO DE LOOP DO WHILE;

    int cont;
    
    cont = 20;

    do{
        cout << "Testando sequencia - " << cont << "\n";
        cont++;
    } while (cont < 25);
    cout << "\n Rotina Finalizada\n";
    return 0;
}