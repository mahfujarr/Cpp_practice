#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class BankAccount
{
private:
    string name;
    string address;
    string accountType;
    double balance;
    int transactions;
    string accountNumber;
    static int accountCounter;

public:
    BankAccount(string n, string addr, string accType, double bal)
    {
        name = n;
        address = addr;
        accountType = accType;
        balance = bal;
        transactions = 0;
        accountNumber = "BA" + to_string(accountCounter++);
    }
    void displayInfo()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
        cout << "Number of Transactions: " << transactions << endl;
    }
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            transactions++;
            cout << "Deposited: " << amount << ". New Balance: " << balance << endl;
        }
        else
        {
            cout << "Deposit amount must be positive." << endl;
        }
    }
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            transactions++;
            cout << "Withdrew: " << amount << ". New Balance: " << balance << endl;
        }
        else if (amount > balance)
        {
            cout << "Insufficient balance for withdrawal." << endl;
        }
        else
        {
            cout << "Withdrawal amount must be positive." << endl;
        }
    }
    void changeAddress(string newAddress)
    {
        address = newAddress;
        cout << "Address updated to: " << address << endl;
    }
    string getAccountNumber()
    {
        return accountNumber;
    }
    static int getAccountCount()
    {
        return accountCounter;
    }
};
int BankAccount::accountCounter = 1000;
int main()
{
    int choice;
    string name, address, accountType, newAddress;
    double balance, amount;
    BankAccount *accounts[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter details for depositor " << i + 1 << ":\n";
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter address: ";
        getline(cin, address);
        cout << "Enter account type: ";
        getline(cin, accountType);
        cout << "Enter balance: ";
        cin >> balance;
        cin.ignore();
        accounts[i] = new BankAccount(name, address, accountType, balance);
    }
    do
    {
        cout << "\n*** Bank Account Operations ***\n";
        cout << "1. Display Account Information\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Change Address\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
        int accountIndex;
        switch (choice)
        {
        case 1:
            cout << "Enter account number index (0-4): ";
            cin >> accountIndex;
            cin.ignore();
            if (accountIndex >= 0 && accountIndex < 5)
            {
                accounts[accountIndex]->displayInfo();
            }
            else
            {
                cout << "Invalid index!" << endl;
            }
            break;
        case 2:
            cout << "Enter account number index (0-4): ";
            cin >> accountIndex;
            cin.ignore();
            if (accountIndex >= 0 && accountIndex < 5)
            {
                cout << "Enter deposit amount: ";
                cin >> amount;
                accounts[accountIndex]->deposit(amount);
            }
            else
            {
                cout << "Invalid index!" << endl;
            }
            break;
        case 3:
            cout << "Enter account number index (0-4): ";
            cin >> accountIndex;
            cin.ignore();
            if (accountIndex >= 0 && accountIndex < 5)
            {
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                accounts[accountIndex]->withdraw(amount);
            }
            else
            {
                cout << "Invalid index!" << endl;
            }
            break;
        case 4:
            cout << "Enter account number index (0-4): ";
            cin >> accountIndex;
            cin.ignore();
            if (accountIndex >= 0 && accountIndex < 5)
            {
                cout << "Enter new address: ";
                getline(cin, newAddress);
                accounts[accountIndex]->changeAddress(newAddress);
            }
            else
            {
                cout << "Invalid index!" << endl;
            }
            break;
        case 5:
            cout << "Exiting the program. Thank you!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);
    for (int i = 0; i < 5; i++)
    {
        delete accounts[i];
    }
    return 0;
}