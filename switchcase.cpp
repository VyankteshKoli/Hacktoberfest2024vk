#include <iostream>
using namespace std;

int main() {
    char operation;
    float num1, num2;

    // Take user input for the operation
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    // Take user input for the numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform the calculation based on the operation
    switch (operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Error! Division by zero." << endl;
            break;
        default:
            cout << "Error! Operator is not correct." << endl;
            break;
    }

    return 0;
}
