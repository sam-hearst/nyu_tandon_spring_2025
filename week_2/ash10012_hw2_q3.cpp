#include <iostream>
using namespace std;

const int HOURS_IN_A_DAY = 24;
const int MINUTES_IN_AN_HOUR = 60;
int main() {
    int daysJohn;
    int hoursJohn;
    int minsJohn;
    int daysBill;
    int hoursBill;
    int minsBill;
    int totalDays;
    int totalHours;
    int totalMins;
    int spillOver;

    cout << "Please enter the number of days John has worked: ";
    cin>>daysJohn;

    cout << "Please enter the number of hours John has worked: ";
    cin>>hoursJohn;

    cout << "Please enter the number of minutes John has worked: ";
    cin>>minsJohn;


    cout << "Please enter the number of days Bill has worked: ";
    cin>>daysBill;

    cout << "Please enter the number of hours Bill has worked: ";
    cin>>hoursBill;

    cout << "Please enter the number of minutes Bill has worked: ";
    cin>>minsBill;

    
    totalMins = (minsJohn + minsBill) % MINUTES_IN_AN_HOUR;
    spillOver = (minsJohn + minsBill) / MINUTES_IN_AN_HOUR;

    totalHours = (hoursJohn + hoursBill + spillOver) % HOURS_IN_A_DAY;
    spillOver = (hoursJohn + hoursBill + spillOver) / HOURS_IN_A_DAY;

    totalDays = daysJohn + daysBill + spillOver;


    cout << "The total time both of them worked together is: "<<totalDays<<" days, "
    <<totalHours<<" hours and "<<totalMins<<" minutes."<<endl;

    return 0;
}
