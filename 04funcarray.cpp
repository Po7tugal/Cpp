#include<iostream>
using namespace std;

string juncao(char letrinhas[], int largura) {
    string frase = letrinhas;
    return frase;
}

int main() {
    const int LETRASMAX = 1000;
    char letras[LETRASMAX];
    char letrinha;
    int i;

    cout << "------ JUNTAR LETRAS ------\n\n";
    cout << "soletre uma palavra para serem unidas: ( digite 0 quando acabar a palavra ) \n";
    for (i = 0; i < LETRASMAX; i++) {
        cin >> letrinha;
        if (letrinha != '0') {
            letras[i] = letrinha;
        } else {
            break;
        }
    }
    cout << "\n" << juncao(letras, i);
}
