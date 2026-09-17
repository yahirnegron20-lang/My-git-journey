#include <iostream>
using namespace std;

int main() {
    int numCandyBars;
    double pricePerCandyBar;

    cout << "Enter the number of candy bars sold: ";
    cin >> numCandyBars;
    cout << "How much does the organization charge per candy bar? ";
    cin >> pricePerCandyBar;

    double earnings = numCandyBars * pricePerCandyBar;
    cout << "Total earnings: $" << earnings;
}