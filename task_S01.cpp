#include <iostream>

// Задание S01
// Создать 4 переменных разного типа, продемонстрировать работу четырех арифметических операторов на выбор

int main() {
    int a;       // целое число
    float b;     // нецелочисленное (7 знаков после запятой)
    double c;    // нецелочисленное (2х знаков после запятой)
    char d;      // символ, который будет хранить число в данном примере

    std::cout << "Введите целое число (a): ";
    std::cin >> a;

    std::cout << "Введите число с плавающей точкой (b): ";
    std::cin >> b;

    std::cout << "Введите число с плавающей точкой (c): ";
    std::cin >> c;

    std::cout << "Введите любой символ или цифру (d): ";
    std::cin >> d;  // cимволы и цифры представляются в char как код

    // Сложение  
    int sum = a + d;  // символ преобразуется в int
    std::cout << "Сумма a и d: " << sum << std::endl;

    // Вычитание
    float subtract = b - c;
    std::cout << "Разность b и c: " << subtract << std::endl;

    // Умножение
    double multiplication = b * c;
    std::cout << "Произведение b и c: " << multiplication << std::endl;

    // Деление
    double division = a / c;  // делим целое число (int) на double
    std::cout << "Частное a и c: " << division << std::endl;

    return 0;
}
