#include <iostream>
#include "Math.h"


using namespace std;
//destructors
Math::~Math() {
    cout << "Object has been erased." << endl;
}

//setters and getters
int Math::getScore() {
    return score;
}

void Math::setScore(int Score) {
    score = Score;
}

//functions
void Math::getMathScore() {
    cout << "Enter score: ";
    cin >> score;
    cout << endl;
}

void Math::printMathScore() {
    cout << score << endl;
}

//templates

