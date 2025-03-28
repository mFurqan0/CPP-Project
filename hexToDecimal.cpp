#include <iostream>
using namespace std;

int main() {
    char hexadecimal;
    int decimal = -1; 
    
    cout << "Enter Hexadecimal value: ";
    cin >> hexadecimal;
    
    if(hexadecimal >= '0' && hexadecimal <= '9') {
        decimal = hexadecimal - '0';
    }
    else if(hexadecimal >= 'A' && hexadecimal <= 'F') {
        decimal = (hexadecimal - 'A') + 10;
    }
    else if(hexadecimal >= 'a' && hexadecimal <= 'f') {
        decimal = (hexadecimal - 'a') + 10;
    }
    else {
        cout << "Invalid Input!" << endl;
        return 1;
    }
    
    cout << "The decimal value is: " << decimal << endl;
    return 0;
}