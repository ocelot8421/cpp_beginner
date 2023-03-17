#include <iostream>
#include <string>

using namespace std;

int main(){
    double price = stod("19.99");
    cout << price << endl;
    price = stod("19.99x");
    cout << price << endl;
    price = stod("19.x99");
    cout << price << endl << endl;
//    price = stod("x19.99");
//    cout << price << endl;

    string str = to_string(19);
    cout << str << endl;
    str = to_string(19.9);
    cout << str << endl;

    return 0;
}