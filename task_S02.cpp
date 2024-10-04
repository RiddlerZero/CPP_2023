#include "iostream"
using namespace std;

// Задание S02
// Покажите работу операторов деления на цело и опеределния остатка от деления

int main(){
  int a,b;
  cout<< "Введите два числа: " << endl;
  cin>> a >> b;
    
  int del=a/b;
  int ost=a%b;
    
  cout<< "Деление на цело= " << del << endl;
  cout<< "Остаток= " << ost << endl;
    
  return 0;
}