#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter " << (i + 1) << " element of the array: ";
        cin >> arr[i];
    }


    for (int i = 0; i < n; i++) {
        int count = 0;


        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count % 2 != 0) {
            cout << "Number which occurs an odd number of times: " << arr[i] << endl;
            break;
        }
    }

    return 0;
}