#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    double salary;

public:
    Employee(string n, double s) : name(n), salary(s) {}

    double getSalary() const { return salary; }

    Employee operator+(double bonus)
    {
        return Employee(name, salary + bonus);
    }
};

int main()
{
    Employee emp("John", 5000);
    Employee empWithBonus = emp + 1000;
    cout << "Salary after bonus: " << empWithBonus.getSalary() << endl;
    return 0;
}
