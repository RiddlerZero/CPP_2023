#include <iostream>
#include <cmath>

// Задание M02
// Функция get_square(A, N) принимает два параметра: сторона A и число сторон N, и должна вернуть площадь N-угольника со сторонами A 

double get_square(double A, int N) {
    // S=((P)*(a))/2
    // P=A*N - периметр
    // a= A/(2*tan*(180/N)) - апофема (радиус вписанной окружности)
    double square = ((A*N)*(A/(2*tan(180/N))))/2;
    return square;
}

int main() {
    double A;
    int N;

    std::cout << "Введите длину стороны A: ";
    std::cin >> A;
    std::cout << "Введите количество сторон N: ";
    std::cin >> N;

    // Вычисляем площадь
    double square = get_square(A, N);

    std::cout << "Площадь " << N << "-угольника со стороной " << A << " равна: " << square << std::endl;

return 0;
}