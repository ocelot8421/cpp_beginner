/*
Created by Hajnalka Bőr on 23th March, 2023
*/
#include <iostream>
#include "Rectangle.h"

using namespace std;

void Rectangle::draw(){
    std::cout << "Drawing a rectangle" << std::endl
              << "Dimensions: " << width << ", " << height << std::endl;
}

int Rectangle::getArea(){
    return width * height;
}

int Rectangle::getWidth(){
    return width;
}

int Rectangle::getHeight(){
    return height;
}

void Rectangle::setWidth(int width){    //this is the benefit of getter and setter
    if (width < 0)
        throw invalid_argument("width");
    //m_width = width;
    //width = theWidth;
    //(*this).width = width;
    this->width = width;
}

void Rectangle::setHeight(int height){    //this is the benefit of getter and setter
    if (height < 0)
        throw invalid_argument("height");
    this->height = height;
}