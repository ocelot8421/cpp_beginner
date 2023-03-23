//Implement the linear search algorithm.
/*
Create a function for finding a value in an integer array.
If the target value exists, return its index;
otherwise return -1.
*/

#include <iostream>

using namespace std;

int main(){
    int targetValue;
    int index = -1;
    int array[] = { 2, 5, 11, 9, 156, 35, 2};

    cout << "Which umber are you looking for?: " << endl;
    cin >> targetValue;

    for (int i = 0; i < size(array); i++)
    {
        if (array[i] == targetValue){
            index = i;
            break;
        }
    }
    
    cout << "index: " << index << endl;
    
    return 0;
}