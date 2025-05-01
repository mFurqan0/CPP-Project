#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number;
    bool is_prime = true;
    
    cout << "Enter number:";
    cin >> number;
    
    if(number<=1) {
        cout << number << " is not prime number";
        return 0;
    }
    
    if(number==2) {
        cout << number << " is prime number";
        return 0;
    }    
    
    if(number%2==0) {
        cout << number << " is not prime number";
        return 0;
    }
    
    for(int i=3 ; i <= sqrt(number);i+=2) {
        if(number%i==0) {
            is_prime = false;
            break;
        }
    }
    
    if(is_prime)
        cout << number << " is prime number";
    else 
        cout << number << " is not prime number";
}
