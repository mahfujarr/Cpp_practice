#include <iostream>
using namespace std;
int main()
{
    int x, sum = 0;
    cout << "Input an integer number: ";
    cin >> x;
    while (x != 0)
    {
        sum = sum + (x % 10);
        x = x / 10;
    }
    cout << "The sum of those numbers is: " << sum;
}