#include <iostream>
using namespace std;
int printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
int main()
{
    int size, temp, arr[] = {1, 8, 7, 6, 5, 2, 3, 4, 10, 9};
    size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printArray(arr, size);
    cout << endl
         << "The 3rd largest element is: " << arr[size - 3];
}