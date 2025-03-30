#include <iostream>
#include <unistd.h> 
#include <cstdlib>
using namespace std;
int main(){
    int num = 0;
    cout << "Digite um número inteiro positivo: ";
    cin >> num;
    if (num < 0){
        "Digite um número positivo: ";
        cin >> num;
    }
    while (num >= 0){
    cout << num << " ";
    sleep (1); // Aguarda 1 segundo
    num --;
    }
    system("wmplayer C:\\Users\\Quinta_Valentina\\Music\\drinhododry.mp3");
    return 0;
}