#include <iostream>
#include <string>
using namespace std;
class Product
{
private:
    string Name, ID;
    double Price, Quantity;

public:
    Product(string name, string ID, double Price, double Quantity)
    {
        this->Name = name;
        this->ID = ID;
        this->Price = Price;
        this->Quantity = Quantity;
    }
    void updateQuantity()
    {
        double x;
        cout << "Enter the quantity to be edited: ";
        cin >> x;
        Quantity = x;
    }
    void displayInfo()
    {
        cout << "Name: " << Name << endl;
        cout << "ID: " << ID << endl;
        cout << "Price: " << Price << endl;
        cout << "Quantity: " << Quantity << endl;
    }
};
int main()
{
    Product item1("Smartphone", "P001", 499.99, 10);
    item1.updateQuantity();
    item1.displayInfo();
    return 0;
}