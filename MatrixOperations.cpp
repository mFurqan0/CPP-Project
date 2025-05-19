#include <iostream>
using namespace std;

int main() {
    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Matrix Addition\n";
        cout << "2. Matrix Subtraction\n";
        cout << "3. Matrix Multiplication\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1 || choice == 2) {
            int rows, cols;
            cout << "Enter number of rows and columns: ";
            cin >> rows >> cols;

            int matrix1[10][10], matrix2[10][10], result[10][10];

            cout << "Enter elements of first matrix:\n";
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    cin >> matrix1[i][j];
                }
            }

            cout << "Enter elements of second matrix:\n";
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    cin >> matrix2[i][j];
                }
            }

            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    if (choice == 1)
                        result[i][j] = matrix1[i][j] + matrix2[i][j];
                    else
                        result[i][j] = matrix1[i][j] - matrix2[i][j];
                }
            }

            cout << "Resultant matrix:\n";
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    cout << result[i][j] << " ";
                }
                cout << "\n";
            }
        }
        else if (choice == 3) {
            int rows1, cols1, rows2, cols2;
            cout << "Enter rows and columns of first matrix: ";
            cin >> rows1 >> cols1;
            cout << "Enter rows and columns of second matrix: ";
            cin >> rows2 >> cols2;

            if (cols1 != rows2) {
                cout << "Matrix multiplication not possible\n";
                continue;
            }

            int matrix1[10][10], matrix2[10][10], result[10][10] = {0};

            cout << "Enter elements of first matrix:\n";
            for (int i = 0; i < rows1; i++) {
                for (int j = 0; j < cols1; j++) {
                    cin >> matrix1[i][j];
                }
            }

            cout << "Enter elements of second matrix:\n";
            for (int i = 0; i < rows2; i++) {
                for (int j = 0; j < cols2; j++) {
                    cin >> matrix2[i][j];
                }
            }

            for (int i = 0; i < rows1; i++) {
                for (int j = 0; j < cols2; j++) {
                    result[i][j] = 0;
                    for (int k = 0; k < cols1; k++) {
                        result[i][j] += matrix1[i][k] * matrix2[k][j];
                    }
                }
            }

            cout << "Resultant matrix:\n";
            for (int i = 0; i < rows1; i++) {
                for (int j = 0; j < cols2; j++) {
                    cout << result[i][j] << " ";
                }
                cout << "\n";
            }
        }
        else if (choice != 0) {
            cout << "Invalid choice, try again.\n";
        }
    } while (choice != 0);

    cout << "Program exited.\n";
    return 0;
}

