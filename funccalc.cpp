#include<iostream>
using namespace std;

void displayMenu()
{
    cout << " 1. Add " << endl; 
    cout << " 2. Subtract " << endl; 
    cout << " 3. Divide " << endl; 
    cout << " 4. Multiply " << endl; 
}

double add (double a, double b)
{
    return a + b;
}

double subtract (double a , double b)
{
    return a - b;
}

double divide(double a, double b)
{
    return a / b;
}

double multiply(double a, double b)
{
    return a * b;
}

int main() {
    int choice;
    double num1, num2;

    do {
        displayMenu();
        cin >> choice;

            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        

        switch (choice) {
            case 1:
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
             case 3:
                cout << "Result: " << divide(num1, num2) << endl;
                break;
            case 4:
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            default:
                cout << "Invalid." << endl;
        }

        cout << endl;

    } while (choice != 5);

    return 0;
}