#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// Задание H03
// Функция same_digits(int from, int to)выводит на экран в возрастающем порядке все числа от from до to, в десятичной записи которых есть одинаковые цифры. Возвращает функция количество таких чисел. Если функции передается одно число, предполагается, что счет идет от 0:

int same_digits(int from, int to){
    int count = 0;
    if (from > to){
        swap(from, to);
    }
    cout << "Числа имеющие повторяющиеся цифры:" << endl;
    for (int i = from; i <= to; ++i){
        int num = i;
        bool flag = false;
        while (num > 0) {
            int digit = num % 10;
            num /= 10;
            if (num > 0 && (num % 10) == digit){
            flag = true;
            break;
            }
        }
        if (flag){
            cout << i << " ";
            ++count;
        }
    }
    cout << endl;
    cout << endl;
    return count;
}

int main() {
    int from, to;
    cout << "Введите одно/два числа через пробел: ";
    if (cin >> from){
        if (cin.peek() == '\n'){
            to = from;
            from = 0;
        }
        else{
            cin >> to;
            cout << endl;
        }
        int count = same_digits(from, to);
        cout << "Количество чисел с одинаковыми цифрами: " << count << endl;
    }
    else{
        cout << "Неправильно ввёл" << endl;
    }
    return 0;
}
