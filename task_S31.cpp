#include <iostream>
#include <string>

using namespace std;

// Задание S31
// Создайте текстовый массив с названиями цифр от 0 до 9. Пользователь вводит число и получает на экран его название.

int main() {
    string digits[] = {"Ноль", "Один", "Два", "Три", "Четыре", "Пять", "Шесть", "Семь", "Восемь", "Девять"};
    int number;

    cout << "Введите цифру от 0 до 9: ";
    cin >> number;

    if (number >= 0 && number <= 9) {
        cout << "Вы ввели: " << digits[number] << endl;
    } else {
        cout << "Неправльно! Широкую на Широкую" << endl;
    }

    return 0;
}
