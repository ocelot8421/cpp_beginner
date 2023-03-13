#include <iostream>

using namespace std;

void greet(string name);

int main(){
    greet("Beautiful <3");
    return 0;
}

void greet(string name){
    cout << "Hello " << name;
}