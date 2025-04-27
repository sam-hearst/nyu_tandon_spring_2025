#include <iostream>
using namespace std;

int main() {
    int posInt1;
    int posInt2;

    cout << "Please enter two positive integers, separated by a space:" << endl;
    cin>>posInt1>>posInt2;

    cout<<posInt1<<" + "<<posInt2<<" = "<<(posInt1 + posInt2)<<endl;
    cout<<posInt1<<" - "<<posInt2<<" = "<<(posInt1 - posInt2)<<endl;
    cout<<posInt1<<" * "<<posInt2<<" = "<<(posInt1 * posInt2)<<endl;
    cout<<posInt1<<" / "<<posInt2<<" = "<<((double)posInt1 / (double)posInt2)<<endl;
    cout<<posInt1<<" div "<<posInt2<<" = "<<(posInt1 / posInt2)<<endl;
    cout<<posInt1<<" mod "<<posInt2<<" = "<<(posInt1 % posInt2)<<endl;

    return 0;
}
