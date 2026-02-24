#include<iostream>
using namespace std;

int somar(int soma1, int soma2) {
    int resultado;
    resultado = soma1 + soma2;
    return resultado;
}

int subtracao(int subtracao1, int subtracao2) {
    int resultado;
    resultado = subtracao1 + subtracao1;
    return resultado;
}

int multiplicar(int multiplicar1, int multiplicar2) {
    int resultado;
    resultado = multiplicar1 + multiplicar2;
    return resultado;
}

int dividir(int dividir1, int dividir2) {
    int resultado;
    resultado = dividir1 + dividir2;
    return resultado;
}

int main() {
    int op;
    int num1;
    int num2;

    "-------- OPERADORES --------\n\n";
    cout << "Vamos fazer calculos, escolha o que deseja fazer escrevendo o numero da operacao desejada: \n\n";
    cout << "1 - Soma\n";
    cout << "2- subtracao\n";
    cout << "3 - multiplicar\n";
    cout << "4 - dividir";
    cout << "\n\n";
    cin >> op;

    if (op == 1) {
        cout << "\nQuais numeros voce seja fazer a soma? \n\n";
        cin >> num1;
        cout << "\ne o outro?\n\n";
        cin >> num2;
        cout << "\no resultado e: " << somar(num1, num2);
    } else if (op == 2) {
        cout << "\nQuais numeros voce seja fazer a subtracao? \n\n";
        cin >> num1;
        cout << "\ne o outro?\n\n";
        cin >> num2;
        cout << "\no resultado e: " << subtracao(num1, num2);
    } else if (op == 3) {
        cout << "\nQuais numeros voce seja fazer a multiplicacao? \n\n";
        cin >> num1;
        cout << "\ne o outro?\n\n";
        cin >> num2;
        cout << "\no resultado e: " << multiplicar(num1, num2);
    } else if (op == 4) {
        cout << "\nQuais numeros voce seja fazer a divisao? \n\n";
        cin >> num1;
        cout << "\ne o outro?\n\n";
        cin >> num2;
        cout << "\no resultado e: " << dividir(num1, num2);
    } else {
        cout << "\nEssa operacao nao existe";
    }
}
