#include <iostream>
using namespace std;

    int main () {
        double num1, num2, result;
        char op;
        char choice;

// Ask the user for two numbers and an operator to prepare for the calculation
        do {
            cout << "ENTER YOUR FIRST NUMBER" << endl;
            cin >> num1;

            cout << "ENTER YOUR SECOND NUMBER" << endl;
            cin >> num2;

            cout << "ENTER YOUR OPERATOR (+, -, *, /): " << endl;
            cin >> op;

 // Check which operator the user entered and show the correct result
 // switch checks the value of 'op' and runs the matching case block
            switch (op) {
                case '+':
                cout << "RESULT:" << num1 + num2 << endl;
                break; // stops here after matching

                case '*':
                cout  << "RESULT:" << num1 * num2 << endl;
                break; // stops here after matching
            
                case '-':
                cout  << "RESULT:" << num1 - num2 << endl;
                break; // stops here after matching

// case '/' checks if op is '/' and performs division with a check for zero
                case '/':
                if (num2 !=0)
                        cout << "RESULT: " << num1 / num2 << endl;
                        else
                            cout << "Error! Division by zero." << endl;
                        break; // stops here after matching

// default runs if no case matches any value of op
                    default:
                        cout << "Invalid operator!" << endl;
            } 
            
// ask the user if they want to repeat the calculation and continue looping while they enter 'y' or 'Y'
            cout << "\nDo another calculation? (y/n): ";
            cin >> choice;

        } while(choice == 'y' || choice == 'Y');
        cout << "END OF PROGRAM " << endl;
           
        return 0;

        }