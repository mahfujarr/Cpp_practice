#include <iostream>
#include <string>
using namespace std;
class Song
{
public:
    string title;
    int duration;

    void setDuration(int newDuration)
    {
        duration = newDuration;
    }

    void displayDetails()
    {
        cout << "Song Title: " << title << endl;
        cout << "Duration: " << duration << " seconds" << endl;
    }
};
int main()
{
    Song songs[15];

    songs[0].title = "Bohemian Rhapsody";
    songs[0].setDuration(367);

    songs[1].title = "Stairway to Heaven";
    songs[1].setDuration(480);

    songs[2].title = "Hey Jude";
    songs[2].setDuration(441);

    songs[3].title = "Imagine";
    songs[3].setDuration(269);

    songs[4].title = "Sweet Child O' Mine";
    songs[4].setDuration(316);

    songs[5].title = "Hotel California";
    songs[5].setDuration(409);

    songs[6].title = "Wonderwall";
    songs[6].setDuration(273);

    songs[7].title = "Let It Be";
    songs[7].setDuration(243);

    songs[8].title = "With or Without You";
    songs[8].setDuration(262);

    songs[9].title = "November Rain";
    songs[9].setDuration(866);

    songs[10].title = "Bohemian Rhapsody (Live Aid)";
    songs[10].setDuration(611);

    songs[11].title = "One";
    songs[11].setDuration(645);

    songs[12].title = "Kashmir";
    songs[12].setDuration(811);

    songs[13].title = "Hey You";
    songs[13].setDuration(423);

    songs[14].title = "Nothing Else Matters";
    songs[14].setDuration(608);

    int longestDuration = 0;
    int longestIndex = 0;

    for (int i = 0; i < 15; i++)
    {
        if (songs[i].duration > longestDuration)
        {
            longestDuration = songs[i].duration;
            longestIndex = i;
        }
    }
    cout << "Song with the longest duration:\n";
    songs[longestIndex].displayDetails();
    return 0;
}