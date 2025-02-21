#include <iostream>
using namespace std;

void win (double amount);

int main (){
//random lucky gamble game

    cout << "<<LET'S GO GAMBLING!>>" << '\n';

    double amount;
    string spot;
    srand(time(NULL));
    string answer;
    int aiChoice = rand() % 9 + 1;

    cout << "What's your bid? (X10 for a win)" << '\n';
    cin >> amount;

    cout << "Choose a spot (A-C & 1-3)" << '\n';
    cin >> spot;
    for (char&c : spot) {
        c = tolower(c);
    }
    cout << "The lucky spot is ";

    switch (aiChoice) {
        case 1: cout << "A1" << '\n';
        break;
        case 2: cout << "A2" << '\n';
        break;
        case 3: cout << "A3" << '\n';
        break;
        case 4: cout << "B1" << '\n';
        break;
        case 5: cout << "B2" << '\n';
        break;
        case 6: cout << "B3" << '\n';
        break;
        case 7: cout << "C1" << '\n';
        break;
        case 8: cout << "C2" << '\n';
        break;
        case 9: cout << "C3" << '\n';
    }

    if (spot == "a1" && aiChoice == 1) {
        win(amount);
    }
    else if (spot == "a2" && aiChoice == 2) {
        win(amount);
    }
    else if (spot == "a3" && aiChoice == 3) {
        win(amount);
    }
    else if (spot == "b1" && aiChoice == 4) {
        win(amount);
    }
    else if (spot == "b2" && aiChoice == 5) {
        win(amount);
    }
    else if (spot == "b3" && aiChoice == 6) {
        win(amount);
    }
    else if (spot == "c1" && aiChoice == 7) {
        win(amount);
    }
    else if (spot == "c2" && aiChoice == 8) {
        win(amount);
    }
    else if (spot == "c3" && aiChoice == 9) {
        win(amount);
    }
    else {
        cout << "You lost" << '\n';
    }


    return 0;
}

void win(double amount) {
    cout << "Congratulations! You won " << amount * 10 << "$! " << '\n';
}
