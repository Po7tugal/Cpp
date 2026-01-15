#include<iostream>

using namespace std;

const int LETRINHAS = 6;
char torre1[LETRINHAS] = {'F','I','L','I','P','E'};
char aux;

int main() {
/*
    cout << torre1 << "\n";

    for (int i=LETRINHAS-1; i>0; i--) {
        if (torre1[i] != NULL) {
            cout << torre1[i];
        } else { continue; }
    }
*/

    //ordenar
    for (int j=0; j<(LETRINHAS/2); j++) {
        aux = torre1[j];
        torre1[j] = torre1[(LETRINHAS-1) - j];
        torre1[(LETRINHAS-1) - j] = aux;
        cout << torre1 << "\n";
    }

    cout << torre1;


    return 0;
}
