#include <iostream>

using namespace std;

// PascalCase
struct Movie {
    string title;
    int releaseYear;
};

int main(){
    Movie movie;
    movie.title = "Cloud Atlas";
    movie.releaseYear = 2012;
    cout << "Title: " << movie.title << endl
         << "Release Year: " << movie.releaseYear << endl;
    return 0;
}