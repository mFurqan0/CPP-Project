#include <iostream>
using namespace std;
int main()  {
	double length , width , area ;
	
	cout << "Enter length of Rectangle:";
	cin >> length;
	
	cout << "Enter width of Rectangle:";
	cin >> width;
	
	area = length * width ;
	
	cout << "The area of rectangle is:" << area <<endl ;
	
	return 0;
}
