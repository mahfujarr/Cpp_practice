#include <iostream>
#include <ctime>
using namespace std;

class Date
{
private:
    int day, month, year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    void display() const
    {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }

    Date operator+()
    {
        struct tm date = {0};
        date.tm_mday = day;
        date.tm_mon = month - 1;
        date.tm_year = year - 1900;
        mktime(&date);
        date.tm_mday++;
        mktime(&date);
        return Date(date.tm_mday, date.tm_mon + 1, date.tm_year + 1900);
    }
};

int main()
{
    Date date(7, 1, 2025);
    date.display();
    Date nextDay = +date;
    nextDay.display();
    return 0;
}
