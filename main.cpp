#include "stryk.h"
//i означає уявну одиницю
//комплексні числа мають вигляд a+bi
//комплексні числа можна додавати, віднімати, множити, ділити
//для цього потрібно використовувати формули
//додавання: (a+bi)+(c+di)=(a+c)+(b+d)i
//віднімання: (a+bi)-(c+di)=(a-c)+(b-d)i
//множення: (a+bi)*(c+di)=(ac-bd)+(ad+bc)i
//ділення: (a+bi)/(c+di)=(ac+bd)/(c^2+d^2)+((bc-ad)/(c^2+d^2))i
//для реалізації цих операцій потрібно створити клас Complex
//в якому будуть поля real та imag
//і перевантажені оператори +, -, *, /
//для введення та виведення комплексного числа
//також потрібно реалізувати конструктори та деструктор
//для створення та знищення комплексного числа
//комплексні числа можна вводити у вигляді a+bi
//де a - дійсна частина, b - уявна частина
//наприклад: 3+4i
int main() {
    // Приклад використання комплексних чисел
    Complex num1(3.0, 4.0);  // 3 + 4i
    Complex num2(1.0, -2.0); // 1 - 2i

    // Додавання
    Complex sum = num1 + num2;
    std::cout << "Sum: " << sum.real << " + " << sum.imag << "i" << std::endl;

    // Віднімання
    Complex diff = num1 - num2;
    std::cout << "Difference: " << diff.real << " + " << diff.imag << "i" << std::endl;

    // Множення
    Complex product = num1 * num2;
    std::cout << "Product: " << product.real << " + " << product.imag << "i" << std::endl;

    // Ділення
    Complex quotient = num1 / num2;
    std::cout << "Fraction: " << quotient.real << " + " << quotient.imag << "i" << std::endl;

    return 0;
}
