#include <iostream>
#include <stdio.h>

using namespace std;

const int LETRINHAS = 8;
char torre2 [LETRINHAS];
char torre1[LETRINHAS] = {'L','U','I','S'};

void mostrarPalavras() {
    for (int i=LETRINHAS; i>0; i--) {
        if (torre1[i-1] != NULL) {
            cout << torre1[i-1] << "\n";
    } else {
        cout << "-" << "\n";
        }
    }

    cout << "\n\n";

    // AO CONTRARIO

    for (int i=0; i<LETRINHAS; i++) {
        if (torre1[i] != NULL) {
            torre2[i] = torre1[i];
            cout << torre2[i] << "\n";
    } else {
        cout << "-" << "\n";
        }
    }
}

int main() {
    mostrarPalavras();
}
