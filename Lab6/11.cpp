#include <iostream>
using namespace std;
class FileManager
{
public:
    string fileName;
    bool isOpen = false;
    FileManager(string name)
    {
        fileName = name;
        isOpen = true;
        cout << "The file " << fileName << " is opened!" << endl;
    };
    ~FileManager()
    {
        isOpen = false;
        cout << "The file " << fileName << " is closed!" << endl;
    };
};
int main()
{
    FileManager file1("Joy.cpp");
}