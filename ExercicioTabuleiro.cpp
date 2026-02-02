#include <iostream>
using namespace std;

const int linhas = 5, colunas  = 7;
char tabuleiro[linhas][colunas];

char iniciarTab() {

    for (int i = linhas; i > 0; i--) {
        for (int j = colunas; j > 0; j--) {
            tabuleiro[i][j] = '-';
        }
    }

}

char mostrarTab() {

    for (int i = linhas; i > 0; i--) {
        for (int j = colunas; j > 0; j--) {
            cout << " | " << tabuleiro[i][j];
        }
        cout << " | ";
        cout << "\n";
    }

    cout << "-------------------------------\n";

    for (int x = 0; x < colunas; x++) {
        cout << " | " << x;
        if (x == (colunas - 1)) {
            cout << " | ";
        }
    }
}

int main() {
    iniciarTab();
    mostrarTab();
}



