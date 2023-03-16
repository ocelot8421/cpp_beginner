//Implement the swap function for swapping two variables
//using pointers.

//void swap(int* first, int* second)



#include <iostream>
#include <string>

using namespace std;

void swap(int* first, int* second);


int main(){
    int x = 5;
    int y = 3;
    string xy = to_string(x) + "; " + to_string(y);
    cout << xy << endl;
    swap(&x, &y);
    xy = to_string(x) + "; " + to_string(y);
    cout << xy << endl;

    return 0;
}

void swap(int* first, int* second){
    int temp = *first;
    *first = *second;
    *second = temp;
}