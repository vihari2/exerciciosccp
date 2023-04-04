// Nome: Vitória de Freitas Machado da Silva.
// Matrícula: 
// Data: 31/03/2022.
// Escrever um programa que leia uma sequência de 
//10 pares de valores reais e some as médias artiméticas de cada par. 


#include <iostream>


using namespace std;

int main()
{  
   
   int valor1, valor2; 
   float media;
   float somaDasMedias = 0; 
    cout << "Digite um par de valores reais: " << endl; 
    int i = 0;
   while (i < 10)  {
    cout << "Digite o primeiro valor: " << endl; 
    cin >> valor1;  
    cout << "Digite o segundo valor: " << endl; 
    cin >> valor2;
    media = (valor1 + valor2) / 2; 
    cout << "O valor da media desse par eh: " << media << endl;
    somaDasMedias = somaDasMedias + media;
    i++;
   }
    cout << "A soma das medias eh: " << somaDasMedias << endl;  
    return 0;
}