#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number to show it's multiplication table: ";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}