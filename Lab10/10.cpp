#include <iostream>
using namespace std;

class MyString
{
private:
    string str;

public:
    MyString(string s) : str(s)
    {
    }
    string getStr() const
    {
        return str;
    }
    MyString operator+(const MyString &other)
    {
        return MyString(str + " " + other.str);
    }
};
int main()
{
    MyString firstName("John");
    MyString lastName("Doe");
    MyString fullName = firstName + lastName;
    cout << "Full name: " << fullName.getStr() << endl;
    return 0;
}
