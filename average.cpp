#include <iostream>
using namespace std ;
int main() {
	double Total , Average , Physics , Chemistry , Computer , Maths , English ;
	
	cout << "Enter Marks of Physics:" ;
	cin >> Physics ;
	
	cout << "Enter Marks of Chemistry:" ;
	cin >> Chemistry ;
	
	cout << "Enter Marks of Computer:" ;
	cin >> Computer ;
	
	cout << "Enter Marks of Maths:" ;
	cin >> Maths ;
	
	cout << "Enter Marks of English:" ;
	cin >> English ;
	
	Total = Physics + Chemistry + Maths + Computer + English ;
	Average = Total / 5 ;
	
	cout << "The total marks of 5 subjects are:" << Total << "\n" ;
	cout << "The Average is:" << Average <<endl ;
	
	return 0;
	
	
}
