#include <iostream>
using namespace std;

class Account
{
private:
    double balance;

public:
    Account(double initialBalance) : balance(initialBalance) {}

    double getBalance() const { return balance; }

    Account &operator++()
    {
        balance += balance * 0.05;
        return *this;
    }
};

int main()
{
    Account acc(1000.0);
    cout << "Initial Balance: " << acc.getBalance() << endl;
    ++acc;
    cout << "Balance after increment: " << acc.getBalance() << endl;
    return 0;
}
