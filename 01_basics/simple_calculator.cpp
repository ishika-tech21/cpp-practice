#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    cout << "=== Clean Terminal Calculator ===" << endl;

    double num1 = 0.0, num2 = 0.0;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "\n--- Result ---" << endl;
    
    // The switch statement evaluates the operator character directly
    switch(operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
            break;
        case '/':
            // Guard rail against division by zero
            if (num2 == 0) {
                cout << "❌ Error: Division by zero is undefined!" << endl;
            } else {
                cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
            }
            break;
        default:
            cout << "❌ Error: Invalid operator entered." << endl;
    }

    return 0;
}
