#include <iostream>
using namespace std;
void Operation(int ID, int *Bal, int amount, int optn)
{
    if (optn == 1)
    {
        Bal[ID - 1] -= amount;
        cout << amount << " taka has been withdrawn.\nYour new balance is: " << Bal[ID - 1];
    }
    else if (optn == 2)
    {
        Bal[ID - 1] += amount;
        cout << amount << " taka has been deposited.\nYour new balance is: " << Bal[ID - 1];
    }
    else
    {
        cout << "Invalid Input!!!";
    }
}
int main()
{
    int ID, optn, amount, Bal[10] = {5000, 6500, 4500, 8500, 5000, 6000, 4000, 3000, 2000, 9000};
    cout << "Enter the User ID: (1-10): " << endl;
    cin >> ID;
    cout << "User " << ID << " is selected!\nYour Balance is: " << Bal[ID - 1] << endl;
    cout << "Enter the amount: ";
    cin >> amount;
    cout << "Enter 1 for Withdrawal\nEnter 2 for deposit" << endl;
    cin >> optn;
    Operation(ID, Bal, amount, optn);
    return 0;
}