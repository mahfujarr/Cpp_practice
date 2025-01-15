#include <iostream>
using namespace std;

double calculateSalary(double hourlyWage, double hoursWorked, char)
{
    return hourlyWage * hoursWorked;
}

double calculateSalary(double baseSalary, double performanceBonus)
{
    return baseSalary + performanceBonus;
}

int main()
{
    cout << "Hourly employee salary: " << calculateSalary(20.0, 40, 'H') << endl;
    cout << "Salaried employee salary: " << calculateSalary(5000.0, 1000.0) << endl;
    return 0;
}
