#include <iostream>
using namespace std;

// Задание M01
// Используя циклы выведите таблицу Пифагора. Она должна быть отформатирована (используйте символ табуляции)

int main() {
  for (int i = 1; i <11; i++){ 
    for (int count = 1; count < 11; count++){
      cout << count*i << '\t';
    }
    cout << '\n';
  }
return 0;
}