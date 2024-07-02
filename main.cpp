#include <iostream>
#include "Math.h"
#include "Menu.h"
#include "Calc.h"
#include <bitset>

using namespace std;

/*Using the bones of a previous assignment, I used the skills learned from
previous lessons to solve old problems as well as complete the
 deliverables for the current assignment*/


int main() {

    int input;
    Math mScore[5];
    string first;
    string second;

//Do While loop for menu. Users will select an option from the menu. Each selection will return the user to the menu
//after task is complete. If a user selects "4", the program will terminate.
    do {

        cout <<
             "1: Testing User Defined Templates" << endl <<
             "2: Add Math Score" << endl <<
             "3: List Math Scores" << endl <<
             "4: Exit" << endl <<
             "Select: ";

        cin >> input;
        //Using a UDT to add, subtract, multiply, and divide.
        if (input == static_cast<int>(Menu::Template)) {
            cout << "Testing User Defined Templates"<< endl;
            cout << "The following variable types are calculated using basic arithmetic." << endl;
            cout << "Calculating integers(25, 5): " << endl;
            Calc I{25,5};
            I.printResults();

            cout << endl;

            cout << "Calculating double(25.5, 5.5): " << endl;
            Calc D{25.5,5.5};
            D.printResults();

            cout << "Calculating binary numbers:" << endl;

            cin >> first;
            cin >> second;
            auto Num1 = stoi(first, 0, 2);
            auto Num2 = stoi(second,0,2);
            Calc B{Num1,Num2};
            B.printResults();

        }

            //Not part of the week's assignment, but I wanted to solve the
            //container problem I had with a previous assignment.
            //Add scores to mScore[].
        else if (input == static_cast<int>(Menu::AddScore)) {
            for (int i=0;i<size(mScore); i++){
                mScore[i].getMathScore();
            }
        }
            //list scores added to mScore[]
        else if (input == static_cast<int>(Menu::List)) {
            for (int i=0;i<size(mScore); i++){
                mScore[i].printMathScore();
            }
        }

        else {

        }
    }
        //upon program exit, the destructor is called to destroy all objects
        //created within current session.
    while (input != static_cast<int>(Menu::Exit));

    return 0;
}