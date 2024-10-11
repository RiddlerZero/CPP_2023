#include <iostream>
#include <cstring>

using namespace std;

// Задание S32
// Пользователь вводит строку. Используя указатель на строку, сдвиньте каждую букву в строке на 1 (a → b, b→c …) (каждый символ задается числом) длину строки можно получить функцией strlen() из библиотеки cstring

int main() {
    char str[666];
    cout << "Введите строку: ";
    cin.getline(str, 666);
    
    char *petr = str;
    
    while (*petr != '\0'){
        if (*petr >= 'a' && *petr <= 'z'){
            *petr = *petr + 1;
            if (*petr > 'z'){
                *petr = 'a';
            }
        }
        else if (*petr >= 'A' && *petr <= 'Z'){
            *petr = *petr + 1;
            if (*petr > 'Z'){
                *petr = 'A';
            }
        }
        petr++;
    }
    cout << "Получили: " << str << endl;
    return 0;
}
