#include <iostream>
#include <string>
using namespace std;

int main() {
    string numStr;

    cout << "Input any number: ";
    cin >> numStr;


     char words[][10] = {
        "Zero", "One", "Two", "Three", "Four",
        "Five", "Six", "Seven", "Eight", "Nine"
    };


    for (char digit : numStr) {

        int index = digit - '0'; 
        cout << words[index] << " "; 
    }

    cout << endl;
    return 0;
}