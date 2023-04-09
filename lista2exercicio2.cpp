#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

int main()
{  
   int n = 0;
   float preco = 0;
   float inflacao;
   float precofinal;
   cout << "Digite o preço do produto: " << endl;
   cin >> preco;
   cout << "Você deseja repetir esse processo em quantas vezes?" << endl;
   cin >> n; 
   int i = 0;
   while(i < n) {
      if(preco < 100) {
         inflacao = 0.1; //10%
         precofinal = preco * (1 + inflacao); 
         cout << "o preço final do produto é:" << precofinal << endl; 
      } else if(preco >= 100) {
         inflacao = 0.2; //20%
         precofinal  = preco * (1 + inflacao);
         cout << "o preço final do produto é:" << precofinal << endl;
      }
      i++;
   }
   return 0;
}