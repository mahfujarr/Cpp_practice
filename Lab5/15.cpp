#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
    string name;
    string address;
    string telephoneNumber;
    string mobileNumber;
    string headOfFamily;

public:
    Person() : name(""), address(""), telephoneNumber(""), mobileNumber(""), headOfFamily("") {}
    Person(string n, string addr, string tel, string mob, string head)
        : name(n), address(addr), telephoneNumber(tel), mobileNumber(mob), headOfFamily(head) {}
    void setInfo(string n, string addr, string tel, string mob, string head)
    {
        name = n;
        address = addr;
        telephoneNumber = tel;
        mobileNumber = mob;
        headOfFamily = head;
    }
    void displayInfo() const
    {
        cout << "\nName: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Telephone Number: " << telephoneNumber << endl;
        cout << "Mobile Number: " << mobileNumber << endl;
        cout << "Head of Family: " << headOfFamily << endl;
    }
    string getName() const { return name; }
    string getAddress() const { return address; }
    string getTelephoneNumber() const { return telephoneNumber; }
    string getMobileNumber() const { return mobileNumber; }
    string getHeadOfFamily() const { return headOfFamily; }
};
void addPerson(Person directory[], int &count, int max_size)
{
    if (count >= max_size)
    {
        cout << "Directory is full, cannot add more people." << endl;
        return;
    }
    string name, address, telephoneNumber, mobileNumber, headOfFamily;
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter address: ";
    getline(cin, address);
    cout << "Enter telephone number (with STD code, if available): ";
    getline(cin, telephoneNumber);
    cout << "Enter mobile number (if available): ";
    getline(cin, mobileNumber);
    cout << "Enter head of family: ";
    getline(cin, headOfFamily);

    directory[count].setInfo(name, address, telephoneNumber, mobileNumber, headOfFamily);
    count++;
    cout << "\nPerson added to the directory successfully!" << endl;
}
void displayDirectory(const Person directory[], int count)
{
    if (count == 0)
    {
        cout << "No entries in the directory." << endl;
        return;
    }
    cout << "\nDirectory Contents:" << endl;
    for (int i = 0; i < count; ++i)
    {
        cout << "\nPerson " << i + 1 << ":" << endl;
        directory[i].displayInfo();
    }
}
int main()
{
    const int max_size = 5;
    Person directory[max_size];
    int count = 0;
    int choice;
    do
    {
        cout << "\n*** Directory Operations ***\n";
        cout << "1. Add New Person\n";
        cout << "2. Display All Persons in Directory\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 1:
            addPerson(directory, count, max_size);
            break;
        case 2:
            displayDirectory(directory, count);
            break;
        case 3:
            cout << "Exiting the program. Thank you!" << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 3);
    return 0;
}