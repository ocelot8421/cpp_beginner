#include <iostream>

using namespace std;

int main(){
    string name = "Mona Lisa";

    string copy = name.substr(5, 3);
    cout << copy << endl;

    string firstName = name.substr(0, name.find(' '));
    cout << firstName << endl;

    string alias = "Mona Alias Lisa";
    auto space1 = alias.find(' ');
    auto space2 = alias.rfind(' ');
    string midName = alias.substr(space1 + 1, space2 - space1);
    cout << "....." << endl;
    cout << midName << endl;
    return 0;
}