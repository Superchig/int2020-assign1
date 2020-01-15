#include <iostream>

using namespace std;

int main()
{
    int cap; // The maximum room capacity
    cout << "Enter maximum room capacity: ";
    cin >> cap;

    int ppl; // The number of people attending the meeting
    cout << "Enter the number of people attending the meeting: ";
    cin >> ppl;

    // If the the number of people is less than or equal to the maximum room capacity
    if (ppl <= cap) 
    {
        cout << "It is legal to hold the meeting." << endl;
        cout << (cap - ppl) << " additional people can attend." << endl;
    }
    else
    {
        cout << "The meeting cannot be held as planned due to fire regulations." << endl;
        cout << (ppl - cap) << " people must be excluded in order to meet fire regulations." << endl;
    }
    
    return 0;
}