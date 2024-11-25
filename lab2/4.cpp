#include <iostream>
using namespace std;
int main()
{
    int count = 0, age[10];
    cout << "Enter the ages of 10 person: \n";
    for (int i = 0; i < 10; i++)
    {
        cin >> age[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (age[i] > 50 && age[i] < 60)
        {
            count++;
        }
    }
    cout << "The number of persons in the age group 50 to 60 are: " << count;
}