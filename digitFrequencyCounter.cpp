#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter number: ";
    cin >> num;

    int original_num = num;

    for (int i = 0; i < 10; i++) {
        int count = 0;
        num = original_num;

        while (num > 0) {
            int last_digit = num % 10;
            num /= 10;

            if (last_digit == i) {
                count++;
            }
        }

        if (count > 0) {
            cout << "Frequency of " << i << " is " << count << endl;
        }
    }

    return 0;
}