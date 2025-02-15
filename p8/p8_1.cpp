#include <iostream>
using namespace std;

int main (){
//number guessing game

    int num;
    int guess;
    int tries = 0;


    srand(time(NULL));
    num = rand() % 10 + 1;

    cout << "Guess a random number between 1-10: ";
    cin >> guess;


    do {
        if (guess > num) {
            cout << "Too high. Try again: ";
            tries = tries + 1;
            cin >> guess;
        }
        else if (guess < num) {
            cout << "Too low. Try again: ";
            tries = tries + 1;
            cin >> guess;
        }
    }while (guess != num);

    if (guess == num){
        cout << "You guessed it! It took you " << tries << " tries!" << '\n';
    }



    return 0;
}
