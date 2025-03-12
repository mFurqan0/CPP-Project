#include <iostream>
using namespace std;
int main()
{
	int var1 , var2, swap;
	
	cout << "Enter the value of var1 and var2:";
	cin >> var1 >> var2;
	
	swap = var1;
	var1 = var2;
	var2 = swap;
	
	cout << "\nAfter swapping:";
	cout << "\nvar1=" << var1 ;
	cout << "\nvar2=" << var2 ;
	
	return 0;
}