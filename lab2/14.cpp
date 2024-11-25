#include <iostream>
using namespace std;
int input(int arr[])
{
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    return 0;
}
int display(int arr[])
{
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}

int main()
{
    int sum, index[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, arr[10];
    cout << "Enter 10 elements of the array: \n";
    input(arr);
    cout << "The index is: ";
    for (int i = 0; i < 10; i++)
    {
        cout << index[i] << "  ";
        if (arr[i] > 10)
        {
            cout << " ";
        }
    }
    cout << "\nThe Array is: ";
    display(arr);
    for (int i = 0; i < 10; i++)
    {
        if (index[i] % 2 != 0 && arr[i] % 2 != 0)
        {
            sum += arr[i];
            arr[i] = 0;
        }
    }
    cout << endl;
    cout << "\nThe Array is: ";
    display(arr);
    cout << "\nSummation = " << sum;
}