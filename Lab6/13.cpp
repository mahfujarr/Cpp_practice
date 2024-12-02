#include<iostream>
using namespace std;
class HotelBooking
{
private:
    /* data */
public:
    int bookingID;
    string customerName;
    double totalAmount;
    string type;
    HotelBooking(string name)
    {
        customerName = name;
    }
    HotelBooking(string name, int ID, double total)
    {
        customerName = name;
        bookingID = ID;
        totalAmount = total;
    }
    HotelBooking(const HotelBooking &obj)
    {
        type = obj.type;
    }
    void details()
    {
        cout << "===================================="<<endl;
        cout << "Booking ID: " << bookingID << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Total Amount: " << totalAmount << endl;
        cout << "===================================="<<endl;
    }
    ~HotelBooking(){
        cout << "All info is erased!!!" << endl;
    };
};
int main()
{
    HotelBooking room1("Mahfujar", 1234, 3500);
    room1.details();
}
