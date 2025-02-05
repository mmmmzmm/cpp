#include <iostream>
using namespace std;


int main() {

    int x;

    cout << "Choose a number (0-9) to determine if its odd or even" << '\n';
    cin >> x;

    switch (x) {
        case 1:
            case 3:
        case 5:
        case 7:
        case 9:
        cout << "The number is odd";
        break;
        case 2:
            case 4:
        case 6:
        case 8:
        case 0:
        cout << "The number is even";
        break;
        default:
            cout << "Incorrect input";
    }

    return 0;
}
