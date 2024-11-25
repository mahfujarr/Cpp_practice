#include <iostream>
using namespace std;
int main()
{
    int z = 10, x = 0, y = 1, fib;
    cout << x << " " << y << " ";
    for (int i = 3; i <= z; i++)
    {
        fib = x + y;
        x = y;
        y = fib;
        cout << fib << " ";
    }
    return 0;
}