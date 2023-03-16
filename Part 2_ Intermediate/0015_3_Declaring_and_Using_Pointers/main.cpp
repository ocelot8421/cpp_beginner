#include <iostream>

using namespace std;

int main(){
    // int number = 10;
    // // cout << &number << endl;        

    // int* ptrNumber = &number;       
    // cout << "ptrNumber" << endl;      
    // cout << ptrNumber << endl;      
    // cout << *ptrNumber << endl << endl;     

    // int** ptrNumber2 = &ptrNumber;
    // cout << "ptrNumber2" << endl;     
    // cout << ptrNumber2 << endl;     
    // cout << *ptrNumber2 << endl << endl;    

    // *ptrNumber = 20;
    // cout << "ptrNumber = 20" << endl;      
    // cout << ptrNumber << endl;      
    // cout << *ptrNumber << endl;     
    // cout << "ptrNumber2" << endl;     
    // cout << ptrNumber2 << endl;     
    // cout << *ptrNumber2 << endl;    
    // cout << &ptrNumber2 << endl;

    int x = 10;
    int y = 20;
    int* ptr = &x;
    cout << "x: " << x << "; *ptr: " << *ptr << endl;
    *ptr *= 2;
    cout << "*ptr *= 2;" << endl;
    cout << "x: " << x << "; *ptr: " << *ptr << endl;
    ptr = &y;
    *ptr *= 3;
    cout << "y: " << y << "; *ptr: " << *ptr << endl;
}