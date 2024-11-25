#include <iostream>
using namespace std;
class Song
{
private:
    string title, artistName, duration;

public:
    Song(string name, string aname, string dur)
    {
        this->title = name;
        this->artistName = aname;
        this->duration = dur;
    }
    void display()
    {
        cout << "Song name: " << title << endl;
        cout << "Artist name: " << artistName << endl;
        cout << "Duration: " << duration << endl;
    }
};
int main()
{
    Song song1("Bohemian Rhapsody", "Queen", "5:55");
    song1.display();
    return 0;
}