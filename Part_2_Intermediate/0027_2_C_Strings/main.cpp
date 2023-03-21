// 0027_2_C_Strings 
// ----  Should avoid from this, MEMORY LEAK risk !!!!!

#include <iostream>
#include <cstring>

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

    // //String literal
    // char name[6] = "Pablo";     //null terminator automaticly added by default
    // //Character literal
    // name[0] = 'p';
    // cout << strlen(name) << endl;       //5 (6.: '\0') null terminator

    char name[50] = "Pablo";     //[50] instead of [6] what was in the first case
    cout << name << endl;
    char nickName[] = "Picasso";
    //Concatenate
    strcat(name, nickName);
    cout << name << endl;
    //Copy
    strcpy(name, nickName);
    cout << name << endl;
    //Compare
    if(strcmp(name, nickName) == 0)
        cout << "Equal";        //Mivel átmásoltuk
    return 0;
}

