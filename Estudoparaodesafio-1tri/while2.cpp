#include <iostream>
using namespace std;

int main(){
    int x = 0;
    int soma = 0;
    cout << "Digite um numero: ";
    cin >> x;
    while (x > 0)
    {
        soma += x;
        cout << "Digite outro numero: ";
        cin >> x; 
    }
    cout << "Voce digitou um numero negativo ou zero, o programa foi encerrado." << endl;
    cout << "A soma dos numeros digitados e: " << soma << endl;
    return 0;
}