#include <iostream>
#include <string>
using namespace std;

int processString(const string &str)
{
    return str.length();
}

int processString(const string &str, char ch)
{
    int count = 0;
    for (char c : str)
    {
        if (c == ch)
            count++;
    }
    return count;
}

int main()
{
    string text = "hello world";
    char targetChar = 'l';

    cout << "Length of the string: " << processString(text) << endl;
    cout << "Count of '" << targetChar << "' in the string: " << processString(text, targetChar) << endl;

    return 0;
}
