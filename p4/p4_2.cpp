#include <iostream>
using namespace std;

int main (){
//string methods
    //empty

    string brand;

    cout << "Please enter your brand" << '\n';
    cin >> brand;

    if (brand.empty()){
      cout << "You didn't enter a brand";
    }
    else {
      cout << "Your chosen brand is " << brand;
    }

    return 0;
}
