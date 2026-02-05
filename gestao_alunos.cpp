#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream MyFile("dados.txt");

    string nome;
    string idade;
    string numero;
    string linha_aluno;
    const int ALUNOS = 10;
    string num_registros[ALUNOS];

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

    string myText;
    ifstream MyReadFile("dados.txt");
    int j = 1;
    cout << "------- REGISTROS -------\n\n";
    while(getline(MyReadFile, myText)) {
        //cout << myText << "\n";
        cout << "\n------ ALUNO " << j << " ------\n\n";
        for (int i = 0; i < myText.length(); i++) {
            if (myText[i] != ';') {
                cout << myText[i];
            } else {
                cout << "\n";
            }
        }
        cout << "\n";
        j++;
    }

    MyReadFile.close();

    return 0;
}
