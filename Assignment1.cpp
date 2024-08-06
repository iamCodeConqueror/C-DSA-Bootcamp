#include <iostream>

using namespace std;

int main()
{
    double num1, num2;
    char Operator; // Operations like Arithematic

    cout << "-------------------------------------------------" << endl;
    cout << "Welcome To Assignment 1" << endl;
    cout << "Basic Calculator" << endl;

    cout << "Enter Your First number: " << endl;
    cin >> num1;

    cout << "Enter the operator to perform operations + - / * ";
    cin >> Operator;

    cout << "Enter your second number: " << endl;
    cin >> num2;

    // for simple i use if
    if (Operator == '+')
    {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    }
    else if (Operator == '*')
    {
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    }
    else if (Operator == '-')
    {
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    }
    else if (Operator == '/')
    {
        if (num2 != 0)
        {
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
        else
        {
            cout << "Error!!" << endl;
        }
    }
    else
    {
        cout << "Invalid" << endl;
    }

    return 0;
}