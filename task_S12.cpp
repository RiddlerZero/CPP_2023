#include "iostream"
using namespace std;

// Задание S12
// Использую другой тип цикла, перебрать числа от 1 до 1000 с шагом 4. Найти сумму всех числе, который делятня на 7 без остатка

int main(){
  int sum = 0;
  for (int i = 1; i <= 1000; i += 4) {
    if (i % 7 == 0) {
      sum += i;
    }
  }
  cout<< sum << endl;
  return 0;
}