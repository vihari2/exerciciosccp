#include <iostream>

using namespace std;

int main()
{
    int n1, n2, contador;
    contador = 0; 

    while (contador < 10) {
        cout << "Digite um numero: "; 
        cin >> n1;
        cout << "Digite outro numero: ";
        cin >> n2;
        cout << "A soma dos dois numeros é: " << n1 + n2 << endl;
        contador++;
    }
}