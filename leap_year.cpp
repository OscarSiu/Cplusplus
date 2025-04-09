#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (year < 1000 || year > 9999)
    {
        cout << "Invaid entry" << endl;
    }
    // Check if the year is divisible by 4
    else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}