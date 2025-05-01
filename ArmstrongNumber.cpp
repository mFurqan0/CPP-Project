#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int inputNumber; 
    int digitCount = 0;
    int armstrongSum = 0;
    int originalNumber;
    
    cout << "Enter a number: ";
    cin >> inputNumber;
    
    originalNumber = inputNumber; 
    int tempNumber = inputNumber; 
    
  
    while (tempNumber > 0) {
        tempNumber /= 10;
        digitCount++;
    }
    
n
    tempNumber = originalNumber; 
    
    // Calculate the Armstrong sum
    while (tempNumber > 0) {
        int lastDigit = tempNumber % 10;
        armstrongSum += pow(lastDigit, digitCount);
        tempNumber /= 10;
    }
    

    if (armstrongSum == originalNumber) {
        cout << "Armstrong Number!" << endl;
    } else {
        cout << "Not an Armstrong number!" << endl;
    }
    
    return 0;
}