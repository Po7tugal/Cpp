#include <iostream>
using namespace std;

const int linhas=5 , colunas=7;
char tabuleiro[linhas][colunas];
bool pecaColocada = false;
int jogada;
int quemJoga = 0;
char fichaJogo[2] = { 'O' , 'X' };

void inicializarTabuleiro() {
    for(int i=0 ; i<linhas ; i++) {
        for(int j=0 ; j<colunas ; j++) {
            tabuleiro[i][j] = '-';
        }
    }
}

void mostrarTabuleiro() {
    for(int i=0 ; i<linhas ; i++) {
        cout << " | ";
        for(int j=0 ; j<colunas ; j++) {
            cout << tabuleiro[i][j] << " | ";
        }
        cout << "\n";
    }

    cout << "---";
    for(int y=0 ; y < colunas ; y++) {
        cout << "-" << "---";
    }

    cout << "\n";
    cout << " | ";

    for(int i=0 ; i < colunas ; i++) {
        cout << i << " | ";
    }
    cout << "\n";
}

void tabuleiroCheio() {
    for(int i=0 ; i<linhas ; i++) {
        for(int j=0 ; j<colunas ; j++) {

        }

    }
}

int main() {
    inicializarTabuleiro();
    //mostrarTabuleiro();

    while (true) {
        mostrarTabuleiro();
        cout << "\nQual posicao queres jogar a peca(0-6) " << fichaJogo[quemJoga] << ": ";
        cin >> jogada;

        pecaColocada = false;
        if(jogada>=0 && jogada < colunas) {
            int aux = (linhas-1);
            while(aux >=0) {
                if (tabuleiro[aux][jogada] == '-') {
                    tabuleiro[aux][jogada] = fichaJogo[quemJoga];
                    pecaColocada = true;
                    break;
                }
                aux--;
            }
            if(pecaColocada) {
                    if (quemJoga == 0) {
                        quemJoga = 1;
                    } else {
                        quemJoga = 0;
                    }
            }
        }
    }
    return 0;
}
