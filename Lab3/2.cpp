#include <iostream>
using namespace std;

void reverse_dig(int &a)
{
  int rev = 0, rem = 0;
  while (a != 0)
  {
    rem = a % 10;
    rev = (rev * 10) + rem;
    a /= 10;
  }
  cout << rev << " ";
}

void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}
int main()
{
  int x, y;
  cout << "Enter the numbers: " << endl;
  cin >> x >> y;
  int a = x, b = y;
  cout << "Before reversing the numbers are: " << x << " " << y << endl;
  cout << "After reversing the numbers are: ";
  reverse_dig(x);
  reverse_dig(y);
  cout << endl;
  cout << "Before swapping the numbers are: " << a << " " << b << endl;
  swap(a, b);
  cout << "After swapping the numbers are: " << a << " " << b << " " << endl;
}
