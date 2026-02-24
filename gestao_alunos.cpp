#include <iostream>
#include <fstream>
using namespace std;

int main() {

    string linha_aluno;
    const int ALUNOS = 10;
    string nome;
    string idade;
    string numero;
    string num_registros;

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
    ifstream MyReadFile("dados.txt");
    int j = 1;
    int coluna = 1;
    cout << "------- REGISTROS -------\n\n";
    while(getline(MyReadFile, myText)) {
        //cout << myText << "\n";
        cout << "\n------ ALUNO " << j << " ------\n\n";
        for (int i = 0; i < myText.length(); i++) {
            if (myText[i] != ';') {
                // cout << myText[i];
                if(coluna == 1) numero += myText[i];
                if(coluna == 2) nome += myText[i];
                if(coluna == 3) idade += myText[i];
            } else {
                // cout << "\n";
                coluna++;
            }

        }
        cout << numero << "\n";
        cout << nome << "\n";
        cout << idade << "\n";
        cout << "\n";
        j++;
    }

    MyReadFile.close();

    return 0;
}
