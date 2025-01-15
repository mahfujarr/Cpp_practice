#include <iostream>
using namespace std;

class Fraction
{
private:
    int numerator, denominator;

public:
    Fraction(int num, int denom) : numerator(num), denominator(denom) {}

    void display() const
    {
        cout << numerator << "/" << denominator << endl;
    }

    Fraction operator+(const Fraction &other)
    {
        int commonDenominator = denominator * other.denominator;
        int newNumerator = numerator * other.denominator + other.numerator * denominator;
        return Fraction(newNumerator, commonDenominator);
    }
};

int main()
{
    Fraction frac1(1, 2);
    Fraction frac2(1, 3);
    Fraction result = frac1 + frac2;
    result.display();
    return 0;
}
