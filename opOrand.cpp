#include <iostream>

using namespace std;

int main(){
    int num;

    num=1;

    if(num > 4 && num <7){
        cout << "Valor aceito\n";
    }else{
        cout << "Valor rejeitado\n";
    }

     if(num > 4 || num <7){
        cout << "Valor aceito\n";
    }else{
        cout << "Valor rejeitado\n";
    }

    // 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
    // 3 a 6
    // 10 a 14
    // 16 a 19

    if(num > 2 && num < 7 || num > 9 && num < 15 || num > 17 && num < 20){
        cout << "Valor aceito\n";
    }else{
        cout << "Valor rejeitado\n";
    }

    if ((num > 2 && num <7)  || (num > 9 && num < 15) || (num > 17 && num < 20)){
       cout << "Valor aceito\n";
    }else{
        cout << "Valor rejeitado\n";
    }

    // NEGAÇÃO
    if (!num)
    {
       cout << "Eu vou para praia\n";
    }else{
        cout << "Eu vou ao clube\n";
    }

    //if (num == 1)  // if(num)
    


    return 0;
}