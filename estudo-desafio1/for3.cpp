#include <iostream>
using namespace std;

int main(){
    int x = 0;
    int i = 0;
    int conta = 1;
    cout << "Digite um número: ";
    cin >> x;
    for (i = x; i>= 1; i--){
        conta = conta*i;
    }
    cout << conta << " " << endl;
}