#include<iostream>
using namespace std;
class Student
{
private:
    int stID;
    double marks;
    string stName;
public:
    Student(int ID, string name, double mar)
    {
        stID = ID;
        marks = mar;
        stName = name;
    };
    void calculateGrade()
    {
        if (marks >= 80)    cout << "Grade is: A+" << endl;
        else if (marks >= 70)    cout << "Grade is: A" << endl;
        else if (marks >= 60)    cout << "Grade is: A-" << endl;
        else if (marks >= 50)    cout << "Grade is: B" << endl;
        else if (marks >= 40)    cout << "Grade is: C" << endl;
        else if (marks >= 33)    cout << "Grade is: D" << endl;
        else if (marks <= 32)    cout << "Grade is: F" << endl;
    }
    void DisplayInfo()
    {
        cout <<"Student name: "<< stName <<endl;
        cout <<"Student ID: "<< stID <<endl;
        cout <<"Student marks: "<< marks <<endl;
    }
};
int main()
{
    Student st1(23303151,"Mahfujar", 99.99);
    st1.DisplayInfo();
    st1.calculateGrade();
}