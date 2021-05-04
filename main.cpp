#include <iostream>
#include <cstdlib>
#include <clocale>

using namespace std;

int main() {
  
  setlocale(LC_ALL,"");

  int z, t, a;
  cout << "Insira o valor desejado: ";
  cin >> z;
  cout << "Insira outro valor: ";
  cin >> t;
  a = z+t;
  cout << "Resultado: " << a << endl;
  return 0;
}