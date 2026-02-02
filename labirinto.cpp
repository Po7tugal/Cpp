#include <iostream>
using namespace std;

const int ALTURA = 10;
const int LARGURA = 10;
char jogador = 'p';
char movimento;
int x = 0;
int y = 0;
bool chegou = false;
int novoX = x;
int novoY = y;

char mostrarMapa() {

     char mapinha[ALTURA][LARGURA] = {
         {jogador, '|','|','|','|','|',' ',' ',' ',' ' },
         {' ', '|',' ',' ',' ',' ',' ','|','|',' ' },
         {' ', '|',' ','|','|','|','|','|',' ',' ' },
         {' ', '|',' ','|','|',' ',' ',' ','|','|' },
         {' ', '|',' ','|',' ',' ','|',' ','|','|' },
         {' ', '|',' ','|',' ','|','|',' ',' ',' ' },
         {' ', '|',' ','|',' ','|','|','|','|',' ' },
         {' ', '|',' ','|',' ','|','|','|','|',' ' },
         {' ', '|',' ',' ',' ','|',' ',' ','|',' ' },
         {' ', ' ',' ','|',' ',' ',' ','|','|','f' }
     };

     cout << "Atravesse esse labirinto ate o final ( representado por f ), lembrando que voce e o p \n\n";

     // mostrar mapa
   do {

     for (int i = 0; i < ALTURA; i++) {
        for (int j = 0; j < LARGURA; j++) {
             cout << mapinha[i][j];
        }
        cout << "\n";
     }

     // pedir e ler movimento

     cout << "\n\nQual sera o seu movimento:";
     cout << "\nw - cima";
     cout << "\na - esquerda";
     cout << "\ns - baixo";
     cout << "\nd - direita";

     cout << "\n\n";

     cin >> movimento;

     cout << "\n\n";

     // fazer movimento



         if (movimento == 'w') {
             novoY--;
         } else if (movimento == 'a') {
             novoX--;
         } else if (movimento == 's') {
             novoY++;
         } else if (movimento == 'd') {
             novoX++;
         }

     // verifiar colisao

     if (mapinha[novoY][novoX] != '|') {

        if (novoY && novoX != 'f') {

     // apagar rastro

            mapinha[y][x] = ' ';

            y = novoY;
            x = novoX;

    // move

            mapinha[y][x] = jogador;

    // checar se ganhou


        } else if (novoY && novoX == 'f'){
            cout << "Parabens, voce chegou ao fim!!\n\n";
            chegou = true;
        }
     }

      else {

         if (movimento == 'w') {
             novoY++;
         } else if (movimento == 'a') {
             novoX++;
         } else if (movimento == 's') {
             novoY--;
         } else if (movimento == 'd') {
             novoX--;
         }

     }



     } while (chegou == false);
}

int main() {
    mostrarMapa();

    system("pause");
}
