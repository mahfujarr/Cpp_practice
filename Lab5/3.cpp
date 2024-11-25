#include <iostream>

using namespace std;

class Student
{
public:
    double height;

    void inputHeight()
    {
        cout << "Enter the height of the student (in cm): ";
        cin >> height;
    }
};

int main()
{
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    Student students[numStudents];

    for (int i = 0; i < numStudents; ++i)
    {
        students[i].inputHeight();
    }

    double totalHeight = 0;
    for (int i = 0; i < numStudents; i++)
    {
        totalHeight += students[i].height;
    }

    double averageHeight = totalHeight / numStudents;

    cout << "Average height of the class: " << averageHeight << " cm" << endl;

    return 0;
}