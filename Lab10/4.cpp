#include <iostream>
using namespace std;

class Complex
{
private:
    double real;
    double imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}

    void display() const
    {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex operator+(const Complex &other)
    {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-(const Complex &other)
    {
        return Complex(real - other.real, imag - other.imag);
    }
};

int main()
{
    Complex num1(3, 4);
    Complex num2(1, 2);
    Complex sum = num1 + num2;
    Complex diff = num1 - num2;
    sum.display();
    diff.display();
    return 0;
}
