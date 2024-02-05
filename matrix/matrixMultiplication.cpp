#include<iostream>
using namespace std;

class matrix {
public:
    int m1rows = 0, m1columns = 0;
    int m2rows = 0, m2columns = 0;
    int result[100][100] = {0}; // Assuming a maximum size for the result matrix

    matrix(int a, int b, int x, int y) {
        m1rows = a;
        m1columns = b;
        m2rows = x;
        m2columns = y;
    }

    void matrixMultiplication(int m1[100][100], int m2[100][100]) {
        int sum = 0;
        cout << "The matrix multiplication is: " << endl;
        for (int i = 0; i < m1rows; i++) {
            for (int j = 0; j < m2columns; j++) {
                sum = 0;
                for (int k = 0; k < m1columns; k++) {
                    sum += m1[i][k] * m2[k][j];
                }
                result[i][j] = sum;
            }
        }
    }

    void print() {
        for (int i = 0; i < m1rows; i++) {
            for (int j = 0; j < m2columns; j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int row1, column1, row2, column2;

    cout << "Enter the rows and column of 1st matrix (eg: r c): ";
    cin >> row1 >> column1;

    cout << "Enter the rows and column of 2nd matrix (eg: r c): ";
    cin >> row2 >> column2;

    // Check matrix multiplication is valid or not
    if (column1 != row2) {
        cout << "! Matrix multiplication is not possible" << endl;
    }
    else {
        cout << "Enter the elements of 1st matrix: " << endl;
        int a[100][100];
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < column1; j++) {
                cin >> a[i][j];
            }
        }

        cout << "Enter the elements of 2nd matrix: " << endl;
        int b[100][100];
        for (int i = 0; i < row2; i++) {
            for (int j = 0; j < column2; j++) {
                cin >> b[i][j];
            }
        }

        // Print 1st matrix
        cout << "1st matrix: " << endl;
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < column1; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }

        // Print 2nd matrix
        cout << "2nd matrix: " << endl;
        for (int i = 0; i < row2; i++) {
            for (int j = 0; j < column2; j++) {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }

        // Object creation of class matrix
        matrix obj(row1, column1, row2, column2);

        // Calling method matrixMultiplication()
        obj.matrixMultiplication(a, b);
        obj.print();
    }

    return 0;
}
