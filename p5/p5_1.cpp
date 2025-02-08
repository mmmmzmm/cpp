#include <iostream>
using namespace std;

int main (){
//testing the letter case

    char x;
    char y;
    char z;
    char s;
    double score;

    cout << "When did Overwatch win game of the year?" << '\n';
    cout << "a) 2016 b) 2022 c) 2019 d) 2024" << '\n';
    cin >> x;
    if (isupper(x)) {
        x = x + 32;
    }

    cout << "What's the name of Overwatch's poster character?" << '\n';
    cout << "a) Junkerqueen b) Kiriko c) Tracer d) Reinhardt" << '\n';
    cin >> y;
    if (isupper(y)) {
        y = y + 32;
    }

    cout << "Which character is a hacker?" << '\n';
    cout << "a) Orisa b) Ana c) Mercy d) Sombra" << '\n';
    cin >> z;
    if (isupper(z)) {
        z = z + 32;
    }

    cout << "Whose ultimate is called 'Soundbarrier'?" << '\n';
    cout << "a) Zarya's b) Lucio's c) Baptiste's d) Ashe's" << '\n';
    cin >> s;
    if (isupper(s)) {
        s = s + 32;
    }

    if (x == 'a') {
        score = score + 1;
    }
    else {
        score = score + 0;
    }

    if (y == 'c') {
        score = score + 1;
    }
    else {
        score = score + 0;
    }

    if (z == 'd') {
        score = score + 1;
    }
    else {
        score = score + 0;
    }

    if (s == 'b') {
        score = score + 1;
    }
    else {
        score = score + 0;
    }

    cout << "Calculating your results..." << '\n';
    cout << "Your score is " << score * 25 << "%!";

    return 0;
}
