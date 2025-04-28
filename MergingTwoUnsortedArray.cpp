#include <iostream>
using namespace std;

int main() {
    const int n = 6;
    int arr1[n] = {12, 54, 78, 63, 52, 41};
    
    const int m = 4;
    int arr2[m] = {25, 16, 10, 31};

    int Sortedarr[m + n];
    

    for (int i = 0; i < n; i++) {
        Sortedarr[i] = arr1[i];
    }

    for (int i = 0; i < m; i++) {
        Sortedarr[n + i] = arr2[i];
    }
    

    for (int i = 0; i < m + n; i++) {
        bool isSwap = false; 
        for (int j = 0; j < m + n - i - 1; j++) {
            if (Sortedarr[j] > Sortedarr[j + 1]) {
                swap(Sortedarr[j], Sortedarr[j + 1]);
                isSwap = true; 
            }
        }
        if (!isSwap) {
            break;
        }
    }
    

    cout << "Sorted Array:" << endl;
    for (int i = 0; i < m + n; i++) {
        cout << Sortedarr[i] << " "; 
    }
    cout << endl;

    return 0; 
}