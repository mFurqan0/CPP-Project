#include<iostream>
using namespace std;

int main() {
	int num ;
	
	cout << "Enter a number:";
	cin >> num ;
	
	cout << "The multiplication table of number " << num << " is:" <<endl;
	
	for(unsigned int count =1;count <=10;count++) {
	    cout << num << " x " << count << " = " << num*count<<endl ;  
		
	}
	return 0;
}