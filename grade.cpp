#include<iostream>
using namespace std;
int main() {
	int computerScience ;
	char A , B , C , D , E;
	
	A = 'A';
	B = 'B';
	C = 'C';
	D = 'D';
	F = 'F';
	
	
	cout <<"Enter marks of ComputerScience:";
	cin >> computerScience;
	
	if(computerScience >100)
	{
		cout << "Error!";
	}
	else if(computerScience >=90 && computerScience <=100)
	{
		cout << "Your grade is:" << ' ' << A ;
	}
	
	else if(computerScience >=80 && computerScience <=89)
	{
		cout << "Your grade is:" << ' ' << B ;
	}
	else if(computerScience >=70 && computerScience <=79)
	{
		cout << "Your grade is:" << ' ' << C ;
	}
	else if(computerScience >=60 && computerScience <=69)
	{
		cout << "Your grade is:" << ' ' << D ;
	}
	else if(computerScience >=0 && computerScience <=59)
	{
		cout << "Your grade is:" << ' ' << F ;
	}
	return 0;
}