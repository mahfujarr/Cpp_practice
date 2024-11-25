#include <iostream>
using namespace std;

bool isLeapYear(int y)
{
    return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
}

int main()
{
    int x;
    cout << "Enter a year : ";

    cin >> x;
    if (isLeapYear(x))
    {
        cout << x << " is a leap year.";
    }
    else
    {
        cout << x << " is not a leap year.";
    }
    return 0;
}