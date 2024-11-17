#include "car.h"

void Car::setBrand(const string &newBrand) {
    brand = newBrand;
}

void Car::setModel(const string &newModel) {
    model = newModel;
}

void Car::setYearModel(int newYearModel) {
    yearModel = newYearModel;
}

string Car::getBrand() const {
    return brand;
}

string Car::getModel() const {
    return model;
}

int Car::getYearModel() const {
    return yearModel;
}

Car::Car() {}

void Car::printData()
{
    cout << "Brand: " << this->getBrand() << endl;
    cout << "Model: " << this->getModel() << endl;
    cout << "Year model: " << this->getYearModel() << endl;

}
