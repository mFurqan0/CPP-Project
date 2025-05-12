// This program checks if a number is a Dudeney number and prints the first 3 and all 7 Dudeney numbers.
#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is a Dudeney number
bool isDudeney(int num) {
    // Sum of digits
    int sum = 0;
    int temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    int IntCubeRoot = static_cast<int>(round(cbrt(num)));

    return (IntCubeRoot * IntCubeRoot * IntCubeRoot == num) && (IntCubeRoot == sum);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Check if the input number is a Dudeney number
    if (isDudeney(num)) {
        cout << num << " is a Dudeney number." << endl;
    } else {
        cout << num << " is not a Dudeney number." << endl;
    }

    cout << endl;

    // Print first 3 Dudeney numbers
    cout << "First 3 Dudeney numbers:" << endl;
    int count = 0;
    for (int i = 1; ; i++) {
        if (isDudeney(i)) {
            cout << i << endl;
            count++;
        }
        if (count == 3) break;
    }

    cout << endl;

    // Print first 7 Dudeney numbers
    cout << "All 7 Dudeney numbers:" << endl;
    int count7 = 0;
    for (int i = 1; ; i++) {
        if (isDudeney(i)) {
            cout << i << endl;
            count7++;
        }
        if (count7 == 7) break;
    }

    return 0;
}