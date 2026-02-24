#include<iostream>
using namespace std;

int exponencial(int num, int expo) {
    if (expo > 0) {
        return num * exponencial(num, expo - 1);
    } else {
        return 1;
    }
}

int fibonacci(int num) {
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else if (num >= 2) {
        return fibonacci(num - 1) + fibonacci(num - 2);
    } else if (num < 0) {
        // F(-n) = (-1)^(n+1) * F(n)
        return (exponencial(-1, (num*(-1)) + 1 ) * fibonacci(num * (-1)));
    }
    return 0;
}

int main() {
    int numero;

    cout << "-------- SEQUENCIA DE FIBONACCI --------";
    cout << "\n\nDiga o Numero desejado para devolver o resultado equivalente da sequencia: ";
    cin >> numero;
    cout << "\n";

    cout << "F(" << numero << ") = (-1) ^ (" << numero << " + 1) * F(" << numero << ") = " << fibonacci(numero) << "\n";

    return 0;
}

