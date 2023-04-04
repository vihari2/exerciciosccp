//Exercício 1: Faça um programa que leia uma letra e diga se é uma vogal ou uma consoante.
//Autor: Vitória F M Silva.
//Disciplina: Linguagem de Programação.
//Data: 29/03/2023. 
//IDE: Visual Studio Code.

#include <iostream>
using namespace std;

int main() {
  
  string letra;
  cout << "Digite uma letra: ";
  cin >> letra;

  string vogal[] = {"a", "e", "i", "o", "u"}; 
  string consoante[] = {"b", "c", "d", "f", "g", "h", "j", "k", "l", "m", "n", "p", "q", "r", "s", "t", "v", "w", "x", "y", "z"};

   for (int i = 0; i <= 4; i++) {
    if (letra == vogal[i]) {
      cout << "A letra digitada eh uma vogal" << endl;
      return 0;
    }
  }
  
  for (int i = 0; i <= 20; i++) {
    if (letra == consoante[i]) {
      cout << "A letra digitada eh uma consoante" << endl;
      return 0;
    }
  }
  cout << "Isso nao eh uma letra" << endl;
  return 0;
} 


