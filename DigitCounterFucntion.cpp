#include<iostream>
using namespace std;

int count7(int n) {
    // Function to count the occurrence of digit 7 in number n
    int count = 0;

    while(n > 0) {
        int last_digit = n % 10;
        n /= 10;

        if(last_digit == 7) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;

    cout << "Enter the value of Number: ";
    cin >> n;

    int result = count7(n);
    cout << "The digit 7 occurs " << result << " times in the number." << endl;

    return 0;
}
