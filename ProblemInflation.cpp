#include <iostream>

using namespace std;

int main()
{
    double cost; // The cost of item in the current year
    cout << "Input cost of item: ";
    cin >> cost;

    int years; // The number of years from now that the item will be purchased
    cout << "Input the number of years from now that the item will be purchased: ";
    cin >> years;

    double inflationPercent; // The rate of inflation as a percentage
    cout << "Input the rate of inflation (as percentage): ";
    cin >> inflationPercent;
    double inflationFrac = inflationPercent / 100.0; // The rate of inflation as a fraction

    // Adjust the cost for inflation
    for (int i = 0; i < years; ++i)
    {
        cost += (cost * inflationFrac);
    }

    cout << "Price adjusted for inflation: " << cost << endl;

    return 0;
}