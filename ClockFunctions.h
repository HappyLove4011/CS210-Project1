// This is an include guard to prevent multiple inclusions of the same header file
#ifndef CLOCKFUNCTIONS_H
#define CLOCKFUNCTIONS_H

// Function declarations for ClockFunction.cpp
void initializeClocks(int& hours, int& minutes, int& seconds);
void addOneHour(int& hours);
void addOneMinute(int& hours, int& minutes);
void addOneSecond(int& hours, int& minutes, int& seconds);
void displayClocks(int hours, int minutes, int seconds);
void displayMenu();

// End of include guard
#endif
