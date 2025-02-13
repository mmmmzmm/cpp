#include <iostream>
#include <cctype>
#include <ctime>
using namespace std;

int main (){

    string y;
    srand(time(0));
    int x = (rand() % 3) + 1;

    cout << "Roll the prize? [y/n]" << '\n';
    cin >> y;
    for (char &c : y) {
        c = tolower(c);
    }

    if (y == "y" || y == "yes") {
        switch (x) {
            case 1: cout << "You won a candy!";
            break;
            case 2: cout << "You won a plushie!";
            break;
            case 3: cout << "You won a mouse pad!";
            break;
        }
    }
    else if (y == "n" || y == "no") {
        cout << "You chose not to roll.";
    }
    else {
        cout << "Incorrect input";
    }



    return 0;
}
