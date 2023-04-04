// Nome: Vitória de Freitas Machado da Silva.
// Matrícula: 
// Data: 31/03/2022.
// Fazer a soma dos primeiros 20 elementos de uma progressão aritmética 
//de razão 3 e cujo 1º elemento é fornecido pelo usuário. 


#include <iostream>


using namespace std;

int main()
{ 
  int i = 0;
  int razao = 3; 
  float primeiroElemento = 0;
  float progressaoAritmetica = 0;
  cout << "Digite o primeiro elemento da progressão aritmética: " << endl;
  cin >> primeiroElemento;
  while(i < 20) {
    progressaoAritmetica = primeiroElemento + razao * i;
    i++;
  }   
  cout << "A soma dos primeiros 20 elementos da progressão aritmética é: " << progressaoAritmetica << endl;
}