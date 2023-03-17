#include <iostream>

using namespace std;

int main(){
    string name = "Mona; Lisaaa,";
    string iiii = "0123456789012";
    cout << name.find('a') << endl;
    cout << name.find('a', 4) << endl;
    cout << name.find('A') << endl; //18446744073709551615 "=" -1;
    size_t t = -1;
    cout << t << endl;

    cout << "----" << endl;
    cout << name.rfind('a') << endl;
    cout << name.find_first_of(",.;") << endl;
    cout << name.find_last_of(",.;") << endl;

    cout << "----" << endl;
    cout << name.find_first_not_of("Mo") << endl
         << name.find_last_not_of("a,");

    return 0;
}