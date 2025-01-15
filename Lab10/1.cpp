#include <iostream>
using namespace std;

class Cart
{
private:
    double price;
    int quantity;

public:
    Cart(double p, int q) : price(p), quantity(q) {}

    double getTotal() const { return price * quantity; }

    double operator+(const Cart &other)
    {
        return this->getTotal() + other.getTotal();
    }
};

int main()
{
    Cart cart1(10.0, 5);
    Cart cart2(15.0, 3);
    cout << "Total price of both carts: " << cart1 + cart2 << endl;
    return 0;
}
