# Game-in-CPP

Here's a simple C++ game that generates a random number between 1 and 100, and asks the user to guess the number. 
The game will provide feedback after each guess to help the user find the correct number.

The srand(time(0)) function call seeds the random number generator with the current time, so that each time the program runs, a different random number will be generated.

The secretNumber = rand() % 100 + 1 line generates a random number between 1 and 100 using the rand() function and the modulo operator.

The do-while loop repeatedly asks the user to enter a guess and provides feedback until the correct number is guessed.

If the user's guess is higher than the random number, the game will output "Too high!" and prompt the user to guess again. 
If the guess is lower, the game will output "Too low!" and prompt the user to guess again. 
Once the user guesses the correct number, the game will output "Congratulations, you guessed the number!" and terminate.
