#include <iostream>
using namespace std;
string EngRep(int a)
{
    if (a == 1)
        return "one";
    else if (a == 2)
        return "two";
    else if (a == 3)
        return "three";
    else if (a == 4)
        return "four";
    else if (a == 5)
        return "five";
    else if (a == 6)
        return "six";
    else if (a == 7)
        return "seven";
    else if (a == 8)
        return "eight";
    else if (a == 9)
        return "nine";
    else
        return "zero";
}

int main()
{
    int x, y;
    cout << "Input the interval: \nFrom -> ";
    cin >> x;
    cout << "To -> ";
    cin >> y;
    for (int i = x; i <= y; i++)
    {
        if (i >= 1 && i <= 9)
        {
            cout << EngRep(i) << endl;
        }
        else if (i % 2 == 0)
        {
            cout << "Even\n";
        }
        else if (i % 2 != 0)
        {
            cout << "Odd\n";
        }
    }
}