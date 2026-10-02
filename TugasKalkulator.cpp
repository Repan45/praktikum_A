#include <iostream>
using namespace std;

int main(){
  int a,b;
  char aritmatika;
  double hasil;

  cout << "====================================== \n";
  cout << "     PROGRAM KALKULATOR SEDERHANA      \n";
  cout << "====================================== \n \n";

  cout << "Masukkan Nilai Pertama: ";
  cin >> a;
  cout << "Masukkan Operator (+,-,x,/): ";
  cin >> aritmatika;
  cout << "Masukkan Nilai Kedua: ";
  cin >> b;

  switch(aritmatika){
    case '+':
      hasil = a + b;
      break;
    case '-':
      hasil = a - b;
      break;
    case 'x':
      hasil = a * b;
      break;
    case '/':
      hasil = a / b;
      break;
    default:
      cout << "ERROR!! Operator yang anda masukkan tidak sesuai\n";
  }
  
  cout << "Hasil dari " << a << " " << aritmatika << " " << b << " = " << hasil << endl;
  return 0;
}
