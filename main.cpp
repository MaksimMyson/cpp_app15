#include "stryk.h"
//i ������ ����� �������
//��������� ����� ����� ������ a+bi
//��������� ����� ����� ��������, �������, �������, �����
//��� ����� ������� ��������������� �������
//���������: (a+bi)+(c+di)=(a+c)+(b+d)i
//��������: (a+bi)-(c+di)=(a-c)+(b-d)i
//��������: (a+bi)*(c+di)=(ac-bd)+(ad+bc)i
//������: (a+bi)/(c+di)=(ac+bd)/(c^2+d^2)+((bc-ad)/(c^2+d^2))i
//��� ��������� ��� �������� ������� �������� ���� Complex
//� ����� ������ ���� real �� imag
//� ������������ ��������� +, -, *, /
//��� �������� �� ��������� ������������ �����
//����� ������� ���������� ������������ �� ����������
//��� ��������� �� �������� ������������ �����
//��������� ����� ����� ������� � ������ a+bi
//�� a - ����� �������, b - ����� �������
//���������: 3+4i
int main() {
    // ������� ������������ ����������� �����
    Complex num1(3.0, 4.0);  // 3 + 4i
    Complex num2(1.0, -2.0); // 1 - 2i

    // ���������
    Complex sum = num1 + num2;
    std::cout << "Sum: " << sum.real << " + " << sum.imag << "i" << std::endl;

    // ³�������
    Complex diff = num1 - num2;
    std::cout << "Difference: " << diff.real << " + " << diff.imag << "i" << std::endl;

    // ��������
    Complex product = num1 * num2;
    std::cout << "Product: " << product.real << " + " << product.imag << "i" << std::endl;

    // ĳ�����
    Complex quotient = num1 / num2;
    std::cout << "Fraction: " << quotient.real << " + " << quotient.imag << "i" << std::endl;

    return 0;
}
