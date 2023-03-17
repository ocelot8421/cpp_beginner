#include <iostream>

using namespace std;

int main(){
    string name = "Mona Lisa 11   ";
    //             012345678901234
    cout << islower(name[0]) << endl
        << islower(name[1]) << endl
        << isupper (name[5]) << endl
        << "-----" << endl
        << isalpha(name[4]) << endl
        << isdigit(name[10]) << endl
        << isspace(name[13]) << endl;

    string name2 = "Mona Lisa";
        for(char charizard : name2){
            cout << charizard << ": " << isspace(charizard) << endl;
        }
    
    cout << (char) toupper('a')
        << ": " << toupper('a') << endl
        << (char) toupper('-');

    // tolower -> cikluskilépésnél ajánlott
    // többi -> validálás
    return 0;
}