#include <iostream>
using namespace std;

const int CENTS_IN_A_DOLLAR = 100;

int main() {
    int numQuarters;
    int numDimes;
    int numNickels;
    int numPennies;
    int totalCents;
    int numDollars;
    int modCents;

    cout << "Please enter number of coins:" << endl;

    cout << "# of quarters:";
    cin>>numQuarters;

    cout << "# of dimes:";
    cin>>numDimes;

    cout << "# of nickels:";
    cin>>numNickels;

    cout << "# of pennies:";
    cin>>numPennies;

    totalCents = (25 * numQuarters) + (10 * numDimes) + (5 * numNickels) + (1 * numPennies);
    numDollars = totalCents / CENTS_IN_A_DOLLAR;
    modCents = totalCents % CENTS_IN_A_DOLLAR;

    cout << "The total is "<<numDollars<<" and "<<modCents<<" cents"<<endl;
    
    return 0;
}


