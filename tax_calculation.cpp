#include <iostream>
using namespace std;

int main() {
    string status;
    int salary;
    
    cout << "Are you Single or Married: ";
    cin >> status;
    cout << "Enter your Salary: $";
    cin >> salary;

    if(status == "single") {
        double tax_rate;
        if(salary >= 372951)       tax_rate = 35.0;
        else if(salary >= 171551)  tax_rate = 30.0;
        else if(salary >= 82251)   tax_rate = 25.0;
        else if(salary >= 33951)   tax_rate = 20.0;
        else if(salary >= 8351)    tax_rate = 15.0;
        else                       tax_rate = 10.0;
        
        double tax = salary * (tax_rate / 100);
        double take_home = salary - tax;
        
        cout << "\nMarginal Tax Rate: " << tax_rate << "%"
             << "\nTax Amount: $" << tax
             << "\nTake-home Salary: $" << take_home;
    }
    else if(status == "married") {
        double tax_rate;
        if(salary >= 372951)      tax_rate = 35.0;
        else if(salary >= 208851) tax_rate = 30.0;
        else if(salary >= 137051) tax_rate = 25.0;
        else if(salary >= 67901)  tax_rate = 20.0;
        else if(salary >= 16701)  tax_rate = 15.0;
        else                      tax_rate = 10.0;
        
        double tax = salary * (tax_rate / 100);
        double take_home = salary - tax;
        
        cout << "\nMarginal Tax Rate: " << tax_rate << "%"
             << "\nTax Amount: $" << tax
             << "\nTake-home Salary: $" << take_home;
    }
    else {
        cout << "Invalid input! Please enter 'single' or 'married'";
    }

    return 0;
}