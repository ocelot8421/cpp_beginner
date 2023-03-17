#include <iostream>

using namespace std;

int main(){
    //Data is constant
    const int x = 10;
    const int* ptr = &x;                //a const az int-re utal, nem a pointerre
    int y = 20;
    ptr = &y;
    cout << "x = " << x;
    cout << "; ptr = " << ptr << endl;
    cout << "y = " << y;
    cout << "; ptr = " <<  ptr << endl;

    // Pointer is constant
    int z = 10;
    int* const ptrr = &z;
    int s = 20;
    //ptrr = &s;                  //másik helyre nem mutathat, de az értéke változhat
    *ptrr = s;
    cout << "z = " << z;
    cout << "; ptrr = " << ptrr << endl;
    cout << "*ptrr = " << s;
    cout << "; ptrr = " <<  ptrr << endl;

    //Both are constant
    const int n = 10;
    const int* const ptrn = &n;
    //*ptrn = 3;            //nem negedi az értékváltoztatást

    return 0;
}