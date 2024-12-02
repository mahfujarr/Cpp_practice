#include <iostream>
using namespace std;
class Flight
{
private:
    /* data */
public:
    int flightNumber;
    string destination;
    double fare;
    Flight(int number, string dest, double price)
    {
        flightNumber = number;
        destination = dest;
        fare = price;
    };
    void calculateFare()
        {
            string type;
            cout << "Enter Ticket Type(Business/Economy): ";
            cin >> type;
            if (type == "Business")
            {
                fare += fare*0.2;
            }
            else
            {
                cout << "No discount or extra charge." << endl;
            }
        };
    Flight(int number)
    {
        flightNumber = number;
    };
    void details()
    {
        cout << "Flight Number: " << flightNumber << endl;
        cout << "Flight destination: " << destination << endl;
        cout << "Fare: " << fare << endl;
    }
    ~Flight(){

    };
};
int main()
{
    Flight flight1(234, "Qatar", 300);
    flight1.calculateFare();
    flight1.details();
}