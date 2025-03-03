#include "ClockFunctions.h" // Includes the header file for function declarations
#include <iostream> // Includes the iostream library for input and output operations
#include <iomanip> // Includes the iomanip library for setting output formatting (like width and fill)

using namespace std; // Uses the standard namespace to avoid prefixing 'std::' for standard library functions

// Function to initialize the clock with user input for hours, minutes, and seconds
void initializeClocks(int& hours, int& minutes, int& seconds) {
    cout << "Enter initial hour in a 12-hour clock format: ";
    cin >> hours;
    cout << "Enter initial minute in a 12-hour clock format: ";
    cin >> minutes;
    cout << "Enter initial hour in a 12-hour clock format: ";
    cin >> seconds;
}

// Function to add one hour to the current time
void addOneHour(int& hours) {
    hours = (hours + 1) % 24;
}

// Function to add one minute to the current time
void addOneMinute(int& hours, int& minutes) {
    minutes = (minutes + 1) % 60;
    if (minutes == 0) {
        addOneHour(hours);
    }
}

// Function to add one second to the current time
void addOneSecond(int& hours, int& minutes, int& seconds) {
    seconds = (seconds + 1) % 60;
    if (seconds == 0) {
        addOneMinute(hours, minutes);
    }
}

// Function to display the current time in both 12-hour and 24-hour formats
void displayClocks(int hours, int minutes, int seconds) {
    // 12-hour clock
    int hour12 = (hours % 12 == 0) ? 12 : hours % 12;
    cout << "**************************" << endl;
    cout << "*     12-Hour Clock      *" << endl;
    cout << "*     " << setw(2) << setfill('0') << hour12 << ":"
        << setw(2) << setfill('0') << minutes << ":"
        << setw(2) << setfill('0') << seconds << (hours >= 12 ? " PM" : " AM") << "     *" << endl;
    cout << "**************************" << endl;

    // 24-hour clock
    cout << "**************************" << endl;
    cout << "*     24-Hour Clock      *" << endl;
    cout << "*     " << setw(2) << setfill('0') << hours << ":"
        << setw(2) << setfill('0') << minutes << ":"
        << setw(2) << setfill('0') << seconds << "     *" << endl;
    cout << "**************************" << endl;
}

// Function to display the menu options for the user to interact with
void displayMenu() {
    cout << "**************************" << endl;
    cout << "* 1 - Add One Hour       *" << endl;
    cout << "* 2 - Add One Minute     *" << endl;
    cout << "* 3 - Add One Second     *" << endl;
    cout << "* 4 - Exit Program       *" << endl;
    cout << "**************************" << endl;
}
