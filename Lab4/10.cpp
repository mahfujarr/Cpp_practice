#include <iostream>
using namespace std;
class Book
{
private:
    string ID, title, author;
    bool status = 1;

public:
    Book(string ID, string title, string author)
    {
        this->ID = ID;
        this->title = title;
        this->author = author;
    }
    void checkout()
    {
        status = !status;
    }
    void returnBook()
    {
        status = 1;
    }
    void display()
    {
        cout << "Book ID: " << ID << endl;
        cout << "Title : " << title << endl;
        cout << "Author: " << author << endl;
        if (status)
            cout << "Status: Available." << endl;
        else
            cout << "Status: Unavailable." << endl;
    }
};
int main()
{
    Book book1("B001", "To Kill a Mockingbird", "Harper Lee");
    book1.checkout();
    book1.returnBook();
    book1.display();
    return 0;
}