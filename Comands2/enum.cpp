#include <iostream>
using namespace std;

enum armas {fuzil=100, revolver=5, sniper=10, escopeta}; // 0 1 2 3 

int main() {
    armas armaSel;
    
    armaSel = revolver;

    cout << armaSel << "\n";

    return 0;
}