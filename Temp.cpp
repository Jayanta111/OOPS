#include <iostream>
using namespace std;

// Function template for adding two numbers
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    // Using the add function with different data types
    int intResult = add(5, 10);
    double doubleResult = add(5.5, 3.3);
    float floatResult = add(4.2f, 7.8f);

    cout << "Addition of two integers: " << intResult << endl;
    cout << "Addition of two doubles: " << doubleResult << endl;
    cout << "Addition of two floats: " << floatResult << endl;

    return 0;
}
