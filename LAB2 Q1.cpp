#include <iostream>
using namespace std;
int main() {
	double num1 , num2 , Addition , Subtraction , Multiplication , Division ;
	
	cout << "Enter value of num1:" ;
	cin >> num1 ;
	
	cout << "Enter value of num2:" ;
	cin >> num2 ;
	
	Addition = num1 + num2 ;
	Subtraction = num1 - num2 ;
	Multiplication = num1 * num2 ;
	Division = num1 / num2 ;
	
	cout << "ADDITION:" << Addition << "\n" ;
	cout << "SUBTRACTION:" << Subtraction << "\n" ;
	cout << "MULTIPLICATION:" << Multiplication << "\n" ;
	cout << "DIVISION:" << Division << "\n" ;
}
