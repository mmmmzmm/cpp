#include <iostream>
using namespace std;

int main () {

    //logical operators ||, && and !

    char grade;

    cout << "Type your grade (A-C)" << '\n';
    cin >> grade;


    if (grade == 'A' || grade == 'a') {
        cout << "Well done!";
    }
    else if (grade == 'B' || grade == 'b') {
        cout << "Good job!";
    }
    else if (grade == 'C'|| grade == 'c') {
        cout << "You failed";
    }
    else {
        cout << "Incorrect input";
    }


    return 0;
}
