#include <iostream>
using namespace std;
int main(){
    int num = 0;
    int soma = 0;
    cout << "Digite um número: ";
    cin >> num;
    while (num > 0){
        soma += num;
        cout << "Digite outro número: ";
        cin >> num;
    }
    cout << "A soma é: " << soma << endl;
    return 0;
}