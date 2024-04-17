
// define constants
const int SECONDS_PER_MINUTE = 60;
const int MINUTES_PER_HOUR = 60;
const int HOURS_PER_DAY = 24;

// define a structure to represent time
struct Time {
	int hours;		// 0 .. 23
	int minues;		// 0 .. 59
	int seconds;	// 0 .. 59
};

// the function converts the time value to a standard form
void standardize(Time &time)
{

}

// the function inputTimeArray reads a sequence of time values, 
// stores them in an array of structures and then standardizes
// the function returns a pointer to the array 
// of the canonicalized time values
Time* inputTimeArray(int &n)
{
	
}

// the function prints the array of time values 
// in the standard form
void printTimeArray(Time* timeArray, int size)
{

}

void printTime(const Time &time)
{

}


int main()
{
	int n = 0;
	Time* times = inputTimeArray(n);
	printTimeArray(times, n);
}
