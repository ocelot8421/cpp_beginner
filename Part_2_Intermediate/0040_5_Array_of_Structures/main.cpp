//0040_5_Array_of_Structures

#include <iostream>
#include <vector>        

using namespace std;

struct Movie {
    string title;
    int releaseYear = 0;
    bool isPopular;
};

int main(){
    //vector = list of objects
    vector<Movie> movies;
    movies.push_back({"Terminator 1", 1984});
    movies.push_back({"Terminator 2", 1991});

    for(const auto& movie : movies){
        cout << movie.title << ", " << movie.releaseYear << endl;
    }
    return 0;
}