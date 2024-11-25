#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string ID;
    double grades[4] = {85, 90, 78};
    string name;

public:
    Student(string ID, string name)
    {
        this->ID = ID;
        this->name = name;
    }
    void addGrade()
    {
        int n;
        cout << "Enter a grade to add: ";
        cin >> grades[3];
    }
    void average()
    {
        int sum = 0;
        for (int i = 0; i <= 3; i++)
        {
            sum += grades[i];
        }
        cout << "The average is: " << sum / 4 << endl;
    }
};
int main()
{
    Student student1("S001", "John Smith");
    student1.addGrade();
    student1.average();
    return 0;
}