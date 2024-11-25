#include <iostream>
using namespace std;
int fact(int a)
{
    if (a == 0)
    {
        return 1;
    }
    else
    {
        return a * fact(a - 1);
    }
}
int main()
{
    int x;
    cout << "Enter a number to calculate Factorial: ";
    cin >> x;
    cout << "The factorial is: " << fact(x);
}