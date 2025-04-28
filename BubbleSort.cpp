#include<iostream>
using namespace std;

int main() {
    const int n = 6;
    int arr[n];    
    
    for(int i=0;i<n;i++) {
        cout << "Enter value no."<<(i+1)<<" in an array:";
        cin >> arr[i];
    }
    
    for(int i=0;i<n;i++) {
        bool isSwap = false;
        for(int j=0;j<n-i-1;j++) {
            
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap) {
            break;
        }
    }
    
    cout << "Sorted Array:" << endl;
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}