#include <iostream>
#include <string>
using namespace std;
class Product
{
private:
    int productId;
    string productName;
    double productPrice;

public:
    Product(int id, string name, double price)
    {
        productId = id;
        productName = name;
        productPrice = price;
    }
    double calculateTotalPrice(int quantity)
    {
        return productPrice * quantity;
    }
    void displayDetails()
    {
        cout << "Product ID: " << productId << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Product Price: " << productPrice << endl;
    }
};
int main()
{
    Product product1(123, "Laptop", 899.99);
    int quantity = 5;
    product1.displayDetails();
    double totalPrice = product1.calculateTotalPrice(quantity);
    cout << "Total price for " << quantity << " units: " << totalPrice << endl;
    return 0;
}