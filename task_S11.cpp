#include "iostream"
using namespace std;

// Задание S11
// Циклически перебрать числа от 0 до 100. Если число кратно 3, то вывести его на экран

int main(){
  int i=0;
  while (i<101){
    if (i%3==0){
      cout<< i << endl;
    }
    i++;
  }
  return 0;
}