#include <iostream>
using namespace std;

int main() {
	int num1 , num2 , mn , GCD=1 ;
	
	cout << "Enter first number:";
	cin >> num1;
	
	cout << "Enter second number:";
	cin >> num2;
	
	mn = min(num1,num2);
	
	for(unsigned int count=1; count <= mn; count++) {
		if (num1%count == 0 && num2%count==0) {
		GCD = count	;
	}
	
	}
	
	cout << "The GCD between: " << num1 << " and " << num2 << " is " << GCD ;
	
	return 0;
}