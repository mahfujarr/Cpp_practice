#include <iostream>
#include <iomanip>
using namespace std;
class Student
{
private:
    int marks[3];

public:
    void getInfo(int x)
    {
        cout << "Enter the details of student " << x + 1 << endl;
        cout << "Roll : " << setw(4) << setfill('0') << x + 1 << endl;
        cout << "Marks in Bangla: ";
        cin >> marks[0];
        cout << "Marks in English: ";
        cin >> marks[1];
        cout << "Marks in Math: ";
        cin >> marks[2];
        cin.ignore();
        cout << "=======================================" << endl;
    }
    void displayInfo(int x)
    {
        cout << "Roll : " << setw(4) << setfill('0') << x + 1 << endl;
        cout << "Marks in Bangla, English and Math are: " << marks[0] << " " << marks[1] << " " << marks[2] << endl;
        cout << "The average is: " << (marks[0] + marks[1] + marks[2]) / 3 << endl;
        cout << "---------------------------------------" << endl;
    }
};
int main()
{
    const int stuNum = 2;
    Student stu[stuNum];
    for (int i = 0; i < stuNum; i++)
        stu[i].getInfo(i);
    for (int i = 0; i < stuNum; i++)
        stu[i].displayInfo(i);
}