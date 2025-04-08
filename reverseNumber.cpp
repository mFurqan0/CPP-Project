#include<iostream>
using namespace std;
 
int main() {
    int num , last_digit;
    
    cout << "Enter numbers:";
    cin>> num;
    
    while(num!=0) {
    last_digit = num % 10;
    num/=10;
    cout << last_digit;
}
return 0;
}