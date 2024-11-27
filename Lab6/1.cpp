#include <iostream>
using namespace std;
class ParkingSlot
{
public:
    int slotNumber;
    bool isOccupied;
    ParkingSlot()
    {
        isOccupied = false;
    }
    void occupySlot()
    {
        isOccupied = true;
    }
    void displayStatus()
    {
        cout << "Slot Number: " << slotNumber << endl;
        cout << "Occupied: " << (isOccupied ? "Yes" : "No") << endl;
    }
};
int main()
{
    ParkingSlot slot1, slot2;
    slot1.slotNumber = 1;
    slot2.slotNumber = 2;

    slot1.displayStatus();
    slot2.displayStatus();

    slot1.occupySlot();

    slot1.displayStatus();
    slot2.displayStatus();
    return 0;
}