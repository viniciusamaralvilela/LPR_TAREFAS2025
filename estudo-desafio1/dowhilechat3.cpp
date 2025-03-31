#include <iostream>
using namespace std;

int main(){
    int num = 0;
    int soma = 0;
    do{
        cout << "Digite um número: ";
        cin >> num;
        soma += num;
    }while(num > -1 );
    cout << "A soma dos números é: " << soma << endl;
    cout << "Você digitou um número negativo, o programa foi encerrado." << endl;
}