#include <iostream>
using namespace std;

int main (){

  //temperature conversion program

      char unit;
      double temp;

      cout << "Type your temperature" << '\n';
      cin >> temp;

      cout << "What would you like to convert it to? [C/F]" << '\n';
      cin >> unit;

      if (unit == 'C' || unit == 'c'){
          cout << "The temperature is " << (temp - 32) / 1.8 << " degree(s) Celsius";
      }
      else if (unit == 'F' || unit == 'f') {
          cout << "The temperature is " << (temp * 1.8) + 32 << " degree(s) Fahrenheit";
      }


    return 0;
}
