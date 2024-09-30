#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    // Generate random number
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    bool isGuessed = false;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have chosen a number between 1 and 100. Try to guess it!" << endl;

    while (!isGuessed) {
        // Get user's guess
        cout << "Enter your guess: ";
        cin >> guess;
        cin.ignore(); // Clear the input buffer

        attempts++;

        // Check if the guess is correct
        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
            isGuessed = true;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }
    }

    return 0;
}
