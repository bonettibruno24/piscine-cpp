#include <iostream>
using namespace std;
int main()
{
    int x,y,z;
            
    for(x=0, y=1, z=0 ; x<=10 && z <= 6 ; x++, y+=2, z+=2) {
        cout << x << " - "; 
        cout << y << "-";
        cout << z << "\n"; ;
    }

    for(int tmp=0 ; tmp < 999*99 ; tmp++);

    for(x=0 ; x<=10 ; x++) {
        cout << x << " - "; 
    }

    return 0;
}