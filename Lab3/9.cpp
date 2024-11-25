#include <iostream>
using namespace std;
void update(int *arr, int number)
{
    arr[number] -= 1;
}
int main()
{
    string BookName[5] = {"Song of Ice & Fire", "The Alchemist", "Animal Farm", "Harry Potter & The Sorcerer's Stone", "Pride & Prejudice"};
    int n, Ncps[5] = {3, 2, 4, 1, 5};
    cout << "Available books are: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << " -> " << BookName[i] << " (" << Ncps[i] << ") " << endl;
    }
    cout << "Which book do you want to borrow?" << endl;
    cin >> n;
    if (n < 5)
    {
        update(Ncps, n - 1);
        cout << BookName[n - 1] << " is borrowed successfully." << endl;
        cout << "Available number of copies are : " << Ncps[n - 1] << endl;
    }
    else
    {
        cout << "Invalid Input!!";
    }
}
