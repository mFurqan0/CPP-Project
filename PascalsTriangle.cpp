#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter number of rows: ";
    cin >> n; 

    for (int i = 0; i < n; i++) {
        
        int number = 1;

        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        for (int j = 0; j <= i; j++) {
            cout << number << " ";             
            number = number * (i - j) / (j + 1);
        }
        cout << endl;
    }

    return 0;
}