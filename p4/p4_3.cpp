#include <iostream>
using namespace std;

int main (){
//string methods
    //clear

    string login;

    cout << "Enter your login" << '\n';
    getline(cin, login);

    login.clear();

    cout << "Hello user " << login;


    return 0;
}
