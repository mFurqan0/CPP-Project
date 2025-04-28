#include<iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter a positive integer(Less Than 1000):";
    cin >> n;
    
    if(n<=0 || n >=1000) {
        cout << "Invalid Input!Please Enter Integer Greater than O and less than 1000";
        return 1;
    }
        
        
    for(int i=1;i<=n;i++) {
        string suffix;
        if(i%10==1 && i%100==11) {
            suffix = "st";
        }
        else if(i%10==2 && i%100==12) {
            suffix = "nd";
        }
        else if(i%10==3 && i%100==13) {
            suffix = "rd";
        }
        else {
            suffix = "th";
        }
        
        cout << i << suffix << " Hello" << endl;
    }
    
    return 0;
}