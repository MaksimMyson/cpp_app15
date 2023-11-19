#ifndef STRYKTYRU_H
#define STRYKTYRU_H

#include <cmath>

struct Point {
    double x;
    double y;
};

double calculateDistance(const Point& p1, const Point& p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return std::sqrt(dx * dx + dy * dy);
}

#endif