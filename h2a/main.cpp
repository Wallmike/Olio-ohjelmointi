#include "Rectangle.h"
#include "car.h"
#include "rectangle.h"
#include "student.h"

#include <iostream>
#include <memory>

using namespace std;

int main() {
    // Vaihe 1: Car-luokka
    Car objCar;
    objCar.setBrand("Ford");
    objCar.setModel("Fiesta");
    objCar.setYearModel(2012);

    objCar.printData();

    // Vaihe 2: Rectangle-luokka

    Rectangle *objRectangle;
    objRectangle = new Rectangle;

    objRectangle->setHeight(5);
    objRectangle->setWidth(10);
    cout << "Rectangle area: " << objRectangle->getArea() << endl;
    cout << "Rectangle circumference: " << objRectangle->getCircum() << endl;

    delete objRectangle;
    objRectangle = nullptr;

    // Vaihe 3: Student-luokka

    unique_ptr<Student> objStudent = make_unique<Student>();
    objStudent->setName("Stephen Student");
    objStudent->setStudentNumber(728);
    objStudent->setAverage(6.8);

    cout << "Student name: " << objStudent->getName() << endl;
    cout << "Student id number: " << objStudent->getStudentNumber() << endl;
    cout << "Student grade point average: " << objStudent->getAverage() << endl;

    return 0;
}
