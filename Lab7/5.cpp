#include <iostream>
using namespace std;
class BankAccount
{
public:
    double balance;
    BankAccount(double balance)
    {
        this->balance = balance;
    }
};
class SavingsAccount : public BankAccount
{
public:
    double interestRate;
    SavingsAccount(double balance, double interestRate) : BankAccount(balance)
    {
        this->interestRate = interestRate;
    }
};
int main()
{
    SavingsAccount sa1(1000.0, 0.05);
    cout << "Account balance: $" << sa1.balance << endl;
    cout << "Interest rate: " << sa1.interestRate * 100 << "%" << endl;
    return 0;
}