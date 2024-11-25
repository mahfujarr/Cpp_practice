#include<iostream>
using namespace std;
class Bank
{
private:
    int acNum;
    double balance;
    string acName;
public:
    Bank(int num, string name, double bal)
    {
        acNum = num;
        balance = bal;
        acName = name;
    };
    void deposit()
    {
        int x;
        cout << "Enter a value to deposit: ";
        cin >> x;
        balance += x;
    }
    void withdraw()
    {
        int x;
        cout << "Enter a value to withdraw: ";
        cin >> x;
        balance -= x;
    }
    void getBalance()
    {
        cout << "The account balance is : " << balance << endl;
    }
    void displayAccountDetails()
    {
        cout << "Account number: " << acNum<< endl;
        cout << "Account name: " << acName<< endl;
        cout << "Account Balance: " << balance<< endl;
    }
};
int main()
{
    Bank ac1(0001,"Mahfujar", 100000);
    ac1.displayAccountDetails();
    ac1.deposit();
    ac1.getBalance();
    ac1.withdraw();
    ac1.getBalance();
}