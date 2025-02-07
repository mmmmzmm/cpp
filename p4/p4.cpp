#include <iostream>
using namespace std;

int main (){
//string methods
    //length

    string name;

    cout << "Enter your name:" << '\n';
    getline(cin, name);

    if (name.length() > 15){
      cout << "Your name can't contain more than 15 characters.";
    }
    else {
      cout << "Welcome " << name;
    }


    return 0;
}
