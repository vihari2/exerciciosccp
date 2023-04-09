#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{   
    string algo; 
    cout << "Escreva alguma coisa:" << endl;
    cin >> algo; 
    reverse(algo.begin(), algo.end());
    cout << "O que você escreveu de modo invertido: " << algo << endl;
    return 0;
}