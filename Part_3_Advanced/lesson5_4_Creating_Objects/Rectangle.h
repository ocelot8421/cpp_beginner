#ifndef ADVANCED_RECTANGLE_H
#define ADVANCED_RECTANGLE_H

class Rectangle {
    public:
        int width;      //by default, the attributes are inaccessible in the case of classes (in case of struct they are accessible by default)
        int height;
        void draw();
        int getArea();
};

#endif //ADVANCED_RECTANGLE_H