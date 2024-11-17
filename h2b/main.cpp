#include <iostream>
#include <vector>
#include "Car.h"

using namespace std;

int main() {

    vector<Car> carList;
    Car car1("Ford", "Fiesta", 2012);
    Car car2("Toyota", "Yaris", 2005);
    Car car3("Opel", "Corsa", 2008);

    carList.push_back(car1);
    carList.push_back(car2);
    carList.push_back(car3);

    cout << "Toisen alkion tiedot:" <<endl;
    carList[1].printData();

    cout << "\nKaikkien autojen tiedot:\n" <<endl;
    for (int x=0; x<=2;x++) {
        carList[x].printData();
    }

    return 0;
}
