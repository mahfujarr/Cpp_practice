#include <iostream>
using namespace std;
void discount(float *arr, int number)
{
    arr[number] -= arr[number] * 0.1;
}
int main()
{
    int n;
    float price[n];
    cout << "Enter the number of Products: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the price of product " << i + 1 << ": " << endl;
        cin >> price[i];
        discount(price, i);
        cout << "Updated price of the product " << i + 1 << " is: " << price[i] << endl;
    }
}