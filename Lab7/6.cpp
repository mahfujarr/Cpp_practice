#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;
};

class Student
{
protected:
    int studentID;
    double GPA;
};

class StudentAthlete : protected Person, protected Student
{
public:
    string sportsPlayed;
    StudentAthlete()
    {
        cout << "Student Name: ";
        cin >> name;
        cout << "Student Age: ";
        cin >> age;
        cout << "Student ID: ";
        cin >> studentID;
        cout << "Student GPA: ";
        cin >> GPA;
        cout << "Sports Played: ";
        cin >> sportsPlayed;
    }
    ~StudentAthlete()
    {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Student GPA: " << GPA << endl;
        cout << "Sports Played: " << sportsPlayed << endl;
    }
};

int main()
{
    StudentAthlete sa1;
}
