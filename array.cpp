#include <iostream>
#include <string>
using namespace std;

/** int main() {
 string cars[4] = {"volvo", "BMW", "Ford", "Mazda"};
 for (int i=0; i<4; i++) {
    cout << cars[i] << "\n";
 }
} **/

/** int main() {
    int fatorial = 1;
    int numero = 0;

    cout << "Diga um Numero para que seja devolvido seu fatorial (n!) ";
    cin >> numero;

    for (int i=numero; i>0; i--) {
        fatorial = fatorial * numero;
    }
    return fatorial;
} **/

int main() {
    int numerosTotal = 5, aux = 0;
    int numeros[numerosTotal] = {9, 2, 0, 6, 4};
    // controlar array
    for (int i=0; i<(numerosTotal-1); i++) {
        for (int j=(i+1); j < (numerosTotal); j++) {
            if (numeros[i] > numeros[j]) {
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }
    // mostrar o meu array
     for (int i=0; i<numerosTotal; i++) {
        if (i > 0) {
            cout << " - ";
        }
        cout << numeros[i];
    }
    cout << "\n";
}
