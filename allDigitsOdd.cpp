#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    bool all_odd;
    
    while(true) {
	
    cout << "Enter a number:";
    cin>> num;
    
    all_odd = true;
   
    if(num == -1) break;   
    
    int copy_num = num;
       
    	while(copy_num != 0) {
    	
    		int digits = copy_num % 10;
    	
    		if(digits%2 == 0) {
    		all_odd = false;
    		break;
    		}
    		copy_num /= 10;
		}
	cout << (all_odd ? "true" : "false") << endl;	
	}
	
    return 0;
}
