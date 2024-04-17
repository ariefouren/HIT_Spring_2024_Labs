// File : solution_lab_1.cpp
// The program reads a sequence of time values, 
// each consisting of three integers: hours, minutes, and seconds.
// The time values are stored in an array of structures.
// The time values are then converted to a standard form
#include <iostream>
#include <iomanip>

using namespace std;

// define constants
const int SECONDS_PER_MINUTE = 60;
const int MINUTES_PER_HOUR = 60;
const int HOURS_PER_DAY = 24;

// define a structure to represent time
typedef struct time {
    int hours, minutes, seconds;
} Time;

// the function converts the time value to a standard form
void standardize(Time& time) {
    time.minutes = time.minutes + time.seconds / SECONDS_PER_MINUTE;
    time.seconds %= 60;

    time.hours = time.hours + time.minutes / MINUTES_PER_HOUR;
    time.minutes %= MINUTES_PER_HOUR;

    time.hours %= HOURS_PER_DAY;
}

// the function inputTimeArray reads a sequence of time values, 
// stores them in an array of structures and then standardizes
// the function returns a pointer to the array 
// of the canonicalized time values
Time* inputTimeArray(int& n) {
    Time* result;
    cout << "Enter the number of values:" << endl;
    cin >> n;
    result = new Time[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter hour, minutes, seconds: " << endl;
        cin >> result[i].hours >> result[i].minutes >> result[i].seconds;
        standardize(result[i]);
    }
    return result;
}

// the function prints the time in the standard format
void printTime(const Time& time)
{
    cout << (time.hours < 10 ? "0" : "") << time.hours << ":"
        << (time.minutes < 10 ? "0" : "") << time.minutes << ":"
        << (time.seconds < 10 ? "0" : "") << time.seconds << endl;

}
// the function prints the array of time values 
// in the standard form
void printTimeArray(Time timesArr[], int n) {
    for (int i = 0; i < n; i++) {
        printTime(timesArr[i]);
    }
}

int main()
{
    int n = 0;
    Time* times = inputTimeArray(n);
    printTimeArray(times, n);
}
