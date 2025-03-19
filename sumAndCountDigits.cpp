#include<iostream>
using namespace std;
 
int main() {
	unsigned int num1 , num2 , sum ,count , copy ;
	
	cout << "Enter First Number:";
	cin >> num1;
	
	cout << "Enter second number:" ;
	cin >> num2;
	
	sum = num1 + num2;
	
	copy = sum;
	
	if(copy == 0) {
		count = 1;
	}	
	else {	
		while(copy > 0) {
    		copy /= 10;
        	count++;
    	}	
    }
    
	cout << "Sum = " << sum << endl;
    cout << "Total Digits of Sum is " << count;
    
	return 0; 
}