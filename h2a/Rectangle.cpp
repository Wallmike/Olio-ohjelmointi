#include "rectangle.h"

double Rectangle::getWidth() const {
    return width;
}

void Rectangle::setWidth(double newWidth) {
    width = newWidth;
}

double Rectangle::getHeight() const {
    return height;
}

void Rectangle::setHeight(double newHeight) {
    height = newHeight;
}

double Rectangle::getArea() {
    double area = this->getHeight() * this->getWidth();
    return area;
}

double Rectangle::getCircum() {
    double circum = 2* (this->getHeight() + this->getWidth());
    return circum;
}

Rectangle::Rectangle() {}
