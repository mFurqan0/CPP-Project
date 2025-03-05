#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
    int x, y;
    
    cout << "Enter value of x:" ;
    cin >> x ;

    cout << "Enter value of y:" ;
    cin >> y ;
    

    double distance = sqrt(x * x + y * y);

    cout << "Euclidean distance between X and Y is:" << distance ;
    
    return 0;
}