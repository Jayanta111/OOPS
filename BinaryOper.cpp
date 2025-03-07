#include<iostream>
using namespace std;

class Binary{
    private:
        int num;

    public:
        Binary(int n = 0) : num(n) {}

        Binary operator+(const Binary& obj) {
            Binary temp;
            temp.num = this->num + obj.num;
            return temp;
        }

        Binary operator-(const Binary& obj) {
            Binary temp;
            temp.num = this->num - obj.num;
            return temp;
        }

        void getdata() {
            cout << "Enter a number: ";
            cin >> num;
        }

        void displaydata() const {
            cout << "Value: " << num << endl;
        }
};

int main() {
    Binary obj1, obj2, result;

    cout << "For first Object:\n";
    obj1.getdata();
    
    cout << "For second Object:\n";
    obj2.getdata();

    // Increment 
    result = obj1 + obj2;
    cout << "After Increment : ";
    result.displaydata();

    // Decrement 
    result = obj1 - obj2;
    cout << "After Decrement : ";
    result.displaydata();

    return 0;
}
