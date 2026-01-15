#include <iostream>
using namespace std;

int main() {
    const int NUMS = 5;
    int numeros[NUMS] = {9, 2, 0, 6, 4};
    int lixo = 0;
    int aux = 0;


    for (int i=0; i<=NUMS-1; i++) {
        cout << " | ";
        cout << numeros[i];

    }
    cout << " | ";
    cout << "\n";

    // passo 2

    for (int i=NUMS-1; i>=0; i--) {
        cout << " | ";
        cout << numeros[i];
    }
    cout << " | ";
    cout << "\n";

    // passo 3

    for (int i=(NUMS-1); i>=(NUMS/2); i--) {
        cout << " | ";
        cout << numeros[i];
        if (i != ((NUMS -1) - i)) {
            cout << " | ";
            cout << numeros[lixo];
        }
        lixo++;
    }
    cout << " | ";
    cout << "\n";

    // passo 4

    for (int i=(NUMS-1); i>=(NUMS/2); i--) {
        cout << " | ";
        cout << numeros[aux];
        if (i != ((NUMS -1) - i)) {
            cout << " | ";
            cout << numeros[i];
        }
        aux++;
    }
    cout << " | ";
    cout << "\n";

    // passo 5

    for (int i=(NUMS-1)/2; i>=0; i--) {
        cout << " | ";
        cout << numeros[i];
        if (i != ((NUMS -1) - i)) {
            cout << " | ";
            cout << numeros[(NUMS - 1) - i];
        }
        lixo++;
    }
    cout << " | ";
    cout << "\n";


}
