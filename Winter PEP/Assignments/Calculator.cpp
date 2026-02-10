#include <iostream>
#include <string>
using namespace std;

class Calculator {
public:
    int calculate(int a, int b, string op) {
        if (op == "add")
            return a + b;
        else if (op == "sub")
            return a - b;
        else if (op == "mul")
            return a * b;
        else if (op == "div") {
            if (b != 0)
                return a / b;
            else {
                cout << "Error: Division by zero\n";
                return 0;
            }
        } else {
            cout << "Invalid operation\n";
            return 0;
        }
    }
};

int main() {
    Calculator calc;
    int num1, num2;
    string operation;

    cout << "Enter first integer: ";
    cin >> num1;

    cout << "Enter second integer: ";
    cin >> num2;

    cout << "Enter operation (add / sub / mul / div): ";
    cin >> operation;

    int result = calc.calculate(num1, num2, operation);
    cout << "Result = " << result;

    return 0;
}
