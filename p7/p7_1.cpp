#include <iostream>
using namespace std;

int main (){
//pseudo-random number generator

    srand(time(NULL));

    int num = (rand() % 10) + 1;

    cout << num;


    return 0;
}
