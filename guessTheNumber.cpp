#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));
    
    int secretNumber = rand() % 101;
    int guess;
    int attempts = 0;

    cout << "I've picked a number between 0 and 100. Try to guess it!" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        }
    } while (guess != secretNumber);

    cout << "\nCongratulations! You guessed the number " << secretNumber 
         << " correctly in " << attempts << " attempts!" << endl;

    return 0;
}