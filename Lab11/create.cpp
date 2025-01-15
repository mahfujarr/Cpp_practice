#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    for (int i = 1; i <= 10; ++i)
    {
        string fileName = to_string(i) + ".cpp";
        ofstream file(fileName);

        if (file.is_open())
        {
            file.close();
            cout << "Created file: " << fileName << endl;
        }
        else
        {
            cerr << "Failed to create: " << fileName << endl;
        }
    }

    return 0;
}