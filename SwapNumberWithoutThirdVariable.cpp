#include<iostream>
using namespace std;

int main() {
    int a, b ;
    
    cout << "Enter value of A:";
    cin >> a;
    
    cout << "Enter value of B:";
    cin >> b;   
    
   a = a + b;
   b = a - b;
   a = a - b;

    
    cout << "value of A is " << a << " and value of B is " << b << " after swapping";
    
return 0;
}