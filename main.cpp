/*
 *Developer: Huan Ai
 *Date: 1/25/2025
 *Purpose: Projct 1 for CS210 @ SNHU
 *
 */


#include <iostream> // Includes the iostream library for input and output operations
#include "ClockFunctions.h" // Includes the header file where function declarations are defined

using namespace std; // Uses the standard namespace to avoid prefixing 'std::' for standard library functions

int main() {
    // Declare variables to hold hours, minutes, seconds, and the user's menu choice
    int hours;
    int minutes;
    int seconds;
    int choice;

    initializeClocks(hours, minutes, seconds);
    displayMenu();
    cout << "Enter your choice: ";
    cin >> choice;

    while (choice != 4) {  // Keep asking until user chooses 4 to exit
        if (choice == 1) {
            // Add 1 hour
            addOneHour(hours);
        }
        else if (choice == 2) {
            // Add 1 minute
            addOneMinute(hours, minutes);
        }
        else if (choice == 3) {
            // Add 1 second
            addOneSecond(hours, minutes, seconds);
        }
        else if (choice == 4) {
            cout << "Exiting program..." << endl;
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }

        // Display updated clock and menu after action
        displayClocks(hours, minutes, seconds);
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
    }

    return 0;
}
