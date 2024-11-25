#include <iostream>
using namespace std;
void updatePoints(int points[], int purchases[], int bonus[], int size)
{
    for (int i = 0; i < size; i++)
    {
        points[i] += purchases[i] + bonus[i];
    }
}
void bonusPoints(int points[], int purchases[], int *bonus, int size)
{
    for (int i = 0; i < size; i++)
    {
        bonus[i] = purchases[i] * (points[i] / 100) / 100;
    }
}
void displayPoints(const int points[], int size)
{
    cout << "Customer points after update: ";
    for (int i = 0; i < size; i++)
    {
        cout << points[i] << " ";
    }
    cout << endl;
}
int main()
{
    const int numCustomers = 5;
    int points[numCustomers] = {100, 200, 150, 300, 250};
    int purchases[numCustomers];
    int bonus[numCustomers];
    for (int i = 0; i < numCustomers; i++)
    {
        cout << "Enter the purchace amount of customer " << i + 1 << ": ";
        cin >> purchases[i];
    }
    bonusPoints(points, purchases, bonus, numCustomers);
    updatePoints(points, purchases, bonus, numCustomers);
    displayPoints(points, numCustomers);
    return 0;
}