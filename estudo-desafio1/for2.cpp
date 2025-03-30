#include <iostream>
using namespace std;

int main(){
    int x = 0;
    int i;
    int conta;
    cout << "Digite um número: ";
    cin >> x;
    for (i = 1; i < 11; i++){
    conta = x * i;
    cout << x << " * " << i << " = " << conta << endl;
    }
    cout << endl;
    return 0;
}
