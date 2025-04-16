#include <iostream>
using namespace std;

int main() {
    int n;
    string even_num;
    
    cout << "Enter number greater than zero:" ;
    cin >> n;
    
    while(n>0) {
        int last_digit = n%10;
        n /=10;
        if(last_digit%2==0) {
            even_num += to_string(last_digit) ;
        }
        
    }
    if(even_num.empty()) {
        cout << "0"; }
    else {
        cout << "result is: " << even_num; } 

    return 0;
}