#include <iostream>
using namespace std;

int main(){
    int x = 0;
    int divide = 0;
    int cont = 0;
    cout << "Digite um número: ";
    cin >> x;
    divide = x;
    while (divide > 0){
    divide = divide / 10;
    cont++;
    }
    cout << "O numero tem " << cont << " digitos." << endl;
}

    