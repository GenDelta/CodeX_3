//question 2:
#include <iostream>
using namespace std;    

enum Days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int calculateDaysRemaining(Days today) {
    // Implement a function that calculates and returns the
    // number of days remaining in the week using the Days enum.
    return 6 - today; // Assuming Sunday is the start of the week
}

int main() {
    Days currentDay = Wednesday;
    int daysRemaining = calculateDaysRemaining(currentDay);
    cout << "Days remaining in the week: " << daysRemaining <<endl;
    return 0;
}