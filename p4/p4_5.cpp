#include <iostream>
using namespace std;

int main (){
    //string methods
    //at & insert

    string name;

    cout << "Enter your full name" << '\n';
    getline (cin, name);

    cout << name.at(0) << name.at(1) << '\n';
    cout << name.insert(0, ">.<");


    return 0;
}
