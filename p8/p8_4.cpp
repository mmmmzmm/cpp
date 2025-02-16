#include <iostream>
using namespace std;

int main (){
//rock, paper, scissors

    string choice;
    char x;
    srand(time(NULL));

    do {
        cout << "Rock, paper or scissors?" << '\n';
        cin >> choice;
        for (char&c : choice) {
            c = tolower(c);
        }

        int pcChoice = rand() % 3 + 1;

        switch (pcChoice) {
            case 1: cout << "The computer chose rock!" << '\n';
            break;
            case 2: cout << "The computer chose paper!" << '\n';
            break;
            case 3: cout << "The computer chose scissors!" << '\n';
            break;
        }

        if (choice == "rock" && pcChoice == 1) {
            cout << "It's a tie!";
        }
        else if (choice == "rock" && pcChoice == 2) {
            cout << "You lose!";
        }
        else if (choice == "rock" && pcChoice == 3) {
            cout << "You win!";
        }

        if (choice == "paper" && pcChoice == 1) {
            cout << "You win!";
        }
        else if (choice == "paper" && pcChoice == 2) {
            cout << "It's a tie!";
        }
        else if (choice == "paper" && pcChoice == 3) {
            cout << "You lose!";
        }

        if (choice == "scissors" && pcChoice == 1) {
            cout << "You lose!";
        }
        else if (choice == "scissors" && pcChoice == 2) {
            cout << "You win!";
        }
        else if (choice == "scissors" && pcChoice == 3) {
            cout << "It's a tie!";
        }

        cout << '\n' << "Play again? [y/n]" << '\n';
        cin >> x;
    }while (x == 'y');

    if (x == 'n') {
        cout << "Thanks for playing.";
    }

    return 0;
}
