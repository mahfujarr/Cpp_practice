#include <iostream>
#include <string>
using namespace std;
class Character
{
public:
    string name;
    int level;
    void setLevel(int newLevel)
    {
        level = newLevel;
    }
    void displayDetails()
    {
        cout << "Character Name: " << name << endl;
        cout << "Level: " << level << endl;
    }
};
int main()
{
    Character characters[20];

    characters[0].name = "Aragorn";
    characters[0].setLevel(25);

    characters[1].name = "Legolas";
    characters[1].setLevel(22);

    characters[2].name = "Gimli";
    characters[2].setLevel(20);

    characters[3].name = "Gandalf";
    characters[3].setLevel(30);

    characters[4].name = "Frodo";
    characters[4].setLevel(15);

    characters[5].name = "Sam";
    characters[5].setLevel(18);

    characters[6].name = "Merry";
    characters[6].setLevel(17);

    characters[7].name = "Pippin";
    characters[7].setLevel(16);

    characters[8].name = "Boromir";
    characters[8].setLevel(23);

    characters[9].name = "Galadriel";
    characters[9].setLevel(35);

    characters[10].name = "Elrond";
    characters[10].setLevel(32);

    characters[11].name = "Saruman";
    characters[11].setLevel(30);

    characters[12].name = "Sauron";
    characters[12].setLevel(40);

    characters[13].name = "Gollum";
    characters[13].setLevel(12);

    characters[14].name = "Smeagol";
    characters[14].setLevel(10);

    characters[15].name = "Faramir";
    characters[15].setLevel(21);

    characters[16].name = "Eowyn";
    characters[16].setLevel(24);

    characters[17].name = "Merry and Pippin";
    characters[17].setLevel(20);

    characters[18].name = "Treebeard";
    characters[18].setLevel(45);

    characters[19].name = "Tom Bombadil";
    characters[19].setLevel(35);

    int highestLevel = 0;
    int highestIndex = 0;

    for (int i = 0; i < 20; i++)
    {
        if (characters[i].level > highestLevel)
        {
            highestLevel = characters[i].level;
            highestIndex = i;
        }
    }
    cout << "Character with the highest level:\n";
    characters[highestIndex].displayDetails();
    return 0;
}