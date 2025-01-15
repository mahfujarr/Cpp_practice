#include <iostream>
using namespace std;

class Number
{
protected:
    int num;
    int sqr;
    int cube;

public:
    Number(int n) : num(n), sqr(0), cube(0) {}
};

class Square : public Number
{
public:
    Square(int n) : Number(n)
    {
        sqr = num * num;
    }

    void display()
    {
        cout << "Square of " << num << " is: " << sqr << endl;
    }
};

class Cube : public Number
{
public:
    Cube(int n) : Number(n)
    {
        cube = num * num * num;
    }

    void print()
    {
        cout << "Cube of " << num << " is: " << cube << endl;
    }
};

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    Square square(number);
    square.display();

    Cube cube(number);
    cube.print();

    return 0;
}
