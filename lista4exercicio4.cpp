//4) Crie um programa que compara duas strings (não use a função strcmp

#include <iostream>
using namespace std;

int comparaStrings(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return 0;
    }
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] != str2[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    string str1, str2;
    cout << "Digite a primeira string: ";
    cin >> str1;
    cout << "Digite a segunda string: ";
    cin >> str2;
    if (comparaStrings(str1, str2)) {
        cout << "As strings sao iguais" << endl;
    } else {
        cout << "As strings sao diferentes" << endl;
    }
    return 0;
}
