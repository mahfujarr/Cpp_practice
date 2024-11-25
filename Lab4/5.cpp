#include <iostream>
#include <string>
using namespace std;
class Post
{
public:
    int ID;
    string AuthorName, Content;

    void editPost()
    {
        cout << "Current post: " << Content << endl;
        cout << "Enter new content: " << endl;
        getline(cin, Content, '\n');
        cout << "Edited successfully." << endl;
    }
    void displayContent()
    {
        cout << "Post ID: " << ID << endl;
        cout << "Author name: " << AuthorName << endl;
        cout << "Content: " << Content << endl;
    }
};
int main()
{
    Post post1;
    post1.ID = 1;
    post1.AuthorName = "Jane";
    post1.Content = "Hello, World!";
    post1.editPost();
    post1.displayContent();
}