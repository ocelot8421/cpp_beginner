#include <iostream>
#include "utils/greet.hpp"

using namespace std;
using messaging::greet; //handy import in conflict case

int main() {
    // messaging::greet("Wonder Woman");
    greet("Wonder Woman");
    string temp; //wait for an input to stop the program
    cin >> temp;
    return 0;
}