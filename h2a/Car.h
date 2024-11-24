#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;


class Car
{
private:
    string brand;
    string model;
    int yearModel;

public:
    Car();
    void printData();
    void setBrand(const string &newBrand);
    void setModel(const string &newModel);
    void setYearModel(int newYearModel);
    string getBrand() const;
    string getModel() const;
    int getYearModel() const;
};

#endif // CAR_H