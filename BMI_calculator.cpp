#include <iostream>
using namespace std;

int main() {
	double weight , height , BMI;
	
	cout << "Enter your weight in kg:";
	cin >> weight;
	
	cout << "Enter your height in meters";
	cin >> height ;
	
	BMI = weight / (height * height);
	
	cout << "Your BMI is:" << BMI ;
	
	if(BMI < 18.5)
	{
		cout << "\nUnderweight";
	}
	else if(BMI < 25.0)
	{
		cout << "\nNormal";
	}
	else if(BMI < 30.0)
	{
		cout << "\nOverweight";
	}
	else
	{
		cout << "\nObese";
	}
    return 0;
}