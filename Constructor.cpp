#include <iostream>
using namespace std;

class ZeroAndParameterized {
private:
    int arr[5];  
    int size;

public:

    ZeroAndParameterized() {
        size = 5;
        for (int i = 0; i < size; i++) {
            arr[i] = 0; 
        }
        cout << "Zero Constructor: Array initialized with default values." << endl;
    }


    ZeroAndParameterized(int inputArr[], int arrSize) {
        size = arrSize;
        for (int i = 0; i < size; i++) {
            arr[i] = inputArr[i];  
        }
        cout << "Parameterized Constructor: Array initialized with provided values." << endl;
    }


    void display() const {
        cout << "Array elements are: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {

    ZeroAndParameterized obj1;
    obj1.display();

    int inputArr[5] = {10, 20, 30, 40, 50}; 
    ZeroAndParameterized obj2(inputArr, 5);
    obj2.display();

    return 0;
}
