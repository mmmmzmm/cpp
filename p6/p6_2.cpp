#include <iostream>
using namespace std;

int main (){
//while loops

    int height;

    cout << "Enter your height (cm)" << '\n';
    cin >> height;

    do {
        cout << "Incorrect input. Try again" << '\n';
        cin >> height;
    }while (height <= 0);

    if (height > 183){
      cout << "You are taller than Leonardo DiCaprio";
    }
    else {
      cout << "You are shorter than Leonardo DiCaprio";
    }



    return 0;
}
