#include <iostream>
using namespace std;

int main (){
//break and continue

    int x;
    int y;

    for(x = 1; x <= 10; x = x + 1){
        if (x == 3 || x == 6) {
            continue;
        }
        cout << x << '\n';
    }

    for(y = 1; y <= 10; y = y + 1){
        if (y == 7) {
            break;
        }
        cout << y << '\n';
    }


    return 0;
}
