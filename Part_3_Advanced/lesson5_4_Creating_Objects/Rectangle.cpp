/*
Created by Hajnalka Bőr on 23th March, 2023
*/
#include <iostream>
#include "Rectangle.h"

void Rectangle::draw(){
    std::cout << "Drawing a rectangle" << std::endl
              << "Dimensions: " << width << ", " << height << std::endl;
}

int Rectangle::getArea(){
    return width * height;
}