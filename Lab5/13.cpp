#include <iostream>
#include <string>
using namespace std;
class Movie
{
public:
    string title;
    string genre;
    void setGenre(const string &newGenre)
    {
        genre = newGenre;
    }
    void displayDetails()
    {
        cout << "Movie Title: " << title << endl;
        cout << "Genre: " << genre << endl;
    }
};
int main()
{
    Movie movies[9];

    movies[0].title = "The Shawshank Redemption";
    movies[0].setGenre("Drama");

    movies[1].title = "The Godfather";
    movies[1].setGenre("Crime, Drama");

    movies[2].title = "The Dark Knight";
    movies[2].setGenre("Action, Crime, Drama");

    movies[3].title = "12 Angry Men";
    movies[3].setGenre("Drama");

    movies[4].title = "Schindler's List";
    movies[4].setGenre("Biographical, Drama, History");

    movies[5].title = "The Lord of the Rings: The Return of the King";
    movies[5].setGenre("Adventure, Drama, Fantasy");

    movies[6].title = "Pulp Fiction";
    movies[6].setGenre("Crime, Drama");

    movies[7].title = "The Good, the Bad and the Ugly";
    movies[7].setGenre("Western");

    movies[8].title = "Fight Club";
    movies[8].setGenre("Drama");
    for (int i = 0; i < 9; i++)
    {
        movies[i].displayDetails();
        cout << endl;
    }
    return 0;
}