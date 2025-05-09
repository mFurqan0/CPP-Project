// factor to check if B is a factor of A
#include <iostream>
using namespace std;

bool isFactor(int a, int b) {
    if (b == 0) {
        return false;
    }
    if (a % b == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int a, b;

    cout << "Enter the value of A and B: ";
    cin >> a >> b;
    
    cout << boolalpha << isFactor(a,b);
    
    return 0; 
}
