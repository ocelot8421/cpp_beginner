#include <iostream>
#include <tuple>

using namespace std;

// PascalCase
struct Movie {
    string title;
    int releaseYear = 0;
    bool isPopular;
};

int main() {
    //C++: structured binding
    //JS: destructuring
    //Python: unpacking

    Movie movie = {"Cloud Atlas", 2012};
    auto [title, releaseYear, isPopular] = movie;


    cout << "Title: " << title << endl
         << "Release Year: " << releaseYear << endl
         << "Popular: " << isPopular << endl;
    int quit;
    cin >> quit;
    cout << quit;
    return 0;
}

