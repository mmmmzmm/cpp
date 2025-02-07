#include <iostream>
using namespace std;

int main (){
//string methods
    //find & erase

    string story;

    cout << "Enter a short story" << '\n';
    getline(cin, story);

    cout << story.find(' ') << '\n';
    cout << story.erase(0, 2);


    return 0;
}
