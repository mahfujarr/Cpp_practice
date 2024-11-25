#include <iostream>
using namespace std;
void squareElements(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] *= arr[i];
    }
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int numbers[n];
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    cout << "Original array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    squareElements(numbers, n);
    cout << "Squared array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}