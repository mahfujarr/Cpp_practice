#include <iostream>
using namespace std;

class Fruit
{
protected:
    int count;

public:
    Fruit() : count(0) {}

    void addFruit(int num)
    {
        count += num;
    }

    int getCount() const
    {
        return count;
    }

    virtual void printCount() const = 0;
};

class Apples : public Fruit
{
public:
    void printCount() const override
    {
        cout << "Number of Apples: " << getCount() << endl;
    }
};

class Mangoes : public Fruit
{
public:
    void printCount() const override
    {
        cout << "Number of Mangoes: " << getCount() << endl;
    }
};

class Basket
{
private:
    Apples apples;
    Mangoes mangoes;

public:
    void addApples(int num)
    {
        apples.addFruit(num);
    }

    void addMangoes(int num)
    {
        mangoes.addFruit(num);
    }

    void printFruitCounts() const
    {
        apples.printCount();
        mangoes.printCount();
        cout << "Total number of fruits: " << apples.getCount() + mangoes.getCount() << endl;
    }
};

int main()
{
    Basket basket;

    basket.addApples(5);
    basket.addMangoes(3);
    basket.addApples(2);
    basket.addMangoes(4);

    basket.printFruitCounts();

    return 0;
}