#include <iostream>
#include <limits>
using namespace std;
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    double num1, num2;
    char operation;
    bool continueCalculating = true;

    while (continueCalculating) {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter an operator (+, -, *, /): ";
        cin >> operation;
        cout << "Enter second number: ";
        cin >> num2;

        switch (operation) {
        case '+':
            cout << "Result: " << add(num1, num2) << "\n";
            break;
        case '-':
            cout << "Result: " << subtract(num1, num2) << "\n";
            break;
        case '*':
            cout << "Result: " << multiply(num1, num2) << "\n";
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << divide(num1, num2) << "\n";
            } else {
                cout << "Error: Division by zero is not allowed.\n";
            }
            break;
        default:
            cout << "Invalid operator. Please try again.\n";
        }

        char choice;
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;
        if (choice != 'y' && choice != 'Y') {
            continueCalculating = false;
        }

        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return 0;
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}