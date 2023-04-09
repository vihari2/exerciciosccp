#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   char op;
   int num1, num2, resultado;
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    cout << "Digite a operação desejada: ";
    cin >> op;

    switch(op) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-': 
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/': 
            resultado = num1 / num2;
            break;
        case '%':
            resultado = num1 % num2;
            break;
    }

}