#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream file;
    file.open("data.txt");  //create or overwriten
    if (file.is_open())
    {
        file << "Hello World" << endl;
    }
    
    return 0;
}