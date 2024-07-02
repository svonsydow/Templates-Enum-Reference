#ifndef WEEK4_SVONSYDOW_CALC_H
#define WEEK4_SVONSYDOW_CALC_H
#include <iostream>
#include <cmath>

using namespace std;

template<class T>
class Calc{
public:
    Calc(T Num1, T Num2){
        firstVariable = Num1;
        secondVariable = Num2;
    }

    void printResults();
    T add(){return firstVariable + secondVariable;}
    T subtract(){return firstVariable - secondVariable;}
    T multiply(){return firstVariable * secondVariable;}
    T divide(){return firstVariable / secondVariable;}


private:
//variables of type T
    T firstVariable;
    T secondVariable;
};

template<class T>
void Calc<T>::printResults() {
    cout << firstVariable << " + " << secondVariable << " = " << add() << endl;
    cout << firstVariable << " - " << secondVariable << " = " << subtract() << endl;
    cout << firstVariable << " * " << secondVariable << " = " << multiply() << endl;
    cout << firstVariable << " / " << secondVariable << " = " << divide() << endl;

}

#endif //WEEK4_SVONSYDOW_CALC_H
