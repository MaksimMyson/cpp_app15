#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

struct Fraction {
    int numerator;
    int denominator;
};

int findGCD(int a, int b);
Fraction reduceFraction(const Fraction& frac);
Fraction addFractions(const Fraction& frac1, const Fraction& frac2);
Fraction subtractFractions(const Fraction& frac1, const Fraction& frac2);
Fraction multiplyFractions(const Fraction& frac1, const Fraction& frac2);
Fraction divideFractions(const Fraction& frac1, const Fraction& frac2);

void printFraction(const Fraction& frac);
Fraction inputFraction();

#endif
