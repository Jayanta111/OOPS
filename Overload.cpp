#include <iostream>
using namespace std;

class Matrix {
    private:
        int rows, cols;
        int **data;  // Pointer to hold matrix data

    public:
        // Constructor to initialize matrix with given dimensions
        Matrix(int r, int c) : rows(r), cols(c) {
            data = new int*[rows];
            for(int i = 0; i < rows; ++i) {
                data[i] = new int[cols];
            }
        }

        // Destructor to free allocated memory
        ~Matrix() {
            for(int i = 0; i < rows; ++i) {
                delete[] data[i];
            }
            delete[] data;
        }

        // Method to input matrix data
        void inputMatrix() {
            cout << "Enter elements of " << rows << "x" << cols << " matrix:\n";
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    cin >> data[i][j];
                }
            }
        }

        // Overloading + operator to add two matrices
        Matrix operator+(const Matrix &m) {
            Matrix result(rows, cols);
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    result.data[i][j] = this->data[i][j] + m.data[i][j];
                }
            }
            return result;
        }

        // Method to display matrix
        void display() const {
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    cout << data[i][j] << " ";
                }
                cout << endl;
            }
        }
};

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns for the matrices: ";
    cin >> rows >> cols;

    // Creating two matrices and a result matrix
    Matrix matrix1(rows, cols), matrix2(rows, cols);

    cout << "Matrix 1:\n";
    matrix1.inputMatrix();

    cout << "Matrix 2:\n";
    matrix2.inputMatrix();

    // Adding two matrices using overloaded + operator
    Matrix result = matrix1 + matrix2;

    cout << "\nResultant Matrix after addition:\n";
    result.display();

    return 0;
}
