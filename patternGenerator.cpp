#include <iostream>
using namespace std;

int main() {
	int num;
	
	cout << "Enter value of num:";
	cin>>num;

	for(int i=1;i<=num;i++)
	{
		int sum=0;
		
		for(int j=1;j<=i;j++) {
		
		
		cout <<j;
		sum += j;
		
		if(j<i)
			cout << "+";
		}
		
 	cout << "="<<sum;
 	cout << "\n";

	}	

	return 0;

}