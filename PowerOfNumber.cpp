#include <iostream>
using namespace std;

int main() {
    int num, power;
    int product = 1; // Initialize product to 1

    cout << "Enter number and power of it: ";
    cin >> num >> power; // Correct input handling

    for (int i = 1; i <= power; i++) {
        product *= num; // Multiply product by num
    }

    cout << num << "^" << power << " = " << product << endl; // Output the result
    return 0;
}