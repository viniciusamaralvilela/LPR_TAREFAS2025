#include <iostream>
using namespace std;
int main(){
    int num = 0;
    int i;
    cout << "Digite um número: ";
    cin >> num;
    for (i=0; i <= num; i = i + 2){
        cout << i << " ";
    }
}