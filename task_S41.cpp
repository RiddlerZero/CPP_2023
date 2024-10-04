#include <iostream>
#include <cmath>
using namespace std;

// Задание S41
// Напишите функцию squared_sum(), которая принимает два дробных числа и возвращает квадрат их суммы

double squared_sum(double A, double N) {
    double squared = (A+N);
    return squared;
}

int main() {
    double A;
    double N;

    // Ввод данных
    cout << "Введите первое число A: ";
    cin >> A;

    cout << "Введите второе число N: ";
    cin >> N;

    double squared = squared_sum(A, N);

    cout << "Первое число: " << A << endl; 

    cout << "Второе число: " << N << endl;

    cout << "Сумиа в квадрате= " << pow(squared,2) << endl;
    
    return 0;
}