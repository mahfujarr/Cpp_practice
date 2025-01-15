#include <iostream>
using namespace std;

class Character
{
private:
    int health;

public:
    Character(int initialHealth) : health(initialHealth) {}

    int getHealth() const { return health; }

    Character &operator+()
    {
        health += 50;
        return *this;
    }
};

int main()
{
    Character player(100);
    cout << "Initial Health: " << player.getHealth() << endl;
    +player;
    cout << "Health after potion: " << player.getHealth() << endl;
    return 0;
}
