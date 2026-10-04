#include <iostream>
using namespace std;

/* Exercise 1: Time Calculator
 Write a function that receives a number of seconds and does the following:
 ● There are 86400 seconds in a day. If the number of seconds entered by the user
     is greater than or equal to 86400, the program should display the number of days
     in that many seconds.
 ●  There are 3600 seconds in an hour. If the number of seconds entered by the user
     is less than 86400, but is greater than or equal to 3600, the program should
     display the number of hours in that many seconds.
 ● There are 60 seconds in a minute. If the number of seconds entered by the user
     is less than 3600, but is greater than or equal to 60, the program should display
     the number of minutes in that many seconds. 
*/
int main() {
    int numSeconds;
    cout << "Enter the number of seconds: ";
    cin >> numSeconds;

    if (numSeconds >= 86400) {
        int days = numSeconds / 86400;
        cout << "The number of days in " << numSeconds << " seconds is: " << days << endl;
    }
    else if (numSeconds >= 3600) {
        int hours = numSeconds / 3600;
        cout << "The number of hours in " << numSeconds << " seconds is: " << hours << endl;
    }
    else if (numSeconds >= 60) {
        int minutes = numSeconds / 60;
        cout << "The number of minutes in " << numSeconds << " seconds is: " << minutes << endl;
    }
    else {
        cout << "The number of seconds is less than a minute." << endl;
    }
}
