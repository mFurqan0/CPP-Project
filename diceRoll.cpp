#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	
    srand(time(0));
    
    cout << "Let's roll the dice 10 times!\n" << endl;

    for(int roll = 1; roll <= 10; roll++) {
    	
    	int dice_roll = rand() % 6 + 1;
	
				cout << "Roll " << roll << ": You rolled  " << dice_roll << " - ";

    	switch (dice_roll) {
        	case 1:
            	cout << "You need to roll better!"<<endl;
            	break;
        
        	case 2:
           		cout << "Not bad!"<<endl;
            	break;
        
        	case 3:
            	cout << "Nice Roll!"<<endl;
        		break;
        
        	case 4:
            	cout << "Bravo!"<<endl;
        		break;
        
        	case 5:
            	cout << "Great Champ! High Five"<<endl;
        		break;
        
        	case 6:
            	cout << "Congratulations! You rolled the highest number"<<endl;
        		break;
        
        	default:
            	cout << "The Dice cannot roll number above 6"<<endl;
        		break;
        }
    }

	cout << "\n\n\n-------------------GAME OVER------------------------";
	
    return 0;
}