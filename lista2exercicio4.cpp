#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Digite uma string: ";
    getline(cin, str);
    int len = str.length();
    int i = len - 1;
    int flag = 0;

    for (int j = 0; i > j; j++, i--) {
        if (str[i] != str[j]) {
            cout << "não é um palindrome";
            flag = 1;
            break;
        }
    }
    if(flag == 0) {
        cout << "eh um palindrome";
    }
    return 0;
}