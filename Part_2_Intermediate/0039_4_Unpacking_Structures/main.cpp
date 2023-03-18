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
    string quit;
    //https://www.youtube.com/watch?v=rgCJbsCSARM
    //Debug settings: View/Command Palette --> C/C++ Edit cinfiguration --> C standar - gnu23
    //Build settings: Terminal/Configure Default Build Task... --> gnu c++ compiler (alias g++) --> -g3 -Wall into arguments
    // --> Terminal/Run Build Task
    //Terminal/New terminal/Command Promptr --> navigate to the directory --> main.exe
    cout << "Press a button to quit: " ;
    cin >> quit;
    cout << "The End";
    return 0;
}

