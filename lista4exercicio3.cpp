//3) Sejam z = a + bi e w = c + di dois números complexos e i a unidade
//imaginária. Crie quatro funções (uma para cada operação abaixo) que operem
//sobre dois números complexos informados pelo usuário e retornam o número
//complexo resultante da operação escolhida.
//Adição: z + w = (a + c) + (b + d)i
//Subtração: z - w = (a – c) + (b – d)i
//Multiplicação: z * w = (a*c – b*d) + (a*d + b*c)i
//Divisão: z / w = (a*c + b*d)/(c2 + d2) + ((b*c – a*d)/ (c2 + d2))i
#include <iostream>
#include <vector> 

using namespace std;

float add_real(float a, float b) {
    return a + b;
}

float add_imag(float a, float b) {
    return a + b;
}

float sub_real(float a, float b) {
    return a - b;
}

float sub_imag(float a, float b) {
    return a - b;
}

float mul_real(float a, float b, float c, float d) {
    return a * c - b * d;
}

float mul_imag(float a, float b, float c, float d) {
    return a * d + b * c;
}

float div_real(float a, float b, float c, float d) {
    float denominador = c * c + d * d;
    return (a * c + b * d) / denominador;
}

float div_imag(float a, float b, float c, float d) {
    float denominador = c * c + d * d;
    return (b * c - a * d) / denominador;
}

int main() {
    float z_real, z_imag, w_real, w_imag;
    cout << "Informe o valor real de z: ";
    cin >> z_real;
    cout << "Informe o valor imaginario de z: ";
    cin >> z_imag;
    cout << "Informe o valor real de w: ";
    cin >> w_real;
    cout << "Informe o valor imaginario de w: ";
    cin >> w_imag;
    cout << "z + w = " << add_real(z_real, w_real) << " + " << add_imag(z_imag, w_imag) << "i" << endl;
    cout << "z - w = " << sub_real(z_real, w_real) << " + " << sub_imag(z_imag, w_imag) << "i" << endl;
    cout << "z * w = " << mul_real(z_real, z_imag, w_real, w_imag) << " + " << mul_imag(z_real, z_imag, w_real, w_imag) << "i" << endl;
    cout << "z / w = " << div_real(z_real, z_imag, w_real, w_imag) << " + " << div_imag(z_real, z_imag, w_real, w_imag) << "i" << endl;
    return 0;
}
