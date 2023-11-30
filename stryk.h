#ifndef STRYK_H
#define STRYK_H

#include <iostream>
#include <string>

using namespace std;

// ���������, �� ����� ���������
struct Car {
    double length;
    double groundClearance;
    double engineVolume;
    double enginePower;
    double wheelDiameter;
    string color;
    string transmissionType;
};

// ������� ��� ��������� ������� ���������
void setCarValues(Car& car, double length, double groundClearance, double engineVolume, double enginePower,
    double wheelDiameter, const string& color, const string& transmissionType);

// ������� ��� ����������� ������� ���������
void displayCar(const Car& car);

// ������� ��� ������ ��������� �� ������ ������� (���������, �� ��������)
void searchCarsByCriterion(const Car cars[], int size, double criterion);

#endif // STRYK_H
