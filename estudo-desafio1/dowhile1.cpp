#include <iostream>
using namespace std;
int main(){
//mesmo exercicio do while 2
int x = 0;
int divide = 0;
int cont = 0;
cout << "Digite um número: ";
cin >> x;
divide = x;
do {
divide = divide / 10;
cont++;
}
while(divide > 0);
cout << "O numero tem " << cont << " digitos." << endl;
}