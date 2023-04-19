// Faça uma função chamada maxpot() que recebe como parâmetros
// três inteiros: X, Y e MAX. Esta função deve devolver 2 valores: o
// resultado de XY e o valor 1 (um) se este valor calculado for menor que
// MAX, ou 0 (zero) caso contrário.


#include <iostream>

using namespace std;

void maxpot(int x, int y, int max, int& resultado, int& menor_que_max) {
    resultado = x * y;
    menor_que_max = (resultado < max) ? 1 : 0;
    
}

int main() {
    int x = 30;
    int y = 20;
    int max = 10;
    int resultado, menor_que_max;
    maxpot(x, y, max, resultado, menor_que_max);
    
    cout << "O resultado de XY é " << resultado << endl;
    
    if (menor_que_max == 1) {
        cout << "O resultado é menor que " << max << endl;
    } else {
        cout << "O resultado é maior ou igual a " << max << endl;
    }
    
    return 0;
}
