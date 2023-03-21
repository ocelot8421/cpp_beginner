#include <iostream>

using namespace std;

int main(){                         //TODO (3) CMakefile for all exe files
    string name = "Mona";
    name.append(" Lisa");
    cout << name << endl;
    name.insert(0, "I am ");
    cout << name << endl;
    name.erase(0, 2);
    cout << name << endl;
    name.replace(0, 2, "AM");
    cout << name << endl;
    name.clear();
    cout << name << "..." << endl;
    return 0;
}