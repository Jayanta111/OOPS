#include <iostream>
#include <stdexcept> // For standard exceptions

using namespace std;

int main() {
    int age;
    cout << "Enter  age : ";
    cin >>age;

    try {
        if (age ==0 ) {
            // Throw a more descriptive exception
            throw runtime_error("Your Not eligible."); 
        }
        else
        if(age>18 ){
        cout <<"Your Are eligible for Vote"<<endl; // Cast to double for accurate division

        }
        
    } catch (const runtime_error& error) {
        cerr << "Exception occurred: " << error.what() << endl; // Use cerr for errors
    }

    return 0;
}