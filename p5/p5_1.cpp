#include <cctype>
#include <iostream>
using namespace std;

int main (){
//testing letter case

    char answer1;
    char answer2;
    char answer3;
    char answer4;
    double score;

    cout << "When did Overwatch win game of the year?" << '\n';
    cout << "a) 2016 b) 2022 c) 2019 d) 2024" << '\n';
    cin >> answer1;
    answer1 = (char) tolower(answer1);

    cout << "What's the name of Overwatch's poster character?" << '\n';
    cout << "a) Junkerqueen b) Kiriko c) Tracer d) Reinhardt" << '\n';
    cin >> answer2;
    answer2 = (char) tolower(answer2);

    cout << "Which character is a hacker?" << '\n';
    cout << "a) Orisa b) Ana c) Mercy d) Sombra" << '\n';
    cin >> answer3;
    answer3 = (char) tolower(answer3);

    cout << "Whose ultimate is called 'Soundbarrier'?" << '\n';
    cout << "a) Zarya's b) Lucio's c) Baptiste's d) Ashe's" << '\n';
    cin >> answer4;
    answer4 = (char) tolower(answer4);


    if (answer1 == 'a') {
        score = score + 1;
    }
    else {
        score = score + 0;
    }

    if (answer2 == 'c') {
        score = score + 1;
    }
    else {
        score = score + 0;
    }

    if (answer3 == 'd') {
        score = score + 1;
    }
    else {
        score = score + 0;
    }

    if (answer4 == 'b') {
        score = score + 1;
    }
    else {
        score = score + 0;
    }

    cout << "Calculating your results..." << '\n';
    cout << "Your score is " << score * 25 << "%!";

    return 0;
}
