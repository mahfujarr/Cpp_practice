#include <iostream>
using namespace std;

class Complex
{
private:
	double real;
	double imag;

public:
	// Constructor
	Complex(double r = 0, double i = 0) : real(r), imag(i) {}

	// Overloading + operator to add two Complex numbers
	Complex operator+(const Complex &obj)
	{
		return Complex(real + obj.real, imag + obj.imag);
	}

	// Display function to print the complex number
	void display()
	{
		cout << real << " + " << imag << "i" << endl;
	}
};

// Driver code
int main()
{
	Complex c1(3.4, 5.6); // First complex number
	Complex c2(1.2, 4.3); // Second complex number

	Complex c3 = c1 + c2; // Adding two complex numbers

	cout << "First Complex Number: ";
	c1.display();

	cout << "Second Complex Number: ";
	c2.display();

	cout << "Sum of Complex Numbers: ";
	c3.display();

	return 0;
}
