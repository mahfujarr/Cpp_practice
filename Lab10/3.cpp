#include <iostream>
using namespace std;

class Account
{
private:
    double balance;

public:
    Account(double b) : balance(b) {}

    double getBalance() const { return balance; }

    Account &operator-(double amount)
    {
        balance -= amount;
        return *this;
    }
};

int main()
{
    Account acc(1000.0);
    cout << "Initial balance: " << acc.getBalance() << endl;
    acc - 200.0;
    cout << "Balance after withdrawal: " << acc.getBalance() << endl;
    return 0;
}
