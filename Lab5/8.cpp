#include <iostream>
#include <string>
using namespace std;
class Product
{
public:
    string name;
    double price;
    int quantity;

    void updateQuantity(int newQuantity)
    {
        quantity += newQuantity;
    }
    void displayDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
    }
};
int main()
{
    int n = 5;
    Product products[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the name of Product " << i + 1 << ":";
        cin >> products[i].name;
        cout << "Enter the price of Product " << i + 1 << ":";
        cin >> products[i].price;
        cout << "Enter the quantity of Product " << i + 1 << ":";
        cin >> products[i].quantity;
    }

    products[2].updateQuantity(5);
    products[1].updateQuantity(-2);
    cout << "Product Details:\n";
    for (int i = 0; i < n; i++)
    {
        products[i].displayDetails();
        cout << endl;
    }
    return 0;
}