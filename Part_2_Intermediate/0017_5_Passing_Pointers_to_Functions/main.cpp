#include <iostream>

using namespace std;

void increasePrice(double price){
    price *= 1.2;
}

void increaseRefPrice(double& price){
    price *= 1.2;
}

void increasePointerPrice(double* price){
    *price *= 1.2;
}

int main(){
    double price = 100;
    increasePrice(price);       //asked for value
    cout << price << endl;

    price = 100;
    increaseRefPrice(price);    //asked for reference
    cout << price << endl;

    price = 100;
    increasePointerPrice(&price);    //asked for pointer
    cout << price << endl;

    return 0; 
}