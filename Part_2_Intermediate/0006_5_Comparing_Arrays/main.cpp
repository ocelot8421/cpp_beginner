#include <iostream>

using namespace std;

int main(){
    int first[] = {10, 20, 30};
    int second[] = {10, 20, 30};
    const int sizeFirst = size(first);

    bool isEqual = true;
    for (int i = 0; i < sizeFirst; i++)
    {
        if(second[i] != first[i]){
            isEqual = false;
            break;
        }
    }
    
    cout << boolalpha << isEqual;

    return 0;
}