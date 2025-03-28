#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;
    
    for(int row = 1; row <= num; row++) {
        for(int j = num - row; j >= 1; j--) {
            cout << "*";
        }
        for(int ascend = 1; ascend <= row; ascend++) { 
            cout << ascend;
        }
        for(int descend = row - 1; descend >= 1; descend--) {
            cout << descend;
        }
        cout << "\n";
    }
    return 0;
}