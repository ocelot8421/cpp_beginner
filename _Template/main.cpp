// 0027_2_C_Strings 
// ----  Should avoid from this, MEMORY LEAK risk !!!!!

#include <iostream>

using namespace std;   

// PascalCase
// struct Movie {
//     string title;
//     int releaseYear;
//     bool isPopular;
// };

int main() {
    // string name = "Pablo";

    //Null terminator (\0)
    // char name[6] = {'P', 'a', 'b', 'l', 'o', '\0'};     //cstring - (with null terminator)
    // char name[6] = {'P', 'a', 'b', 'l', 'o'};        //aray of characters - (there is no null terminator)

    //String literal
    char name[6] = "Pablo";     //null terminator automaticly added by default
    return 0; //TODO nem enged debugolni
}

