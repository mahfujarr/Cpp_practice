#include <iostream>
using namespace std;

class Battery
{
private:
    int energyLevel;

public:
    Battery(int initialEnergy) : energyLevel(initialEnergy) {}

    int getEnergyLevel() const { return energyLevel; }

    Battery &operator-()
    {
        if (energyLevel > 0)
        {
            --energyLevel;
        }
        return *this;
    }
};

int main()
{
    Battery battery(10);
    cout << "Initial Energy: " << battery.getEnergyLevel() << endl;
    -battery;
    cout << "Energy after action: " << battery.getEnergyLevel() << endl;
    return 0;
}
