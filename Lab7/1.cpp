#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    string name;
    Person(string n)
    {
        name = n;
    }
};
class Student : public Person
{
public:
    int studentID;
    Student(string name, int ID) : Person(name)
    {
        studentID = ID;
    }
};
int main()
{
    Student s1("Mahfujar Rahman", 23303151);

    cout << "Name: " << s1.name << endl;
    cout << "Student ID: " << s1.studentID << endl;

    return 0;
}