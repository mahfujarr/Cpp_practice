#include <iostream>
#include <string>
using namespace std;
class MenuItem
{
private:
    string itemName, description;
    double price;

public:
    MenuItem(string n, string d, double p)
    {
        this->itemName = n;
        this->description = d;
        this->price = p;
    }
    void displayInfo()
    {
        cout << "Name: " << itemName << endl;
        cout << "Price: " << price << endl;
        cout << "Description: " << description << endl;
    }
};
int main()
{
    MenuItem item1("Cheeseburger", "Juicy beef patty with melted cheese", 10.99);
    item1.displayInfo();
    return 0;
}