#include <iostream>
using namespace std;

int main (){

    //logical operators ||, && and !

    double temp;

    cout << "Enter the temperature" << '\n';
    cin >> temp;


    if(temp < 0) {
        cout << "It's freezing!";
    }
    else if (temp > 0 && temp < 10) {
        cout << "It's cold";
    }
    else if (temp > 10 && temp < 20) {
        cout << "It's warm";
    }
    else if (temp > 20 && temp < 30) {
        cout << "It's hot";
    }
    else if (temp > 30) {
        cout << "It's boiling hot!";
    }
    else {
        cout << "Invalid input";
    }

    return 0;
}

