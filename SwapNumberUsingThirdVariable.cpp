#include<iostream>
using namespace std;

int main() {
    int a, b, c ;
    
    cout << "Enter value of A:";
    cin >> a;
    
    cout << "Enter value of B:";
    cin >> b;   
    
    c = a;
    a = b;
    b = c;

    
    cout << "value of A is " << a << " and value of B is " << b << " after swapping";
    
return 0;
}