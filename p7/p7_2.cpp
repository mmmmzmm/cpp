#include <iostream>
#include <cctype>
using namespace std;

int main () {
//simple dice game

    string x;
    string y;

    srand(time(NULL));

    cout << "Would you like to roll the dice? [y/n]" << '\n';
    cin >> x;
    for (char &c : x) {
        c = tolower(c);
    }

    while (true) {
        if (x == "y" || x == "yes") {
            int num = (rand() % 6) + 1;
            cout << "You rolled " << num << "!" << '\n';
            cout << "Play agaih? [y/n]" << '\n';
            cin >> x;
            for (char &c : x) {
                c = tolower(c);
            }
        }
        if (x == "n" || x == "no") {
            cout << "Thanks for playing!";
            break;
        }
    }
    return 0;
}
