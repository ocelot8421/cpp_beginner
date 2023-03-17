#include <iostream>

using namespace std;

// PascalCase
struct Movie {
    string title;
    int releaseYear = 0;
    bool isPopular;
};

int main(){
//    Movie movie;
//    movie.title = "Cloud Atlas";
//    movie.releaseYear = 2012;

    Movie movie = {"Cloud Atlas", 2012};
    /*While the omission of the equal sign is permissible,
     * including it results in greater clarity and precision.*/
    cout << "Title: " << movie.title << endl
         << "Release Year: " << movie.releaseYear << endl
         << "Popular: " << movie.isPopular << endl;
    return 0;
}

