#include<iostream>
using namespace std;

int main()
{
    int answer;
    int score = 0;

    cout << "===== QUIZ =====\n";

    cout << "\nQ1. Capital of India?\n";
    cout << "1. Delhi\n2. Mumbai\n3. Kolkata\n4. Chennai\n";
    cin >> answer;

    if(answer == 1)
        score++;

    cout << "\nQ2. C++ was developed by?\n";
    cout << "1. Dennis Ritchie\n2. Bjarne Stroustrup\n3. James Gosling\n4. Guido van Rossum\n";
    cin >> answer;

    if(answer == 2)
        score++;

    cout << "\nQ3. 5 + 10 = ?\n";
    cout << "1. 12\n2. 15\n3. 20\n4. 25\n";
    cin >> answer;

    if(answer == 2)
        score++;

    cout << "\nQ4. Which is an input statement?\n";
    cout << "1. cout\n2. cin\n3. printf\n4. return\n";
    cin >> answer;

    if(answer == 2)
        score++;

    cout << "\nQ5. Which loop executes at least once?\n";
    cout << "1. for\n2. while\n3. do-while\n4. none\n";
    cin >> answer;

    if(answer == 3)
        score++;

    cout << "\n========================\n";
    cout << "Your Score = " << score << "/5\n";

    if(score == 5)
        cout << "Excellent!";
    else if(score >= 3)
        cout << "Good!";
    else
        cout << "Keep Practicing!";

    return 0;
}