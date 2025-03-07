#include <iostream>
using namespace std;

// Function for integers
void FirstFunction(int a, int b) {
    if (a > b) {
        cout << "a > b" << endl;
    }
    if (a < b) {
        cout << "a < b" << endl;
    }
    if (a == b) {
        cout << "a = b" << endl;
    }
    if (a != b) {
        cout << "a != b" << endl;
    }
}

// Function for doubles
void SecFunction(double x, double y) {
    if (x > y) {
        cout << "x > y" << endl;
    }
    if (x < y) {
        cout << "x < y" << endl;
    }
    if (x == y) {
        cout << "x = y" << endl;
    }
    if (x != y) {
        cout << "x != y" << endl;
    }
}

int main() {
    cout << "Relational Integer Comparison:" << endl;
    FirstFunction(10, 20);

    cout << "Relational Double Comparison:" << endl;
    SecFunction(10.2, 11.5);

    return 0;
}
