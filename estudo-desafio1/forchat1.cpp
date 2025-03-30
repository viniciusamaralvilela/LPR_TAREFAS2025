#include <iostream>
using namespace std;
int main(){
    int num = 0;
    int soma = 0;
    int i = 0;
    cout << "Digite um número: ";
    cin >> num;
    for (i = 0; i < num; i++){
        soma += i;
    }
    cout << "A soma é: " << soma + num << endl;
}