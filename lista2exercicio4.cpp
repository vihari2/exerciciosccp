#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Digite uma string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {
            if (str[i] == 'z') {
                str[i] = 'a';
            } else if (str[i] == 'Z') {
                str[i] = 'A';
            } else {
                str[i]++;
            }
        }
    }

    cout << "String transformada: " << str << endl;

    return 0;
}