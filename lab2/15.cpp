#include <iostream>
using namespace std;
int main()
{
    char combinedLine[] = {'M', 'M', 'W', 'W', 'M', 'M', 'M', 'M', 'W', 'M'};
    char men[10], women[10];
    int mCount = -1, wCount = -1;
    for (int i = 0; i < 10; i++)
    {
        if (combinedLine[i] == 'M')
        {
            mCount++;
            men[mCount] = combinedLine[i];
        }
        else
        {
            wCount++;
            women[wCount] = combinedLine[i];
        }
    }
    cout << "\nCombined Line -> ";
    for (int i = 0; i <= 10; i++)
        cout << combinedLine[i] << " ";

    cout << "\nDisarranged Line: \nMen   -> ";
    for (int i = 0; i <= mCount; i++)
        cout << men[i] << " ";

    cout << "\nWomen -> ";
    for (int i = 0; i <= wCount; i++)
        cout << women[i] << " ";
}