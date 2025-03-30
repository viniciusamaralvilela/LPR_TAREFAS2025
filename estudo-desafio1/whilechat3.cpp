#include <iostream>
using namespace std;

int main() {
    int num, inverted_num = 0;
    cout << "Digite um número inteiro: ";
    cin >> num;

    while (num != 0) {
        int digit = num % 10;
        inverted_num = inverted_num * 10 + digit;
        num /= 10;
    }

    cout << "Número invertido: " << inverted_num << endl;
    return 0;
}
