#include <iostream>
using namespace std;
class Event
{
private:
    string Name, Date, Location;

public:
    Event(string n, string d, string l)
    {
        this->Name = n;
        this->Date = d;
        this->Location = l;
    }
    void displayInfo()
    {
        cout << "Event name: " << Name << endl;
        cout << "Date: " << Date << endl;
        cout << "Location: " << Location << endl;
    }
};
int main()
{
    Event item1("Birthday Party", "2023-08-15", "Park Plaza");
    item1.displayInfo();
    return 0;
}