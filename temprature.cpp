#include <iostream>
using namespace std;
int main() {
	float Celsius , Fahrenheit;
	
	cout << "Enter the temprature in Fahrenheit:" ;
	cin >> Fahrenheit ;
	
	Celsius = (Fahrenheit-32)*5/9 ;
	
	cout << "The temprature in Celsius is:" << Celsius <<endl;
	
	return 0;
}
