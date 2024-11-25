#include <iostream>
using namespace std;

int fib(int &x)
{
    int f = 0, s = 1;
    cout << f << " " << s << " ";
    for (int i = 0; i < x - 1; i++)
    {
        int t = f + s;
        f = s;
        s = t;
        cout << t << " ";
    }
    cout << endl;
    return s;
}

int main()
{
    int a;
    cout << "Enter the number of terms: ";
    cin >> a;
    cout << "The series to " << a << " terms is: ";
    fib(a);
}