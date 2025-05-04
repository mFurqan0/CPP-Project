#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int num = 1; // Current number to print

    for (int i = 1; i <= n; i++) { // for each row
        for (int j = 1; j <= i; j++) { // print i numbers in the ith row
            cout << num << " ";
            num++; // increment number for next
        }
        cout << endl;
    }

    return 0;
}