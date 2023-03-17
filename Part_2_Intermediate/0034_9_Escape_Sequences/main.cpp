#include <iostream>

using namespace std;

int main(){
    string str = "c:\\my folder";
    cout << str << endl;
    str = "\"Hello Word\"";
    cout << str << endl;
    str = "'Hello Word'";
    cout << str << endl << endl;

    char ch = '\'';
    cout << ch << endl;
    str = "Hello\n  World";
    cout << str << endl;
    str = "Hello\tWorld";
    cout << str << endl;
    str = "Hello\t\t\t\tWorld";
    cout << str << endl;
    return 0;
}