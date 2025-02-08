#include <iostream>
using namespace std;

int main (){
  //testing letter case
  //i know i could cout under every question but i just wanted to do  it at the end

    char size;
    char gender;
    int amount;

    cout << "What's your size? (S/M/L)" << '\n';
    cin >> size;
    size = (char) toupper(size);

    cout << "Are you a male or a female? (M/F)" << '\n';
    cin >> gender;
    gender = (char) toupper(gender);

    cout << "How many do you need?" << '\n';
    cin >> amount;

    if (size == 'S' || size == 'L') {
      cout << "The size is available" << '\n';
    }
    else {
      cout << "The size is not available" << '\n';
    }

    if (gender == 'M') {
      cout << "Men's clothing is in stock" << '\n';
    }
    else {
      cout << "Female's clothing is out of stock." << '\n';
    }

    if (amount < 10) {
      cout << "This amount is available." << '\n';
    }
    else {
      cout << "You can only order up to 10 items" << '\n';
    }




    return 0;
}
