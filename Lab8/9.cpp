#include <iostream>
#include <sstream>
using namespace std;

string formatDate(int day, int month, int year)
{
    ostringstream oss;
    if (day < 10)
        oss << "0";
    oss << day << "/";
    if (month < 10)
        oss << "0";
    oss << month << "/";
    oss << year;
    return oss.str();
}

string formatDate(const string &date)
{
    return date.substr(8, 2) + "/" + date.substr(5, 2) + "/" + date.substr(0, 4);
}

int main()
{
    cout << "Formatted date (integers): " << formatDate(7, 1, 2025) << endl;
    cout << "Formatted date (string): " << formatDate("2025-01-07") << endl;
    return 0;
}
