#include <iostream>
using namespace std;

class Item
{
private:
    int stock;

public:
    Item(int initialStock) : stock(initialStock) {}

    int getStock() const { return stock; }

    Item &operator--()
    {
        if (stock > 0)
        {
            --stock;
        }
        return *this;
    }
};

int main()
{
    Item product(10);
    cout << "Initial stock: " << product.getStock() << endl;
    --product;
    cout << "Stock after sale: " << product.getStock() << endl;
    return 0;
}
