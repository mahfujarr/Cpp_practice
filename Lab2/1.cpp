#include <iostream>
using namespace std;
int reverse(int a)
{
    int rev = 0, rem = 0;
    while (a != 0)
    {
        rem = a % 10;
        rev = (rev * 10) + rem;
        a /= 10;
    }
    return rev;
}

int main()
{
    int x;
    cout << "Enter an integer to reverse: ";
    cin >> x;
    cout << "Reversed number is: " << reverse(x);
    return 0;
}