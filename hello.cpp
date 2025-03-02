#include <iostream>
#include <string>
using namespace std ;
int main() {
	string Name;
	int age;
	
	cout << "Please! Enter Your Name:" ;
	getline(cin , Name);
	
	cout << "Enter Your Age:" ;
	cin >> age ;
	
	cout << "Hello" << " " <<  Name << " " <<  "Your Age Is:" << age <<endl ;
	
	return 0;
}
