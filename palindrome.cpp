#include <iostream>
using namespace std;

int main() {
    int num, original, reversed = 0;
    
    cout << "Input a Number = ";
    cin >> num;
    original = num;

    // Reverse the number
    while(num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    // Check palindrome
    if(original == reversed) {
        cout << "Given number is a palindrome number";
    } else {
        cout << "Given number is a consonant number";
    }
    
    return 0;
}