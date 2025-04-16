#include <iostream>
using namespace std; 

int main() {

    int arr[] = {1, 5, 7, 5, 8, 9, 11, 11, 2, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Unique elements of the array: ";


    for (int i = 0; i < n; i++) {
        bool isUnique = true; 


        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = false;
                break; 
            }
        }


        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}