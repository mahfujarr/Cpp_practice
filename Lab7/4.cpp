#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
    string name;
    Animal(string name)
    {
        this->name = name;
    }
};
class Cat : public Animal
{
public:
    int numLives;

    Cat(string name, int numLives) : Animal(name)
    {
        this->numLives = numLives;
    }
};
int main()
{
    Cat c1("Tiger", 9);
    cout << "Name: " << c1.name << endl;
    cout << "Number of lives: " << c1.numLives << endl;
    return 0;
}