#include<iostream>
using namespace std;

int main() {
    int year;
    
    cout << "enter any year:";
    cin >> year;
    
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 )) {
        cout << "the year " << year << " is leap year.";
    }
    else {
        cout << "the year " << year << " is not leap year.";
    }    
return 0;
}