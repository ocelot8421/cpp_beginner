#include <iostream>

using namespace std;

//int[] -> int*
void printNumbers(int numbers[], int size){ //size is needed to be given as parameter
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << endl;
    }
    
}

int main(){
    int numbers[] = {10, 20, 30};
    printNumbers(numbers, size(numbers));
    return 0;
}