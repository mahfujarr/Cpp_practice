#include <iostream>
using namespace std;
void updatedSalary(float* arr, int number)
{
    arr[number] *= 1.1;
}
int main()
{
    int n;
    float salary[n];
    cout<< "Enter the number of Employees: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the salary of Employee "<< i+1 << ": "<<endl;
        cin>> salary[i];
        updatedSalary(salary, i);
        cout << "Updated salary of employee " << i+1 << " is: " << salary[i] <<endl;
    }    
}