#include <iostream>
using namespace std;

// Class template for a simple calculator
template <typename T>
class Calculator {
private:
    T a, b;

public:
    // Constructor to initialize the values
    Calculator(T x, T y) : a(x), b(y) {}

    // Member functions for arithmetic operations
    T add() { return a + b; }
    T subtract() { return a - b; }
    T multiply() { return a * b; }
    T divide() { 
        if (b != 0)
            return a / b;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0; // Or some other error code
        }
    }
};

int main() {
    // Using Calculator with integers
    Calculator<int> intCalc(10, 5);
    cout << "Integer Addition: " << intCalc.add() << endl;
    cout << "Integer Subtraction: " << intCalc.subtract() << endl;
    cout << "Integer Multiplication: " << intCalc.multiply() << endl;
    cout << "Integer Division: " << intCalc.divide() << endl;

    // Using Calculator with doubles
    Calculator<double> doubleCalc(5.5, 2.2);
    cout << "\nDouble Addition: " << doubleCalc.add() << endl;
    cout << "Double Subtraction: " << doubleCalc.subtract() << endl;
    cout << "Double Multiplication: " << doubleCalc.multiply() << endl;
    cout << "Double Division: " << doubleCalc.divide() << endl;

    return 0;
}
