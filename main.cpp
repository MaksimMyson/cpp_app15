#include "stryk.h"

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

Fraction reduceFraction(const Fraction& frac) {
    int gcd = findGCD(frac.numerator, frac.denominator);
    Fraction result = { frac.numerator / gcd, frac.denominator / gcd };
    return result;
}

Fraction addFractions(const Fraction& frac1, const Fraction& frac2) {
    int commonDenominator = frac1.denominator * frac2.denominator;
    int numeratorSum = frac1.numerator * frac2.denominator + frac2.numerator * frac1.denominator;

    Fraction result = { numeratorSum, commonDenominator };
    return reduceFraction(result);
}

Fraction subtractFractions(const Fraction& frac1, const Fraction& frac2) {
    int commonDenominator = frac1.denominator * frac2.denominator;
    int numeratorDiff = frac1.numerator * frac2.denominator - frac2.numerator * frac1.denominator;

    Fraction result = { numeratorDiff, commonDenominator };
    return reduceFraction(result);
}

Fraction multiplyFractions(const Fraction& frac1, const Fraction& frac2) {
    Fraction result = { frac1.numerator * frac2.numerator, frac1.denominator * frac2.denominator };
    return reduceFraction(result);
}

Fraction divideFractions(const Fraction& frac1, const Fraction& frac2) {
    Fraction result = { frac1.numerator * frac2.denominator, frac1.denominator * frac2.numerator };
    return reduceFraction(result);
}

void printFraction(const Fraction& frac) {
    std::cout << frac.numerator << "/" << frac.denominator;
}

Fraction inputFraction() {
    Fraction frac;
    std::cout << "Enter the numerator: ";
    std::cin >> frac.numerator;

    do {
        std::cout << "Enter the denominator (must be non-zero): ";
        std::cin >> frac.denominator;
    } while (frac.denominator == 0);

    return frac;
}

int main() {

    std::cout << "Enter the first fraction:\n";
    Fraction fraction1 = inputFraction();


    std::cout << "Enter the second fraction:\n";
    Fraction fraction2 = inputFraction();


    Fraction sum = addFractions(fraction1, fraction2);
    std::cout << "Sum: ";
    printFraction(sum);
    std::cout << std::endl;


    Fraction difference = subtractFractions(fraction1, fraction2);
    std::cout << "Difference: ";
    printFraction(difference);
    std::cout << std::endl;


    Fraction product = multiplyFractions(fraction1, fraction2);
    std::cout << "Product: ";
    printFraction(product);
    std::cout << std::endl;


    Fraction quotient = divideFractions(fraction1, fraction2);
    std::cout << "Quotient: ";
    printFraction(quotient);
    std::cout << std::endl;

    return 0;
}


