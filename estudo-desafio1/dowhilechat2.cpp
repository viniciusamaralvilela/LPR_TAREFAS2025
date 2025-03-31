#include <iostream>
using namespace std;

int main (){
    const int senha = 1234;
    int tentativas = 0;
    cout << "Digite a senha: ";
    cin >> tentativas;
    do{
        cout << "Senha incorreta, tente novamente." << endl;
        cout << "Digite a senha novamente: ";
        cin >> tentativas;
    }
    while (tentativas != senha); //enquanto essa condição for verdadeira, o do repete
    cout << "Senha correta!" << endl;
}