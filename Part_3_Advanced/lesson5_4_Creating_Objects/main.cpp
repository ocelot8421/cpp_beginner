#include "Rectangle.h"        
#include <iostream>

using namespace std;

int main(){
    Rectangle rectangle;
    rectangle.width = 10;   //by default, the attributes are inaccessible in the case of classes (in case of struct they are accessible by default)
    rectangle.height = 20;
    int area = rectangle.getArea();
    cout << area << endl;

    return 0;
}