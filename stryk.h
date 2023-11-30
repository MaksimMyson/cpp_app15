#ifndef STRYK_H
#define STRYK_H

#include <iostream>

struct Complex {
    double real;
    double imag;

    // Конструктор за замовчуванням
    Complex() : real(0.0), imag(0.0) {}

    // Конструктор з параметрами
    Complex(double r, double i) : real(r), imag(i) {}
};

// Операція додавання комплексних чисел
inline Complex operator+(const Complex& a, const Complex& b) {
    return Complex(a.real + b.real, a.imag + b.imag);
}

// Операція віднімання комплексних чисел
inline Complex operator-(const Complex& a, const Complex& b) {
    return Complex(a.real - b.real, a.imag - b.imag);
}

// Операція множення комплексних чисел
inline Complex operator*(const Complex& a, const Complex& b) {
    return Complex(a.real * b.real - a.imag * b.imag, a.real * b.imag + a.imag * b.real);
}

// Операція ділення комплексних чисел
inline Complex operator/(const Complex& a, const Complex& b) {
    double denominator = b.real * b.real + b.imag * b.imag;
    return Complex((a.real * b.real + a.imag * b.imag) / denominator, (a.imag * b.real - a.real * b.imag) / denominator);
}

#endif // STRYK_H
