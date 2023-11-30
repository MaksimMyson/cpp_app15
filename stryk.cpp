#include "stryk.h"

using namespace std;

// Функція для задавання значень автомобіля
void setCarValues(Car& car, double length, double groundClearance, double engineVolume, double enginePower,
    double wheelDiameter, const string& color, const string& transmissionType) {
    car.length = length;
    car.groundClearance = groundClearance;
    car.engineVolume = engineVolume;
    car.enginePower = enginePower;
    car.wheelDiameter = wheelDiameter;
    car.color = color;
    car.transmissionType = transmissionType;
}

// Функція для відображення значень автомобіля
void displayCar(const Car& car) {
    cout << "Car Details:" << endl;
    cout << "Length: " << car.length << " meters" << endl;
    cout << "Ground Clearance: " << car.groundClearance << " meters" << endl;
    cout << "Engine Volume: " << car.engineVolume << " cc" << endl;
    cout << "Engine Power: " << car.enginePower << " hp" << endl;
    cout << "Wheel Diameter: " << car.wheelDiameter << " inches" << endl;
    cout << "Color: " << car.color << endl;
    cout << "Transmission Type: " << car.transmissionType << endl;
    cout << endl;
}

// Функція для пошуку автомобілів за певним критерієм (наприклад, за довжиною)
void searchCarsByCriterion(const Car cars[], int size, double criterion) {
    cout << "Cars with " << criterion << " meters length:" << endl;

    for (int i = 0; i < size; ++i) {
        if (cars[i].length == criterion) {
            displayCar(cars[i]);
        }
    }
}
