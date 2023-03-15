#include <iostream>

using namespace std;

int main(){
    int first[] = {10, 20, 30};
    const int sizeFirst = size(first);
    int second[sizeFirst];

    for (int i = 0; i < sizeFirst; i++)
        second[i] = first[i];
    
    for (int number : second)
        cout << number << endl;
    
    cout << second;
    return 0;
}