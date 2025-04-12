#include<iostream>
using namespace std;

int main() {
    float percentage;
    
    cout << "Enter your percentage: ";
    cin >> percentage;
    
    if (percentage >= 90 && percentage <= 100) {
        cout << "Grade: A+";
    }
    else if (percentage >= 80) {
        cout << "Grade: A";
    }
    else if (percentage >= 70) {
        cout << "Grade: B";
    }
    else if (percentage >= 60) {
        cout << "Grade: C";
    }
    else if (percentage >= 50) {
        cout << "Grade: D";
    }
    else if (percentage >= 0) {
        cout << "Grade: F (Fail)";
    }
    else {
        cout << "Invalid percentage!";
    }

    return 0;
}
