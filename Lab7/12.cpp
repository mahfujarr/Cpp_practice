#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Marks
{
protected:
    static int rollCounter;
    int rollNumber;
    string name;
    int marks;

public:
    Marks(const string &studentName) : name(studentName), marks(0)
    {
        rollNumber = ++rollCounter;
    }

    virtual void inputMarks() = 0; // Pure virtual function
    int getMarks() const { return marks; }
    int getRollNumber() const { return rollNumber; }
    string getName() const { return name; }
};

int Marks::rollCounter = 0;

class Physics : public Marks
{
public:
    Physics(const string &studentName) : Marks(studentName) {}

    void inputMarks() override
    {
        cout << "Enter Physics marks for " << name << ": ";
        cin >> marks;
    }
};

class Chemistry : public Marks
{
public:
    Chemistry(const string &studentName) : Marks(studentName) {}

    void inputMarks() override
    {
        cout << "Enter Chemistry marks for " << name << ": ";
        cin >> marks;
    }
};

class Mathematics : public Marks
{
public:
    Mathematics(const string &studentName) : Marks(studentName) {}

    void inputMarks() override
    {
        cout << "Enter Mathematics marks for " << name << ": ";
        cin >> marks;
    }
};

int main()
{
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;
    cin.ignore(); // To ignore the newline character after entering the number

    vector<Physics> physicsStudents;
    vector<Chemistry> chemistryStudents;
    vector<Mathematics> mathStudents;

    for (int i = 0; i < numStudents; ++i)
    {
        string name;
        cout << "Enter name of student " << i + 1 << ": ";
        getline(cin, name);

        Physics physicsStudent(name);
        Chemistry chemistryStudent(name);
        Mathematics mathStudent(name);

        physicsStudent.inputMarks();
        chemistryStudent.inputMarks();
        mathStudent.inputMarks();

        physicsStudents.push_back(physicsStudent);
        chemistryStudents.push_back(chemistryStudent);
        mathStudents.push_back(mathStudent);
    }

    int totalMarks = 0;
    for (int i = 0; i < numStudents; ++i)
    {
        int studentTotal = physicsStudents[i].getMarks() + chemistryStudents[i].getMarks() + mathStudents[i].getMarks();
        totalMarks += studentTotal;
        cout << "Total marks for " << physicsStudents[i].getName() << " (Roll No: " << physicsStudents[i].getRollNumber() << "): " << studentTotal << endl;
    }

    double averageMarks = static_cast<double>(totalMarks) / numStudents;
    cout << "Average marks of the class: " << averageMarks << endl;

    return 0;
}