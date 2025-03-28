#include <iostream>
using namespace std;

int main() {
	
    int num;
    cout << "Enter number: ";
    cin >> num;
    
    for(int i=1;i<=num;i++){
    	for(int j=num - i;j>=1;j--)    cout <<"*";	
    	for(int k=1;k<=i;k++)          cout << k;
    	for(int l=i-1;l>=1;l--)		   cout << l;
		cout << "\n";
	}
	return 0;
}