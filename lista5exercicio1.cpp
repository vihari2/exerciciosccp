//Faça um Programa que leia 10 numeros inteiros, armazene-os em um valor, solicite um valor de referência inteiro e: 
//a) Informe quantos números são maiores que o valor de referência.
//b) retorno quantos numeros armazenados no vetor são menores que o valor de referencia.
//c) retorne quantas vezes o valor de referencia aparece no vetor.
#include <iostream>
using namespace std;

int main() {
  int valorDeReferencia = 0;
  float numeros[10];
  cout << "Digite 10 números inteiros" << endl;
  for (int i = 0; i < 10; i++) {
    cin >> numeros[i];
  }
  cout << "Digite um valor de referência: " << endl;
  cin >> valorDeReferencia;

  int iguais = 0;
  int menores = 0;
  int maiores = 0;

  for (int i = 0; i < 10; i++) {
    if (numeros[i] > valorDeReferencia) {
        maiores++; 
    } else if (numeros[i] < valorDeReferencia){
        menores++; 
  }
  
  for (int i = 0; i < 10;  i++ ) {
    if (numeros[i] = valorDeReferencia)
    iguais = iguais + 1;
  }

 cout << "Os números que são maiores que o valor de referência são: " <<  maiores << endl;
 cout << "Os números que são menores que o valor de referência são:  " << menores << endl;
 cout << "O valor de referência que é igual o vetor, são: " <<  iguais << endl;
 return 0;
}



