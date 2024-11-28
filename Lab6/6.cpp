#include <iostream>
using namespace std;
class Room
{
public:
    int roomNumber;
    string roomType;
    double rate;

    Room(int Number, string Type)
    {
        roomNumber = Number;
        roomType = Type;

        if (roomType == "Deluxe")
        {
            rate = 100.0;
        }
        else if (roomType == "Standard")
        {
            rate = 80.0;
        }
        else
        {
            rate = 60.0;
        }
    }

    double calculateBill(int days)
    {
        return rate * days;
    }

    void displayBookingDetails()
    {
        cout << "Room Number: " << roomNumber << endl;
        cout << "Room Type: " << roomType << endl;
        cout << "Rate per day: " << rate << endl;
    }
};
int main()
{
    int days = 5;
    Room room1(101, "Deluxe");
    Room room2(202, "Standard");
    Room room3(303, "Basic");

    room1.displayBookingDetails();
    cout << "Total Bill: " << room1.calculateBill(days) << endl;

    room2.displayBookingDetails();
    cout << "Total Bill: " << room2.calculateBill(days) << endl;

    room3.displayBookingDetails();
    cout << "Total Bill: " << room3.calculateBill(days) << endl;

    return 0;
}