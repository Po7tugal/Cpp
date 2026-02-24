#include <iostream>
#include <fstream>
using namespace std;

string nome, idade, numero;

struct fAluno{
    string nome;
    int idade;
    int numero;
};

void readfile(string localFicheiro) {

/*
    ofstream MyFile("dados.txt");

    for (int i = 0; i < ALUNOS; i++) {

        cout << "------- REGISTRO " << (i+1) << " -------\n\n";
        cout << "Diz o numero do aluno: ";
        getline(cin, numero);

        cout << "Diz o nome do aluno: ";
        getline(cin, nome);

        cout << "Diz a idade do aluno: ";
        getline(cin, idade);
        cout << "\n";

        num_registros[i] = numero + " ;" + nome + " ;" + idade;

        MyFile << num_registros[i];
        MyFile << "\n";
    }

    MyFile.close();
*/


    string myText;
    ifstream MyReadFile(localFicheiro);
    int j = 1;
    int colunas;
    cout << "------- REGISTROS -------\n\n";
    while(getline(MyReadFile, myText)) {
        //cout << myText << "\n";
        cout << "\n------ ALUNO " << j << " ------\n\n";
        colunas = 1;
        numero = nome = idade = "";
        for (int i = 0; i < myText.length(); i++) {
            if (myText[i] != ';') {
                // cout << myText[i];
                if (colunas == 1) numero += myText[i];
                if (colunas == 2) nome += myText[i];
                if (colunas == 3) idade += myText[i];
            } else {
                // cout << "\n";
                colunas++;
            }
        }
        cout << numero << "\n";
        cout << nome << "\n";
        cout << idade << "\n";
        cout << "\n";
        j++;
    }

    MyReadFile.close();
}

int main() {
    string linha_aluno;
    const int ALUNOS = 10;

    fAluno f[50];

    f[0].idade = 18;
    f[0].nome = "Filipe Legal";
    f[0].numero = 7;

    readfile("dados.txt");

    cout << "\n" << f[0].nome;
    return 0;
}
