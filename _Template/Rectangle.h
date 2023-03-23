#ifndef ADVANCED_RECTANGLE_H
#define ADVANCED_RECTANGLE_H

class Rectangle {
    public:
        void draw();
        int getArea();
        int getWidth();
        int getHeight();
        void setWidth(int width);
        void setHeight(int height);
    private:
        int width;      //by default, the attributes are inaccessible in the case of classes (in case of struct they are accessible by default)
        int height;
};

#endif //ADVANCED_RECTANGLE_H