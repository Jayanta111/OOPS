#include<iostream>
using namespace std;

class Students {
private:
    char name1;
    char name2;

public:
    // Copy Constructor
    Students(char n1, char n2) : name1(n1), name2(n2) {}

    Students(const Students &Students2) {
        name1 = Students2.name1;
        name2 = Students2.name2;
    }

    char getName1() {
        return name1;
    }

    char getName2() {
        return name2;
    }
};

// Dynamic Constructor
class DynamicConstr {
private:
    int size;
    int* arr; // Dynamically allocated array

public:
    // Constructor to allocate dynamic memory
    DynamicConstr(int size) {
        this->size = size;
        arr = new int[size];  // Allocate memory for the array
    }

    // Destructor to deallocate memory
    ~DynamicConstr() {
        delete[] arr;  // Free up allocated memory
    }

    void Dynamic() {
        cout << "Enter " << size << " numbers:" << endl;
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        cout << "Dynamic Array numbers:\n";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // Copy Constructor Example
    Students Students2('A', 'J'); 
    Students Students3 = Students2; // Copy constructor is called here

    cout << "Name1: " << Students2.getName1() << ", Name2: " << Students2.getName2() << endl;
    cout << "Name1: " << Students3.getName1() << ", Name2: " << Students3.getName2() << endl;

    // Dynamic Array Example
    int size = 5;
    DynamicConstr obj(size);  // Pass size to constructor
    obj.Dynamic();  // Call method to input and display numbers

    return 0;
}
