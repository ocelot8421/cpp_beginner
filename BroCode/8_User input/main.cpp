#include <iostream>

using namespace std;

// File --> Preferences --> Settings 
//--> search Code runner --> checkbox "Run in terminal"

int main(){
    cout << "test" << endl;

    string str;
    // cout << R"(Mark checkbox at "Run in terminal")" << endl;
    // cin >> str;
    // cout << str << endl;

    cout << "Write a sentence." << endl;
    cin >> str;             //>> A béka segge alatt.
    cout << str << endl;    //<< A                  //szó szerint "kimegy"
    getline(cin, str);      //<<  bka segge alatt.  //TODO (1) ékezeteket nem kezel
    cout << str << endl;

    //cin followed by getline
    string name2;
    int age2;
    cout << "What's your age?: ";
    cin >> age2;
    //'\n' - in input buffer, there is a new line character. //TODO (3) read about input buffer
    cout << "What's your full name?: ";
    // getline(cin, name2); // The remaining '\n is readed in by getline function instead prompt a new input.
    getline(cin >> ws, name2); // The remaining '\n is readed in by getline function 
    cout << "Hello " << name2 << " !\n";
    cout << "You are " << age2 << " years old." << '\n';

    return 0;
}