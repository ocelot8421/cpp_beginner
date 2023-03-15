#include <iostream>

using namespace std;

int main(){
    int numbers[] = {10, 20, 30};

    cout << sizeof(numbers) << endl;                //number of bytes!
    cout << size(numbers) << endl;
    for (size_t i = 0; i < sizeof(numbers) / sizeof(int); i++)
    {
        cout << numbers[i] << endl;
    }

    return 0;
}