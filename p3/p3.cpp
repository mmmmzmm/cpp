#include <iostream>
using namespace std;

int main (){

//ternary operator
//condition ? = expression 1 : expression 2

  double grade;

  cout << "Enter your percentage" << '\n';
  cin >> grade;

  grade >= 70 ? cout << "You passed!" : cout << "You failed!";



  return 0;
}
