#include <iostream>
#include <string>

using namespace std;

// Задание S51
// Напишите функцию reverse(), которая принимает строку и выводит ее на экран в отраженном виде. «Testing» → «gnitseT»

// Первй способ
string reverse1(string str) {
    string reversedStr;
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }
    return reversedStr;
}

// Второй способ
void reverse2(string str) {
  for (int i = str.length()-1; i >= 0; i--) {
    cout << str[i];
  }
  cout << endl;
}

int main() {
  char str[666];
  cout << "Введите строку: ";
  cin.getline(str, 666);
  
  cout << "Получили: ";
  reverse2(str);
  
  string reversedStr = reverse1(str);
  cout << "Получили: " << reversedStr;
  
  return 0;
}