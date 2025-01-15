#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
    string name;
    int age;

public:
    Animal(string n, int a) : name(n), age(a) {}
};

class Pet
{
protected:
    string owner;

public:
    Pet(string o) : owner(o) {}
};

class PetAnimal : public Animal, public Pet
{
private:
    string species;

public:
    PetAnimal(string n, int a, string o, string s)
        : Animal(n, a), Pet(o), species(s) {}

    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years" << endl;
        cout << "Owner: " << owner << endl;
        cout << "Species: " << species << endl;
    }
};

int main()
{
    PetAnimal myPet("Fluffy", 3, "John Doe", "Cat");
    myPet.displayInfo();
    return 0;
}