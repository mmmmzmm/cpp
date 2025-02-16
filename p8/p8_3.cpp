#include <iostream>
using namespace std;

void heisenberg (string name, string address);

int main (){

    string name = "Walter Hartwell White";
    string address = "308 Negra Arroyo Lane, Albuquerque";

    heisenberg(name, address);

    return 0;
}

void heisenberg(string name, string address) {
    cout << "My name is " << name << "." << '\n';
    cout << "I live at " << address << "." << '\n';
    cout << "This is my confession." << '\n';
}
