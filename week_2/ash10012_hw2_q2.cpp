#include <iostream>
using namespace std;

int main() {
    int numDollars;
    int numCents;
    int currTotalCents;
    int numQuarters;
    int numDimes;
    int numNickels;
    int numPennies;

    cout << "Please enter your amount in the format of dollars and cents separated by a space:" << endl;
    cin>>numDollars>>numCents;

    cout <<numDollars<<" dollars and "<<numCents<<" cents are:"<<endl;

    currTotalCents = (numDollars * 100) + numCents;
    numQuarters = currTotalCents / 25;
    currTotalCents = currTotalCents % 25;

    numDimes = currTotalCents / 10;
    currTotalCents = currTotalCents % 10;

    numNickels = currTotalCents / 5;
    currTotalCents = currTotalCents % 5;

    numPennies = currTotalCents / 1;

    cout <<numQuarters<<" quarters, "<<numDimes<<" dimes, "<<numNickels<<" nickels and "<<numPennies<<" pennies "<<endl;

    return 0;
}
