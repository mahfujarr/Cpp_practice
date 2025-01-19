#include <iostream>
using namespace std;
class Player
{
private:
    string name;
    int points;
public:
    Player(string n, int p) : name(n), points(p) {}
    int getPoints() const { return points; }
    Player operator+(const Player &other)
    {
        return Player(name + " & " + other.name, points + other.points);
    }
};
int main()
{
    Player player1("Alice", 100);
    Player player2("Bob", 150);
    Player team = player1 + player2;
    cout << "Team score: " << team.getPoints() << endl;
    return 0;
}