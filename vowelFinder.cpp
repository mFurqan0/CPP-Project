#include<iostream>
#include<cctype>
using namespace std;
int main() {
	char letter , lowerLetter;
	
	cout << "Enter a letter:";
	cin >> letter;
	
	if(!isalpha(letter)) {
		cout << "Error! The letter entered was not an aplhabet.";
		return 0;
	}
	
	
	lowerLetter = tolower(letter);
			
			
	if(lowerLetter=='a'||lowerLetter=='e'||lowerLetter=='i'||lowerLetter=='o'||lowerLetter=='u') {
		cout << "The Entered Letter " << letter   << " is a vowel" ;	
	}
	else
	{
		cout << "The Entered Letter " << letter << " is a consonant" ;
	}

	return 0;
}

