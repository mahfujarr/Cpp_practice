#include <iostream>
#include <string>
using namespace std;
class Book
{
public:
    string title;
    string author;
    bool isAvailable;
    void markBorrowed()
    {
        isAvailable = false;
    }
    void displayDetails()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Availability: " << (isAvailable ? "Available" : "Borrowed") << endl;
    }
};

int main()
{
    int n = 10;
    Book books[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter book " << i + 1 << " title: " << endl;
        cin >> books[i].title;
        cout << "Enter book " << i + 1 << " author: " << endl;
        cin >> books[i].author;
        books[i].isAvailable = true;
    }

    books[2].markBorrowed();
    books[2].displayDetails();
    books[5].markBorrowed();
    books[5].displayDetails();

    cout << "Available Books:\n";
    for (int i = 0; i < n; i++)
    {
        if (books[i].isAvailable)
        {
            books[i].displayDetails();
            cout << endl;
        }
    }
    return 0;
}