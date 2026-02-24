#include<iostream>
using namespace std;

int somar(int soma1, int soma2, int soma3, int soma4) {
    int resultado;
    resultado = soma1 + soma2 + soma3 + soma4;
    return resultado;
}

int main() {
    int num1;
    int num2;
    int num3 = 0;
    int num4 = 0;
    string continuar;

    cout << "----- SOMAR -----\n\n";
    cout << "Escreva 2 numeros para serem feito a soma deles: \n\n";
    cin >> num1;
    cin >> num2;
    cout << "\nVoce deseja adicionar mais 1 numero para somar? (sim / nao) \n\n";
    cin >> continuar;
    if (continuar == "sim") {
        cout << "\nDiga o numero: ";
        cin >> num3;
        cout << "\nVoce deseja adicionar mais 1 numero para somar? (sim / nao) \n\n";
        cin >> continuar;
        if (continuar == "sim") {
            cout << "\nDiga o numero: ";
            cin >> num4;
        }
    }


    cout << "\nO resultado e: " << somar(num1, num2, num3, num4);
}
