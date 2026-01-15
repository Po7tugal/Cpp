#include <iostream>
#include <stdio.h>
using namespace std;

char letra;
char palavra[5] = {'F', 'E', 'L', 'I', 'Z'};
char palavra_icognita[5] = {'X', 'X', 'X', 'X', 'X'};

//forca
int forca() {
    cout << "Vamos jogar o jogo da forca, adivinhe a palavra \nDica: seja... (para desejar)";
    cout << palavra_icognita;

    // tentar adivinhar letra
    cout << "\n\nChute uma letra: ";
    cin >> letra;

    //se acertar letra
    for(int i = 0; i<5; i++) {
        if (letra = palavra[i]) {
            palavra_icognita[i] = palavra[i];
        cout << palavra_icognita;
        cout << "\n\nChute uma letra: ";
        cin >> letra;


        }
    }

    return 0;
}

int main() {
    forca();
    return 0;
}
