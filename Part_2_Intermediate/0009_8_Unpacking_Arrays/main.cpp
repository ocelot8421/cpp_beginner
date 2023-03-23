// Topic: _ _ _ _ 

#include <iostream>

using namespace std;

int main(){
    int values[3] = {10, 20, 30};
    // C++:         structured binding
    // JavaScript:  destructuring
    // Python:      unpacking
    auto [x, y, z] = values;
    cout << x << ", "
         << y << ", "
         << z << endl;

    //int x = values[0];
    //int y = values[1];
    //int z = values[2];

    return 0;
}