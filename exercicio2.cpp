//Exercício 1: Faça um programa que leia três números e mostre em ordem decrescente (do maior para o menor).
//Autor: Vitória F M Silva.
//Disciplina: Linguagem de Programação.
//Data: 29/03/2023. 
//IDE: Visual Studio Code.

#include <iostream>
using namespace std;
int main () {
    int x, y, z; 
    cout << "Digite um numero: ";
    cin >> x; 
    cout << "Digite um numero: ";
    cin >> y;
    cout << "Digite um numero: ";
    cin >> z;
   
    if (x >= y && x >= z) {
        if (y >= z) {
            cout << x << " " << y << " " << z << endl;
        } else {
            cout << x << " " << z << " " << y << endl;
        }
    } else if (y >= x && y >= z) {
        if (x >= z) {
            cout << y << " " << x << " " << z << endl;
        } else {
            cout << y << " " << z << " " << x << endl;
        }
    } else {
        if (x >= y) {
            cout << z << " " << x << " " << y << endl;
        } else {
            cout << z << " " << y << " " << x << endl;
        }
    }

    return 0;
}