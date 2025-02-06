#include <iostream>
using namespace std;

int main () {
    //logical operators ||, && and !

    char size;
    bool available;

    cout << "What size are you looking for? (S/M/L)" << '\n';
    cin >> size;

    if (size == 'S' || size == 's') {
        available = false;
    }
    else if (size == 'M' || size == 'm') {
        available = true;
    }
    else if (size == 'L' || size == 'l') {
        available = true;
    }
    else {
        cout << "Please enter a correct size";
    }

    available == true ? cout << "Your size is available" : cout << "Your size is not available";


    return 0;
}
