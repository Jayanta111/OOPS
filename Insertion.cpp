#include <iostream>
using namespace std;

int main() {
    int n, pos, num;

    // Get the size of the array from the user
    cout << "Enter the size of the array: ";
    cin >> n;

    // Declare the array with size n+1 (to accommodate the new element)
    int arr[n + 1];

    // Get the array elements from the user
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Get the number to be inserted
    cout << "Enter the number to be inserted: ";
    cin >> num;

    // Get the position at which the number is to be inserted
    cout << "Enter the position (0-based index) at which to insert the number: ";
    cin >> pos;

    // Check if the position is within valid range
    if (pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    // Shift elements to the right to make space for the new number
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new number at the desired position
    arr[pos] = num;

    // Output the new array
    cout << "Array after insertion: ";
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
  