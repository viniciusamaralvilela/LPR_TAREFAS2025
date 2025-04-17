#include <iostream>
#include <windows.h>

#pragma comment(lib, "winuser.lib")  // Linka a biblioteca necessária para PlaySound

int main() {
    // Solicita ao usuário um número inteiro positivo
    int num = 0;
    std::cout << "Digite um número inteiro positivo: ";
    std::cin >> num;

    // Verifica se o número é negativo e pede para o usuário digitar novamente
    while (num < 0) {
        std::cout << "Digite um número positivo: ";
        std::cin >> num;
    }

    // Contagem regressiva
    while (num >= 0) {
        std::cout << num << " ";
        Sleep(1000); // Aguarda 1 segundo
        num--;
    }

    // Caminho do arquivo de som .wav
    const char* soundFilePath = "C:\\Users\\Quinta Valentina\\Music\\drinhododry_converted.wav"; // Ajuste o caminho conforme necessário

    // Verifica se o caminho do arquivo é válido
    if (GetFileAttributesA(soundFilePath) == INVALID_FILE_ATTRIBUTES) {
        std::cerr << "Erro: O arquivo de som não foi encontrado no caminho especificado!" << std::endl;
        return -1;
    }

    // Toca o som usando PlaySound
    if (PlaySound(TEXT("C:\\Users\\Quinta Valentina\\Music\\drinhododry_converted.wav"), NULL, SND_FILENAME | SND_ASYNC)) {
        std::cout << "\nSom tocado com sucesso!" << std::endl;
    } else {
        std::cerr << "Erro ao tentar tocar o som! Verifique o caminho e o arquivo." << std::endl;
    }

    // Finaliza a execução do programa
    return 0;
}