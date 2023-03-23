#include "Rectangle.h"        
#include <iostream>

using namespace std;

int main(){
    Rectangle rectangle;
    rectangle.setHeight(-1);   //by default, the attributes are inaccessible in the case of classes (in case of struct they are accessible by default)
    rectangle.setWidth(-1);   //by default, the attributes are inaccessible in the case of classes (in case of struct they are accessible by default)
    return 0;
}