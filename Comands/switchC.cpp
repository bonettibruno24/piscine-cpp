#include <iostream>
using namespace std;

int main()
{
    int val;

    cout << "Selecione uma cor: \n";
    cout << "[1]=Azul, [2]=Rosa, [3]=Vermelho\n";

    cin >> val;

     switch(val){
        case 1:
            cout <<"Cor selecionada: Azul\n";
            break;
        case 2:
             cout <<"Cor selecionada: Rosa\n";
            break;
        case 3:
             cout <<"Cor selecionada: Vermelho\n";
            break;
         default:
         cout << "Valor selecionado invalido\n";
     }

    cout << "[1,2,3]=Azul, [4,5,6]=Rosa\n";
    cin >> val;
    
    switch (val)
    {
    case 1:
    case 2:
    case 3:
        cout << "Cor selecionada: Azul\n";
        break;
    case 4:
    case 5:
    case 6:
        cout << "Cor selecionada: Rosa\n";
        break;
    default:
        cout << "Valor selecionado invalido\n";
    }

    //SWITCH ANINHADOS

    cout << "Seleciione um veiculo\n";
    cout << "[1]=Carro, [2]=Moto, [3]=Aviao, [4]=Helcoptero\n";

    cin >> val;

    switch (val)
    {
    case 1:
    case 2:
        cout << "Transporte Terrestre\n";
        switch (val)
        {
        case 1:
            cout << "Carro selecionado\n";
            break;
        case 2:
            cout << "Moto selecionada\n";
            break;
        }
        break;
    case 3:
    case 4:
        cout << "Transporte Aereo\n";
        switch (val)
        {
        case 3:
            cout << "Aviao selecionado\n";
            break;
        case 4:
            cout << "Helicoptero selecionado\n";
            break;
        }
        break;
    default:
        cout << "Veiculo selecionado invalido\n";
    }
    return 0;
}