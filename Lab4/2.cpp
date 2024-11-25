#include <iostream>
#include <string>
using namespace std;
class Account
{
private:
    int number, balance;
    string name;

public:
    Account(string name, int number, int balance)
    {
        this->name = name;
        this->number = number;
        this->balance = balance;
    }
    void deposit()
    {
        int temp;
        cout << "Enter the amout to be deposited: " << endl;
        cin >> temp;
        balance += temp;
        cout << "The balance is: " << balance << endl;
    }
    void withdraw()
    {
        int temp;
        cout << "Enter the amout to be withdrawed: " << endl;
        cin >> temp;
        balance -= temp;
        cout << "The balance is: " << balance << endl;
    }
    void getBalance()
    {
        cout << "The balance of account " << number << " is: " << balance << endl;
    }
};
int main()
{
    Account ac1("John Doe", 123456, 1000);
    ac1.deposit();
    ac1.withdraw();
    ac1.getBalance();
    return 0;
}