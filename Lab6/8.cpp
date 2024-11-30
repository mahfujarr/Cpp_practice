#include <iostream>
using namespace std;
class Event
{
private:
    int eventID;
    string eventName;
    string eventDate;
    bool isScheduled = true;

public:
    Event(string name)
    {
        eventName = name;
        notScheduled();
    }
    Event(string name, int ID, string date)
    {
        eventName = name;
        eventID = ID;
        eventDate = date;
    }
    void notScheduled()
    {
        isScheduled = !isScheduled;
    }
    void display()
    {
        cout << "Event ID: " << eventID << endl;
        cout << "Event Name: " << eventName << endl;
        cout << "Event Date: " << eventDate << endl;
        cout << "Event Status: " << (isScheduled ? "Scheduled" : "Not Scheduled") << endl;
    }
};
int main()
{
    Event event1("wedding", 001, "15-08-24");
    Event event2("birthday");
    event1.display();
    event2.display();
}