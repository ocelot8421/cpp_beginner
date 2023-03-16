#include <iostream>

using namespace std;

void changeNumbers(int numbers[]){
    numbers[0] = 0;
}

int main(){
    int numbers[] = {10, 20, 30};
    cout << numbers << " " << *numbers << endl;

    int* ptr = numbers;
    cout << "ptr[1] " << ptr[1] << endl;
    changeNumbers(numbers);
    cout << "numbers[0] " << numbers[0]; 
    return 0;
}