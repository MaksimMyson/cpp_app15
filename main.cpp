#include "stryk.h"
#include <iostream>

int main() {
    Point point1 = { 1.0, 2.0 };
    Point point2 = { 4.0, 6.0 };

    std::cout << "Point 1: (" << point1.x << ", " << point1.y << ")\n";
    std::cout << "Point 2: (" << point2.x << ", " << point2.y << ")\n";

    double distance = calculateDistance(point1, point2);
    std::cout << "Distance between the points: " << distance << std::endl;

    return 0;
}