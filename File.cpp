#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Variables to store mixed data types
    int age;
    float height;
    string name;

    // Getting data from the user
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your height (in meters): ";
    cin >> height;

    // Writing data to a file
    ofstream outFile("data.txt");
    if (outFile.is_open()) {
        outFile << "Name: " << name << endl;
        outFile << "Age: " << age << endl;
        outFile << "Height: " << height << " meters" << endl;
        outFile.close();
        cout << "Data written to file successfully.\n";
    } else {
        cout << "Unable to open file for writing.\n";
        return 1;
    }

    // Reading data from the file
    ifstream inFile("data.txt");
    if (inFile.is_open()) {
        string line;
        cout << "\nReading data from file:\n";
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open file for reading.\n";
        return 1;
    }

    return 0;
}
