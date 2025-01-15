#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void sort(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
}

void sort(vector<double> &arr)
{
    sort(arr.begin(), arr.end());
}

void sort(vector<string> &arr)
{
    sort(arr.begin(), arr.end());
}

int main()
{
    vector<int> intArr = {5, 3, 8, 1};
    vector<double> floatArr = {5.5, 3.3, 8.8, 1.1};
    vector<string> strArr = {"banana", "apple", "cherry", "date"};

    sort(intArr);
    sort(floatArr);
    sort(strArr);

    cout << "Sorted integers: ";
    for (int x : intArr)
        cout << x << " ";
    cout << "\nSorted doubles: ";
    for (double x : floatArr)
        cout << x << " ";
    cout << "\nSorted strings: ";
    for (string x : strArr)
        cout << x << " ";
    return 0;
}
