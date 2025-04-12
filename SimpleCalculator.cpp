#include<iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;  // char for operator like '+', '-', etc.
    
    cout << "Enter two values: ";
    cin >> num1 >> num2;  // Correct input syntax
    
    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;  // Get the operator symbol
    
    switch(op) {
        case '+':
            cout << "Result: " << num1 + num2;
            break;
        
        case '-':
            cout << "Result: " << num1 - num2;
            break;
        
        case '*':
            cout << "Result: " << num1 * num2;
            break;
        
        case '/':
            if (num2 == 0) {
                cout << "Error: Cannot divide by zero!";
            } else {
                cout << "Result: " << num1 / num2;
            }
            break;
        
        default:
            cout << "Invalid operator!";
    }
    
    return 0;
}