#include <iostream>

using namespace std;

int main()
{
    // 40 hours per week is the normal amount to work
    const int NORM_HOURS = 40; 
    // The employee is paid $16.00 per hour for regular hours worked
    const double PAY_RATE = 16.0;
    // The overtime rate is one and one-half times the normal pay rate
    const double OVER_RATE = PAY_RATE * 1.5;

    int hoursWorked; // The number of hours worked in a week
    cout << "Enter number of hours worked in a week: ";
    cin >> hoursWorked;

    double gross_pay;
    if (hoursWorked > NORM_HOURS) // If overtime was worked
    {
        gross_pay += NORM_HOURS * PAY_RATE;
        gross_pay += (hoursWorked - NORM_HOURS) * OVER_RATE;
    }
    else // Overtime was not worked
    {
        gross_pay += NORM_HOURS * PAY_RATE;
    }

    cout << "Gross pay:                       $" << gross_pay << endl;

    // Amount paid in social security tax
    const double social = gross_pay * 0.06;
    cout << "Social Security tax withholding: $" << social << endl;
    // Amount paid in federal income tax
    const double federal = gross_pay * 0.14;
    cout << "Federal income tax withholding:  $" << federal << endl;
    // Amount paid in state income tax
    const double state = gross_pay * 0.05;
    cout << "State income tax withholding:    $" << state << endl;
    // Amount paid for medical insurance
    const double med_ins = 10;
    cout << "Medical insurance withholding:   $" << med_ins << endl;

    cout << "Net pay:                         $" << (gross_pay - social - federal - state - med_ins) << endl;

    return 0;
}