// Nome: Vitória de Freitas Machado da Silva.
// Matrícula: 
// Data: 31/03/2022.
// Escrever um programa que leia uma sequência de 
//10 pares de valores reais e, para cada par, escrever sua media.


#include <iostream>
#include <cmath>


using namespace std;


int main()
{
   int valor1, valor2;
   float media; 

   for (int contador = 1; contador <= 10; contador++) {
    cout << "Digite o primeiro valor: " << endl; 
    cin >> valor1;  
    cout << "Digite o segundo valor: " << endl; 
    cin >> valor2;
    media = (valor1 + valor2) / 2;
   cout << "A média dos pares são: " << media << endl;
   }
}
