#include <iostream>
#include <string>
using namespace std;

class RBI
{
protected:
    double minInterestRate = 4.0;
    double minBalance = 1000;
    double maxWithdrawalLimit = 50000;

public:
    virtual void displayGuidelines()
    {
        cout << "RBI Guidelines:" << endl;
        cout << "Minimum Interest Rate: " << minInterestRate << "%" << endl;
        cout << "Minimum Balance: Rs. " << minBalance << endl;
        cout << "Maximum Withdrawal Limit: Rs. " << maxWithdrawalLimit << endl;
    }
};

class Bank : public RBI
{
protected:
    string bankName;

public:
    Bank(const string &name) : bankName(name) {}

    virtual void displayBankDetails()
    {
        cout << "Bank Name: " << bankName << endl;
        displayGuidelines();
    }
};

class SBI : public Bank
{
public:
    SBI() : Bank("State Bank of India") {}

    void displayBankDetails() override
    {
        cout << "Welcome to SBI!" << endl;
        Bank::displayBankDetails();
    }
};

class ICICI : public Bank
{
public:
    ICICI() : Bank("ICICI Bank") {}

    void displayBankDetails() override
    {
        cout << "Welcome to ICICI Bank!" << endl;
        Bank::displayBankDetails();
    }
};

class PNB : public Bank
{
public:
    PNB() : Bank("Punjab National Bank") {}

    void displayBankDetails() override
    {
        cout << "Welcome to PNB!" << endl;
        Bank::displayBankDetails();
    }
};

class Customer
{
private:
    string name;
    int accountNumber;
    double balance;

public:
    Customer(const string &customerName, int accNum, double initialBalance)
        : name(customerName), accountNumber(accNum), balance(initialBalance) {}

    void displayCustomerDetails()
    {
        cout << "Customer Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};

int main()
{
    SBI sbi;
    ICICI icici;
    PNB pnb;

    Customer customer1("Alice", 123456, 2000.0);
    Customer customer2("Bob", 654321, 1500.0);

    cout << "--- SBI Details ---" << endl;
    sbi.displayBankDetails();

    cout << "\n--- ICICI Details ---" << endl;
    icici.displayBankDetails();

    cout << "\n--- PNB Details ---" << endl;
    pnb.displayBankDetails();
    cout << "\n--- Customer Details ---" << endl;
    customer1.displayCustomerDetails();
    customer2.displayCustomerDetails();

    return 0;
}
