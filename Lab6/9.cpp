#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    int employeeID;
    string name;
    double salary;
    Employee()
    {
        employeeID = 0;
        name = "";
        salary = 0.0;
    }
    Employee(int id, string n, double s)
    {
        employeeID = id;
        name = n;
        salary = s;
    }
    Employee(const Employee &other)
    {
        employeeID = other.employeeID;
        name = other.name;
        salary = other.salary;
    }
    void modifyDetails(int newID, string newName, double newSalary)
    {
        employeeID = newID;
        name = newName;
        salary = newSalary;
    }
    void displayDetails()
    {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee originalEmployee(101, "Mahfujar", 50000.0);
    Employee duplicateEmployee(originalEmployee);

    cout << "Original Employee Details:" << endl;
    originalEmployee.displayDetails();

    cout << "\nDuplicate Employee Details (Before Modification):" << endl;
    duplicateEmployee.displayDetails();
    duplicateEmployee.modifyDetails(102, "Mahfu", 60000.0);
    cout << "\nDuplicate Employee Details (After Modification):" << endl;
    duplicateEmployee.displayDetails();
    return 0;
}