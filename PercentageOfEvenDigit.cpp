#include <iostream>
#include <array>
using namespace std;

int main() {
    int index;
    double percentage, EvenCount = 0;
    array<int, 5> c;

    // Input values into the array
    for (index = 0; index < c.size(); index++) {
        cout << "Enter value " << index + 1 << ": ";
        cin >> c[index];
    }

    // Count even numbers
    for (index = 0; index < c.size(); index++) {
        if (c[index] % 2 == 0) {
            EvenCount++;
        }
    }

    // Calculate and display the percentage of even numbers
    if (EvenCount == 0) {
        cout << "The percentage of Even Numbers in the array is 0.0%" << endl;
    } else {
        percentage = (EvenCount / c.size()) * 100; // Ensure floating-point division
        cout << "The percentage of Even Numbers in the array is " << percentage << "%" << endl;
    }

    return 0;
}