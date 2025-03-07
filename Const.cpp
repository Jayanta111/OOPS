#include <iostream>
using namespace std;

class Student {
private:
    const int rollNo;  
    string name;

public:
    Student(int r, string n) : rollNo(r), name(n) {}

    void display() const {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student student1(101, "Alice");

    student1.display();

  

    return 0;
}