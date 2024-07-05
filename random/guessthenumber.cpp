#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; // This allows you to use names from the std namespace without explicitly qualifying them

// int main() {
//     srand(static_cast<unsigned>(time(nullptr))); // Seed the random number generator with the current time
//     int secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100

//     int guess;
//     int attempts = 0;

//     cout << "Welcome to the Number Guesser game!" << endl; // Print a welcome message
//     cout << "I have selected a random number between 1 and 100. Try to guess it." << endl; // Provide instructions to the user

//     while (true) { // Start an infinite loop
//         cout << "Enter your guess: "; // Prompt the user to enter a guess
//         cin >> guess; // Read the user's input and store it in the 'guess' variable
//         attempts++; // Increment the attempts counter

//         if (guess < secretNumber) {
//             cout << "Too low! Try again." << endl; // Provide feedback if the guess is too low
//         } else if (guess > secretNumber) {
//             cout << "Too high! Try again." << endl; // Provide feedback if the guess is too high
//         } else {
//             cout << "Congratulations! You guessed the secret number " << secretNumber << " in " << attempts << " attempts." << endl; // Display a congratulatory message with the number of attempts
//             break; // Exit the loop since the user guessed correctly
//         }
//     }

//     return 0; // Return 0 to indicate successful program execution
// }




int main() {
    srand(static_cast<unsigned>(time(nullptr))); // Seed the random number generator with the current time
    int secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100

    int minRange = 1;
    int maxRange = 100;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guesser game!" << endl;
    cout << "I have selected a random number between 1 and 100. Try to guess it." << endl;

    while (true) {
        guess = (minRange + maxRange) / 2; // Use binary search to make a guess
        attempts++;

        cout << "Is the number " << guess << "? (Enter 'h' for too high, 'l' for too low, or 'c' for correct): ";
        char response;
        cin >> response;

        if (response == 'c') {
            cout << "Congratulations! You guessed the secret number " << secretNumber << " in " << attempts << " attempts." << endl;
            break;
        } else if (response == 'h') {
            maxRange = guess - 1; // Adjust the maximum range
        } else if (response == 'l') {
            minRange = guess + 1; // Adjust the minimum range
        } else {
            cout << "Invalid input. Please enter 'h', 'l', or 'c'." << endl;
        }
    }

    return 0;
}
