#include <iostream>
using namespace std;

class Distance
{
private:
    int kilometers;
    int meters;

public:
    Distance(int km, int m) : kilometers(km), meters(m) {}

    void display() const
    {
        cout << kilometers << " km " << meters << " m" << endl;
    }

    Distance operator+(const Distance &other)
    {
        int totalMeters = meters + other.meters;
        int totalKilometers = kilometers + other.kilometers + totalMeters / 1000;
        totalMeters %= 1000;
        return Distance(totalKilometers, totalMeters);
    }
};

int main()
{
    Distance distance1(5, 700);
    Distance distance2(3, 800);
    Distance total = distance1 + distance2;
    total.display();
    return 0;
}
