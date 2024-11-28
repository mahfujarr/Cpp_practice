#include <iostream>
using namespace std;
class BankAccount
{
public:
    int accountNumber;
    string holderName;
    double balance;

    BankAccount(int Number, string Name, double Balance = 0)
    {
        accountNumber = Number;
        holderName = Name;
        balance = Balance;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited " << amount << ". New balance: " << balance << endl;
        }
        else
        {
            cout << "Invalid deposit amount. Amount must be positive." << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrew " << amount << ". New balance: " << balance << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount. Amount must be positive and less than or equal to the balance." << endl;
        }
    }

    void displayDetails()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Holder Name: " << holderName << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main()
{
    BankAccount account1(96584, "Mahfujar");
    BankAccount account2(65456, "Joy", 1000);

    account1.deposit(500);
    account1.withdraw(200);
    account1.displayDetails();

    account2.withdraw(300);
    account2.deposit(800);
    account2.displayDetails();

    return 0;
}