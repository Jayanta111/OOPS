#include <iostream>
using namespace std;

int main() {
    int numerator, denominator;
    double result;

    cout << "Enter the numerator: ";
    cin >> numerator;
    cout << "Enter the denominator: ";
    cin >> denominator;

    try {
        // Check if denominator is zero and throw an exception if true
        if (denominator == 0) {
            throw runtime_error("Error: Division by zero!");
        }
        
        // Perform division if no error is encountered
        result = static_cast<double>(numerator) / denominator;
        cout << "Result: " << result << endl;
    } 
    // Catch the exception
    catch (const runtime_error& e) {
        cout << e.what() << endl;
    }

    cout << "Program execution completed." << endl;
    return 0;
}
