#include <iostream>
#include <algorithm>
using namespace std;

int main (){

    string answer;

    cout << (char)72 << (char)97 << (char)112 << (char)112 << (char)121 << " " << (char)86;
    cout << (char)97 << (char)108 << (char)101 << (char)110 << (char)116 << (char)105;
    cout << (char)110 << (char)101 << (char)115 << "! <3" << '\n';
    cout << (char)73 << (char)76 << (char)89 << "!!!!!!!!!!!!!!!" << '\n';
    system("Color 0C");

    do {
        cout << "Do you love me too?" << '\n';
        cin >> answer;
        transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
    }while (answer == "no");

    while (answer == "yes") {
        cout << "MWUAH ";
    }


    return 0;
}
