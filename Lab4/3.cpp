#include <iostream>
using namespace std;
class Player
{
private:
    string name;
    int level, score;

public:
    Player(string name, int level, int score)
    {
        this->name = name;
        this->level = level;
        this->score = score;
    }
    void inScore(int s)
    {
        score += s;
        cout << "Current score is: " << score << endl;
    }
    void levelup()
    {
        level++;
        cout << "Current level is: " << level << endl;
    }
    void Info()
    {
        cout << "Player name: " << name << endl;
        cout << "Player level: " << level << endl;
        cout << "Player score: " << score << endl;
    }
};
int main()
{
    Player player1("Alice", 1, 100);
    player1.inScore(50);
    player1.levelup();
    player1.Info();
    return 0;
}