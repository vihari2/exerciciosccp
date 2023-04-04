// Nome: Vitória de Freitas Machado da Silva.
// Matrícula: 
// Data: 31/03/2022.
// Escrever um programa que leia do declado um valor n > 0 
//e que imprima a tabuada de n de 1 a 10. 

#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    float n; 
    cout << "Digite um valor de n que seja maior que 0" << endl; 
    cin >> n; 

    if (n > 0) {
        cout << "O valor de n é: " << n << endl;
        cout << "A tabuada de n é:" << endl;
        cout << n << " x 1 = " << n*1 << endl; 
        cout << n << " x 2 = " << n*2 << endl; 
        cout << n << " x 3 = " << n*3 << endl; 
        cout << n << " x 4 = " << n*4 << endl;
        cout << n << " x 5 = " << n*5 << endl;
        cout << n << " x 6 = " << n*6 << endl; 
        cout << n << " x 7 = " << n*7 << endl; 
        cout << n << " x 8 = " << n*8 << endl;
        cout << n << " x 9 = " << n*9 << endl; 
        cout << n << " x 10 = " << n*10 << endl; 
    }
    else {
        cout << "O valor de n é zero ou menor que zero";
    }
}