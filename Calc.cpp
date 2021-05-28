#include <iostream>
#include "Calculator.h"

using namespace std;

int main() {
    try {
        string str; // выражение
        cout << "Enter expression: ";
        getline(cin, str); // считывание выражения

        CALC calculator(str); // создание калькулятора

        cout << endl << "Read variable values:" << endl;
        calculator.ReadVariables();
        cout << "Value: " << calculator.Evaluate() << endl;

        cout << endl << "Table: " << endl;
        calculator.PrintTable();
    }
    catch (const string& s) {
        cout << s << endl;
    }
}
