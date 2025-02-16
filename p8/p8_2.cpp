#include <iostream>
using namespace std;

    void iLoveYou() {
        cout << "I love you, my husband" << '\n';
        cout << "So so so so so much" << '\n';
        cout << "I can't wait to marry you <3" << '\n';
    }

int main (){
//functions

    int x;

    cout << "You have a new letter! Type 1 to open" << '\n';
    cin >> x;

    if (x == 1) {
        iLoveYou();
    }
    else {
        cout << "Incorrect input";
    }

    return 0;
}
