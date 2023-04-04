// Nome: Vitória de Freitas Machado da Silva.
// Matrícula: 
// Data: 31/03/2022.
// Escrever um programa que leia do declado um valor n > 0 
//e que escreva na tela os valores raiz quadrada. 


#include <iostream>
#include <cmath>


using namespace std;

int main()
{
  float n; 
  float raiz; 
  cout << "Digite um valor de n que seja maior que 0" << endl;
  cin >> n; 
  raiz = sqrt(n);
  if (n > 0) {
    cout << "O valor de n é: " << n << endl;
    cout << "O valor da raiz quadrada de " << n << " é: " << raiz << endl; 
  }
  else {
    cout << "O valor n é zero ou menor que zero";
  }
}