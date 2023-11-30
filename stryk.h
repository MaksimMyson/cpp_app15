#ifndef STRYK_H
#define STRYK_H

#include <iostream>
#include <string>

using namespace std;

// Структура, що описує автомобіль
struct Car {
    double length;
    double groundClearance;
    double engineVolume;
    double enginePower;
    double wheelDiameter;
    string color;
    string transmissionType;
};

// Функція для задавання значень автомобіля
void setCarValues(Car& car, double length, double groundClearance, double engineVolume, double enginePower,
    double wheelDiameter, const string& color, const string& transmissionType);

// Функція для відображення значень автомобіля
void displayCar(const Car& car);

// Функція для пошуку автомобілів за певним критерієм (наприклад, за довжиною)
void searchCarsByCriterion(const Car cars[], int size, double criterion);

#endif // STRYK_H
