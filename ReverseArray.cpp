#include<iostream>
using namespace std;

int main() {
    int arr[] = {12,45,50,23,32,41};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original Array: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
    }
    cout << endl;
    
    for(int i=0;i<n/2;i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    
    cout << "Reversed Array: ";
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl;

    return 0;
}
