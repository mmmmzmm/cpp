#include <iostream>
using namespace std;

int main (){

   string nickname;
   char answer;


   cout << "Enter your nickname" << '\n';
   cin >> nickname;

   if (nickname.length() > 15) {
       cout << "Your name can't contain more than 15 characters.";
   }
   else if (nickname.length() < 3) {
       cout << "Your name must contain at least 3 characters";
   }
   else {
       cout << "Welcome " << nickname << '\n';
   }

    nickname.append("@gmail.com");

    cout << "Would you like to use " << nickname << "? [Y/N]" << '\n';
    cin >> answer;
    answer = (char) tolower(answer);

    if (answer == 'y') {
        cout << "Your new address is " << nickname;
    }
    else if (answer == 'n') {
        cout << "Your address won't be changed";
    }
    else {
        cout << "Incorrect input";
    }

    return 0;
}
