#include <iostream>
using namespace std;

int main (){
  //testing letter case
  //i know i could cout under every question but i just wanted to do  it at the end

    char x;
    char y;
    int z;

    cout << "What's your size? (S/M/L)" << '\n';
    cin >> x;
    if (islower(x)) {
      x = x - 32;
    }

    cout << "Are you a male or a female? (M/F)" << '\n';
    cin >> y;
    if (islower(y)) {
      y = y - 32;
    }

    cout << "How many do you need?" << '\n';
    cin >> z;

    if (x == 'S' || x == 'L') {
      cout << "The size is available" << '\n';
    }
    else {
      cout << "The size is not available" << '\n';
    }

    if (y == 'M') {
      cout << "Men's clothing is in stock" << '\n';
    }
    else {
      cout << "Female's clothing is out of stock." << '\n';
    }

    if (z < 10) {
      cout << "This amount is available." << '\n';
    }
    else {
      cout << "You can only order up to 10 items" << '\n';
    }




    return 0;
}
