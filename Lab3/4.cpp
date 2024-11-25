#include <iostream>
using namespace std;
int main()
{
    string products[5] = {"Potato", "Onion", "Chilly", "Milk", "Bread"};
    int select, buy, quantity[5] = {25, 10, 5, 20, 15};
    bool cont;
    cout << "The store has the below Items:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << products[i] << " -> " << quantity[i] << " KG" << endl;
    }
C:
    cout << "Input which Item do you want to buy?(0-4)" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i << " -> " << products[i] << endl;
    }
    cin >> select;
    if (select > 4)
    {
        cout << "Invalid input!!!\n";
        goto C;
    }

    cout << "Selected product: " << products[select] << endl;
S:
    cout << "Enter the quantity: ";
    cin >> buy;
    if (buy > quantity[select])
    {
        cout << "The store doesn't have this much in stock.\nPlease input a value less than " << quantity[select] << endl;
        goto S;
    }
    else
    {
        cout << buy << " KG of " << products[select] << " has been added to your cart." << endl;
        quantity[select] -= buy;
    }
    cout << "Do you want to continue shopping?(Input 1 or 0)" << endl;
    cin >> cont;
    if (cont)
        goto C;
    cout << "Remaining products of the shop: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << products[i] << " -> " << quantity[i] << " KG" << endl;
    }
}