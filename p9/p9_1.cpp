#include <iostream>
using namespace std;

double square (double length);

int main (){
//return function

    double length = 2.5;
    double area = square(length);

    cout << area;

    return 0;
}

double square (double length){
  return length * length;
}