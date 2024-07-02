#ifndef WEEK4_SVONSYDOW_MATH_H
#define WEEK4_SVONSYDOW_MATH_H
#include <iostream>

class Math {
public:
    //Default constructor is automatically implemented because no other
    //constructor has been implemented.

    //setters and getters
    int getScore();
    void setScore(int Score);

    //destructor
    ~Math();

    //functions
    void getMathScore();
    void printMathScore();

private:

    int score;

};



#endif //WEEK4_SVONSYDOW_MATH_H
