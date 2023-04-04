#include <iostream>

using namespace std;

int main()
{
  int n1, n2; 
  char op = ' ';
  cout << "Digite um numero: "; 
  cin >> n1;
  cout << "Digite outro numero: ";
  cin >> n2;
  cout << "Digite a operação desejada: ";
  cin >> op;

  if (op == '+') {
    cout << n1 + n2 << endl; 
  }
  else if (op == '-') {
    cout << n1 - n2 << endl; 
  }
  else if (op == '*') {
    cout << n1 * n2 << endl;
  } else if (op == '/') {
    cout << n1 / n2 << endl;
  } else {
    cout << "Inválido" << endl;
  }
  
}
