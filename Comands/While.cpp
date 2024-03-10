#include <iostream>
using namespace std;
int main(){

    int cont;
    cont=0;
    while(cont++<20){
        cout << "Testando sequencia - " << cont << "\n" ;
        if(cont == 10){
            break;
        }
    }
    cout << "\n Rotina Finalizada\n";


    return 0;
}