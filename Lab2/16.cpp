#include <iostream>
using namespace std;
int main()
{
    int sum, arr[] = {1, 5, 4, 6, 8, 7, 9, 10, 11, 3};
    bool found;
    cout << "Enter the Sum: ";
    cin >> sum;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << arr[i] << " + " << arr[j] << " = " << sum << endl;
                found = true;
                goto L;
            }
        }
    }
L:
    if (!found)
    {
        cout << "There's no pair of numbers equal to your number.";
    }
}
