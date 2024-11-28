#include <iostream>
using namespace std;
class Event
{
private:
    int eventID;
    string eventName;
    string eventDate;
    bool isScheduled;
public:
    Event(string name, int ID = 000, string date = "Null")
    {
        eventName = name;
        eventID = ID;
        eventDate = date;
    }
    void scheduled(bool isScheduled)
    {
        isScheduled = !isScheduled;
    }
};