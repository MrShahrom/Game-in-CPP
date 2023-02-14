#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Choose a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int tries = 0;
    int guess;

    cout << "Guess the number between 1 and 100: ";
    cin >> guess;

    while (guess != secretNumber) {
        if (guess > secretNumber) {
            cout << "Your guess was too high. Try again: ";
        }
        else {
            cout << "Your guess was too low. Try again: ";
        }

        cin >> guess;
        tries++;
    }

    cout << "You guessed the number! It took you " << tries << " tries." << endl;
    return 0;
}
