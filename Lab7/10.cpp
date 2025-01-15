#include <iostream>
using namespace std;

class Mammals
{
public:
    void print()
    {
        cout << "I am a mammal" << endl;
    }
};

class MarineAnimals
{
public:
    void print()
    {
        cout << "I am a marine animal" << endl;
    }
};

class BlueWhale : public Mammals, public MarineAnimals
{
public:
    void print()
    {
        cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;
    }
};

int main()
{
    Mammals mammal;
    MarineAnimals marine;
    BlueWhale whale;
    mammal.print();
    marine.print();
    whale.print();
    whale.Mammals::print();
    whale.MarineAnimals::print();

    return 0;
}