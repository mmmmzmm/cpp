#include <iostream>
using namespace std;

int main (){
//while loops

    string name;

    cout << "Enter your name" << '\n';
    getline (cin, name);

    while (name.length() > 15) {
        cout << "Your name can't be longer than 15 characters." << '\n';
        cout << "Please enter a different name: ";
        cin >> name;

    }

    cout << "Welcome " << name;


    return 0;
}
