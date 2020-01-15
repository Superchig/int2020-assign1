#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    const double METRIC_TON = 35273.92; // Metric ton in ounces

    cout << "Input weight in ounces: ";
    double weight; // In ounces
    cin >> weight;

    cout << "Weight in metric tons: " << (weight / METRIC_TON) << endl;

    // Number of boxes needed to yield one metric ton of cereal
    // Is an int because the number of boxes should be a whole number
    int boxes = (METRIC_TON / weight) + 1; // Add 1 to round up after floating-point number is truncated
    cout << "Number of boxes needed to yield one metric ton: " << boxes << endl;

    return 0;
}