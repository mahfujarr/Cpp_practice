#include <iostream>
using namespace std;
class Employee
{
private:
    string name, date;
    int salary;
public:
    void getInfo(int x)
    {
        cout << "Details of Employee " << x + 1 << endl;
        cout << "Enter the name of employee: ";
        getline(cin, name);
        cout << "Enter joining date: ";
        getline(cin, date);
        cout << "Enter the salary: ";
        cin >> salary;
        cin.ignore();
        cout << "=======================================" << endl;
    }
    void displayInfo()
    {
        cout << "Employee name: " << name << endl;
        cout << "Joining date : " << date << endl;
        cout << "Salary: " << salary << endl;
        cout << "---------------------------------------" << endl;
    }
};
int main()
{
    const int empNum = 10;
    Employee employees[empNum];
    for (int i = 0; i < empNum; i++)
        employees[i].getInfo(i);
    for (int i = 0; i < empNum; i++)
        employees[i].displayInfo();
}