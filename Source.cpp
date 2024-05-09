#include <iostream>
#include <windows.h> // Sleep is used in Windows for delay
#include <stdlib.h>  // system() function for cls (clear screen)
#include <iomanip>   // for formatted output

using namespace std;

void displayTime(int hours, int minutes, int seconds) {
    system("cls"); // Clear screen for Windows

    // Displaying time with leading zeros
    cout << setfill('0') << setw(2) << hours << ":"
        << setfill('0') << setw(2) << minutes << ":"
        << setfill('0') << setw(2) << seconds << endl;
}

int main() {
    int hour = 0;
    int min = 0;
    int sec = 0;

    displayTime(hour, min, sec);

    while (true) {
        Sleep(1000); // Sleep for 1 second

        sec++;

        if (sec > 59) {
            min++;
            sec = 0;
        }

        if (min > 59) {
            hour++;
            min = 0;
            sec = 0;
        }

        displayTime(hour, min, sec);
    }

    return 0; // Never reached, but good practice to return from main
}
