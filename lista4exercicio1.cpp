#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

float ContaAgua(string consumo, float valor) {
    float resultado = 0;
    if (consumo == "RESIDENCIAL") {
      resultado = 5 + (0.05 * valor);
    } else if (consumo == "COMERCIAL") {
      resultado = 500;
    } else if (consumo == "INDUSTRIAL") {
      resultado = 800;
    } else {
      cout << "O tipo de consumo não é válido" << endl;
    }
    return resultado;
 }

int main()
{ 
  string consumo;
  float valor = 0;
  cout << "Por favor, digite o valor da conta de água: " << endl;
  cin >> valor; 
  cout << "Qual é o tipo de consumo? Residencial, comercial ou industrial?" << endl;
  cin >> consumo;
  transform(consumo.begin(), consumo.end(), consumo.begin(), ::toupper); //transforma a string em maiúscula
  float resultado = ContaAgua(consumo, valor);
  if(resultado > 0){
    resultado += 0.05 * valor;
    cout << "A conta de água é do valor de R$" << resultado << endl;
  }
  return 0;
}