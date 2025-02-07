#include <iostream>
using namespace std;

int main (){
//string methods
    //append

    string user;

    cout << "Enter your user" << '\n';
    cin >> user;

    user.append("@gmail.com");

    cout << "Your new user is " << user;


    return 0;
}
