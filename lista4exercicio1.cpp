#include <iostream>
#include <string>

using namespace std;
 int ContaAgua(string& consumo) {
    float Resultado;
    if (consumo == "RESIDENCIAL") {
      Resultado = 5 + (0.05 * Resultado);
    } else if (consumo == "COMERCIAL") {
      Resultado = 500;
    } else if (consumo == "INDUSTRIAL") {
      Resultado = 800;
    } else {
      cout << "O tipo de consumo não é válido" << endl;
    }
    return Resultado;
 }

int main()
{ 
  string consumo;
  string residencial; 
  string comercial;
  string industrial;
  float contaResidencial, contaComercial, contaIndustrial;
  float valor = 0;
  cout << "Por favor, digite o valor da conta de água: " << endl;
  cin >> valor; 
  cout << "Qual é o tipo de consumo? Residencial, comercial ou industrial?" << endl;
  cin >> consumo;
  ContaAgua();
  cout << "A conta de água é do valor de" << resultado <<

}