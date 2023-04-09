#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string caracter;
    string caracterinverso; 
    cout << "Escreva algum caracter: " << endl;
    cin >> caracter;

    caracterinverso = string(caracter.rbegin(), caracter.rend());

    if(caracter == caracterinverso) {

        cout << "true, " << caracter << endl;

    } else {
        cout << "false, " << caracter << endl;

    }
}