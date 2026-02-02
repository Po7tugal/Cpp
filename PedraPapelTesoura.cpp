#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int escolhaJogada;
string jogada;
int randomNPC;
string jogadaNPC;
bool jogoAcabou = false;
bool podeJogar = true;


int menu() {
    // menu

    cout << "Vamos jogar Pedra papel e tesoura!! Escreva 0 como jogada quando quiser parar\n\n";
}

int jogadaJog() {
    // jogadas

        // escolher jogada

        cout << "Escolha sua jogada: \n1 - Pedra \n2 - Papel \n3 - Tesoura\n\n";

        cin >> escolhaJogada;

        if (escolhaJogada >= 0 && escolhaJogada <= 3) {
            if (escolhaJogada == 1) {
                 jogada = "Pedra";
            } else if (escolhaJogada == 2) {
                 jogada = "Papel";
            } else if (escolhaJogada == 3) {
                 jogada = "Tesoura";
            } else if (escolhaJogada == 0) {
                 jogada = "Jogo Encerrado";
            }
        } else {
            podeJogar = false;
            cout << "\n\nJogada Indisponivel\n\n";
        }

        // atribuir jogada ao valor



}

int jogada2() {
        // sorteio jogada npc

        int randomNPC = rand() % 3 + 1;

        if (randomNPC == 1) {
             jogadaNPC = "Pedra";
        } else if (randomNPC == 2) {
             jogadaNPC = "Papel";
        } else if (randomNPC == 3) {
             jogadaNPC = "Tesoura";
        }

    return 0;
}

int verificacoes() {
        // verificar se empate

        if (jogada == "Pedra" && jogadaNPC == "Pedra") {
           cout << "\n\nFoi um empate, voce jogou " << jogada << " e o adversario " << jogadaNPC << "\n\n";
           jogoAcabou = true;
        } else if (jogada == "Papel" && jogadaNPC == "Papel") {
           cout << "\n\nFoi um empate, voce jogou " << jogada << " e o adversario " << jogadaNPC << "\n\n";
           jogoAcabou = true;
        } else if (jogada == "Tesoura" && jogadaNPC == "Tesoura") {
           cout << "\n\nFoi um empate, voce jogou " << jogada << " e o adversario " << jogadaNPC << "\n\n";
           jogoAcabou = true;
        }

        // verificar vitoria

        if (jogada == "Pedra" && jogadaNPC == "Tesoura") {
           cout << "\n\nParabens voce venceu, voce jogou " << jogada << " e o adversario " << jogadaNPC << "\n\n";
           jogoAcabou = true;
        } else if (jogada == "Tesoura" && jogadaNPC == "Papel") {
           cout << "\n\nParabens voce venceu, voce jogou " << jogada << " e o adversario " << jogadaNPC << "\n\n";
           jogoAcabou = true;
        } else if (jogada == "Papel" && jogadaNPC == "Pedra") {
           cout << "\n\nParabens voce venceu, voce jogou " << jogada << " e o adversario " << jogadaNPC << "\n\n";
           jogoAcabou = true;
        }

        // verificar vitoria do npc

        if (jogada == "Pedra" && jogadaNPC == "Papel") {
           cout << "\n\voce perdeu, mais sorte da proxima, voce jogou " << jogada << " e o adversario " << jogadaNPC << "\n\n";
           jogoAcabou = true;
        } else if (jogada == "Papel" && jogadaNPC == "Tesoura") {
           cout << "\n\voce perdeu, mais sorte da proxima, voce jogou " << jogada << " e o adversario " << jogadaNPC << "\n\n";
           jogoAcabou = true;
        } else if (jogada == "Tesoura" && jogadaNPC == "Pedra") {
           cout << "\n\voce perdeu, mais sorte da proxima, voce jogou " << jogada << " e o adversario " << jogadaNPC << "\n\n";
           jogoAcabou = true;
        }

        // verificar se acabou

        if (jogada == "Jogo Encerrado") {
           cout << "\n\nJogo Encerrado\n\n";
           jogoAcabou = true;
        }
}



int main() {
    srand(time(0));
    menu();

    do {
        do {
            jogadaJog();
            jogada2();
            verificacoes();
        } while (jogoAcabou == false);
    } while (escolhaJogada != 0);

    system("pause");
    return 0;
}
