#include <iostream>
#include <string>
using namespace std;
class Book
{
public:
    string title;
    string author;
    bool isAvailable;
    Book()
    {
        title = "";
        author = "";
        isAvailable = true;
    }
    void borrow()
    {
        isAvailable = false;
    }
    void returnBook()
    {
        isAvailable = true;
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
    Book book1;
    book1.title = "The Lord of the Rings";
    book1.author = "J.R.R. Tolkien";

    book1.displayDetails();
    book1.borrow();
    book1.displayDetails();
    book1.returnBook();

    book1.displayDetails();
    return 0;
}