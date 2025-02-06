#include <iostream>
using namespace std;

int main (){
    //ternary operator
    //condition ? expression 1 : expression 2

    char answer1;
    char answer2;
    char answer3;
    double score;

    cout << "What was Walter's pseudonym?" << '\n';
    cout << "a) Willy Wonka b) Batman c) Heisenberg " << '\n';
    cin >> answer1;

    answer1 == 'c' ? cout << "Correct!" << '\n' : cout << "Incorrect!" << '\n';

    cout << "How was Walter's lawyer called?" << '\n';
    cout << "a) Saul Goodman b) Gustavo Fring c) Jessie Pinkman" << '\n';
    cin >> answer2;

    answer2 == 'a' ? cout << "Correct!" << '\n' : cout << "Incorrect!" << '\n';

    cout << "What subject did Walter White teach at school?" << '\n';
    cout << "a) english b) chemistry c) mathematics" << '\n';
    cin >> answer3;

    answer3 == 'b' ? cout << "Correct!" << '\n' : cout << "Incorrect!" << '\n';


    cout << "Calculating results..." << '\n';

    answer1 == 'c' ? score = score + 1 : score = score;
    answer2 == 'a' ? score = score + 1 : score = score;
    answer3 == 'b' ? score = score + 1 : score = score;

    cout << "Your score is " << score << "/3!";

    return 0;
}
