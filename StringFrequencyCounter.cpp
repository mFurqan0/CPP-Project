#include <iostream>
#include<string>
using namespace std;

void frequency(string sentence) {
    
    int freq[256] = {0};
    
    for(char ch : sentence) {
        freq[(unsigned char)ch]++;
    }
    
    cout << "Character Frequencies:\n";
    
    for(int i = 0;i < 256; i++) {
        if(freq[i] > 0) {
            cout << "'" << char(i) << "' :" << freq[i] <<endl;
        }
    }
}
        
int main() {
    string sentence;
    
    cout <<"Enter a string:";
    getline(cin , sentence);
    
    frequency(sentence);
    
    return 0;
}  

