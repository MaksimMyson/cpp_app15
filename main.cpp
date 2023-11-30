#include "stryk.h"

using namespace std;

int main() {
    const int numCars = 3;
    Car cars[numCars];

    // ������ �������� ��� ������� ���������
    setCarValues(cars[0], 4.5, 0.15, 2000, 150, 18, "Blue", "Automatic");
    setCarValues(cars[1], 4.0, 0.2, 1800, 120, 17, "Red", "Manual");
    setCarValues(cars[2], 5.0, 0.18, 2500, 200, 20, "Black", "Automatic");

    // ³��������� �������� ������� ���������
    for (int i = 0; i < numCars; ++i) {
        displayCar(cars[i]);
    }

    // ����� ��������� �� ������ ������� (���������, �� ��������)
    searchCarsByCriterion(cars, numCars, 4.0);

    return 0;
}
