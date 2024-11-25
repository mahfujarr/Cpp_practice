#include<iostream>
using namespace std;
class Book
{
private:
    string title;
    string author;
    double price;
public:
    Book(string ID, string name, double mar)
    {
        title = ID;
        price = mar;
        author = name;
    };
    void DisplayInfo()
    {
        cout <<"Book title: "<< title <<endl;
        cout <<"Author Name: "<< author <<endl;
        cout <<"Price: "<< price <<endl;
    }
};
int main()
{
    Book b1("Harry Potter","JK Rowling", 99.99);
    b1.DisplayInfo();
}
