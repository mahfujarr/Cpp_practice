#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
    string name;
    int score;

    void updateScore(int newScore)
    {
        score += newScore;
    }

    void displayDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Score: " << score << endl;
    }
};

int main()
{
    int n = 2;
    Player players[n];
    players[0].name = "Mahfu";
    players[0].score = 20;
    players[1].name = "Joy";
    players[1].score = 30;
    players[1].updateScore(15);
    players[0].updateScore(20);

    int highestScoreIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (players[i].score > players[highestScoreIndex].score)
        {
            highestScoreIndex = i;
        }
    }
    cout << "Player with the highest score:\n";
    players[highestScoreIndex].displayDetails();
    return 0;
}