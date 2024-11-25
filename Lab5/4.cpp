#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    string name;
    bool isPresent;

    void markPresent()
    {
        isPresent = true;
    }

    void displayDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Attendance: " << (isPresent ? "Present" : "Absent") << endl;
    }
};

int main()
{
    Student students[5];

    students[0].name = "Alice";
    students[1].name = "Bob";
    students[2].name = "Charlie";
    students[3].name = "David";
    students[4].name = "Eve";

    students[0].markPresent();
    students[2].markPresent();
    students[4].markPresent();

    cout << "Students who attended the event:\n";
    for (int i = 0; i < 5; i++)
    {
        if (students[i].isPresent)
        {
            students[i].displayDetails();
            cout << endl;
        }
    }

    return 0;
}