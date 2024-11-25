#include <iostream>
using namespace std;
float average(int *scores, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += scores[i];
    }
    return (float)sum / n;
}
int main()
{
    int n, scores[n];
    cout << "Enter the number of students: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << "'s test score: ";
        cin >> scores[i];
    }
    cout << "The average score is: " << average(scores, n) << endl;
    return 0;
}