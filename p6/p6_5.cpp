#include <iostream>
using namespace std;

int main (){
//nested loops

    double x;
    int y;

    for (y = 1; y <= 3; y = y + 1) {
        for(x = 0; x <= 7; x = x + 0.5){
            cout << x << " ";
        }
        cout << '\n';
    }


    return 0;
}
