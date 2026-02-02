#include <iostream>
using namespace std;

const int numRegistros = 10;
const int numDados = 2;

void pedirDados(int numLinha, string dadosX[][numDados]) {

    cout << "\nQual o nome #" << (numLinha + 1) << " : ";
    cin >> dadosX[numLinha][0];
    cout << "\nQual a idade #" << (numLinha + 1) << " : ";
    cin >> dadosX[numLinha][1];
}

void mostrarDados(string dadosMostrar[][numDados]) {
    cout << "\n\n------- Dados -------\n";
    for (int i = 0; i < numRegistros; i++) {
        cout << "\nNome : " << dadosMostrar[i][0] << " |  Idade : " << dadosMostrar[i][1];
    }
}

void calcularMedia(string dadosY[][numDados]) {
    int soma = 0;

    for (int i = 0; i < numRegistros; i++) {
        soma += stoi(dadosY[i][1]);
    }
    int media = soma/numRegistros;

    cout << "\n\n------- MEDIA ----------\n";
    cout << media;
}

int main() {
    string dados[numRegistros][numDados];

    for (int i = 0; i < numRegistros; i++) {
        pedirDados(i, dados);
    }

    mostrarDados(dados);
    calcularMedia(dados);

    return 0;
}
