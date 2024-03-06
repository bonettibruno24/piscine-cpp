#include <iostream>
using namespace std;

#define pi 3.1415
#define canal cout << "Canal Fessor Bruno\n"
int n1,n2;  //variaveis globais


// int main(){

//     int vidas=9, tiros=500, live=100;
//     cout << pi << "\n\n";
//     canal;

//     return 0;

// }

int main(){

    int n3, n4;  // variaveis locais
    int res1, res2 ;

    n1=11;
    n2=3;
    n3=5;
    n4=2;

    res1= n1/n2;
    res2= n1%n2;

    cout << " A soma de todas a variaveis: " << res1 << "\n\n";
    cout << " Resto: " << res2 << "\n\n";

    return 0;
}

