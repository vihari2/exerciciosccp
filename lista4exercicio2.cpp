//2) Criem um programa que tem duas funções secundárias, sendo:
//a- Uma função que leia um número inteiro e verifique se o número é divisível
//por 5 e por 3 ao mesmo tempo.
//b- Dados quatro números distintos, desenvolver uma função que determine e
//imprima a soma dos três menores.

#include <iostream>
using namespace std;
int LerNumero(int &numero) {
    cout << "Digite um número inteiro: " << endl; 
    cin >> numero;
    if (numero % 5 == 0 && numero % 3 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int ValoresComparacao(float &num1, float &num2, float &num3, float &num4) {
    float menor, segundoMenor, terceiroMenor;
    //o primeiro menor valor entre os 4 valores
    menor = num1;
    if (num2 < menor) {
        menor = num2;
    } else if (num3 < menor) {
        menor = num3;
    } else if (num4 < menor) {
        menor = num4;
    }
    //o segundo menor valor entre os 4 valores
    segundoMenor = num1;
    if (num2 < segundoMenor && num2 > menor) {
        segundoMenor = num2; 
    } else  if (num3 < segundoMenor && num3 > menor) {
        segundoMenor = num3;
    }
    else if (num4 < segundoMenor && num4 > menor) {
        segundoMenor = num4;
    }
    //o terceiro menor valor entre os 4 valores
    terceiroMenor = num1;
    if (num2 < terceiroMenor && num2 > segundoMenor) {
        terceiroMenor = num2;
    } else if (num3 < terceiroMenor && num3 > segundoMenor) {
        terceiroMenor = num3;
    } else if (num4 < terceiroMenor && num4 > segundoMenor) {
        terceiroMenor = num4;
    }
    return menor + segundoMenor + terceiroMenor;
}

int main() {
    int numero;
    float num1, num2, num3, num4;
    if (LerNumero(numero) == 1) {
        cout << "O número " << numero << " é divisível por 3 e 5 ao mesmo tempo" << endl;
    } 
    else {
        cout << "O número " << numero << " não é divisível por 3 e 5 ao mesmo tempo" << endl;
    }
    cout << "Digite 4 numeros: " << endl;
    cin >> num1 >> num2 >> num3 >> num4; 
    cout << "A soma dos três numeros menores é " << ValoresComparacao(num1, num2, num3, num4) << endl;
    return 0;
}


