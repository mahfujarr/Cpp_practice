#include <iostream>
#include <string>
using namespace std;
class Customer
{
public:
    string name;
    string orderDetails;

    void addOrder(const string &order)
    {
        orderDetails += order + "\n";
    }

    void displayDetails()
    {
        cout << "Customer Name: " << name << endl;
        cout << "Order Details:\n"
             << orderDetails << endl;
    }
};

int main()
{
    Customer customers[7];

    customers[0].name = "Alice";
    customers[0].addOrder("Pizza");
    customers[0].addOrder("Pasta");

    customers[1].name = "Bob";
    customers[1].addOrder("Burger");
    customers[1].addOrder("Fries");

    customers[2].name = "Charlie";
    customers[2].addOrder("Steak");
    customers[2].addOrder("Salad");

    customers[3].name = "David";
    customers[3].addOrder("Sushi");
    customers[3].addOrder("Ramen");

    customers[4].name = "Emily";
    customers[4].addOrder("Tacos");
    customers[4].addOrder("Burrito");

    customers[5].name = "Frank";
    customers[5].addOrder("Chicken Wings");
    customers[5].addOrder("Nachos");

    customers[6].name = "Grace";
    customers[6].addOrder("Ice Cream");
    customers[6].addOrder("Cake");

    for (int i = 0; i < 7; i++)
    {
        customers[i].displayDetails();
        cout << endl;
    }

    return 0;
}