#include <iostream>
using namespace std;

struct Aluno {
    string nome;
    int idade;
    string curso;
    string localidade;
    bool concluido;
};

void mostrarInfo(Aluno alunoX, Aluno alunoY) {
    cout << "--------- Gestao Alunos ---------";
    cout << "\n\n";

    cout << alunoX.nome;
    cout << "\n";
    cout << alunoX.idade;
    cout << "\n";
    cout << alunoX.curso;
    cout << "\n";
    cout << alunoX.localidade;
    cout << "\n";
    if (alunoX.concluido == 1) {
        cout << "Concluido";
    } else {
        cout << "Nao concluido";
    }
    cout << "\n\n";

    cout << alunoY.nome;
    cout << "\n";
    cout << alunoY.idade;
    cout << "\n";
    cout << alunoY.curso;
    cout << "\n";
    cout << alunoY.localidade;
    cout << "\n";
    if (alunoY.concluido == 1) {
        cout << "Concluido";
    } else {
        cout << "Nao concluido";
    }
}

double mediaAlunos(Aluno alunoA, Aluno alunoB) {
    return (alunoA.idade + alunoB.idade)/2.0;
}

double mediaAlunosN(double ant, Aluno alunoJ, double numeroAlunos = 1.0) {
    return ((ant*(numeroAlunos - 1)) + alunoJ.idade)/numeroAlunos;
}

int main() {
    Aluno aluno1;
    Aluno aluno2;

    aluno1.nome = "Luis";
    aluno1.idade = 25;
    aluno1.curso = "Programador Informatico";
    aluno1.localidade = "Famalicao";
    aluno1.concluido = true;

    aluno2.nome = "Fred";
    aluno2.idade = 15;
    aluno2.curso = "Programador Informatico";
    aluno2.localidade = "Famalicodeas";
    aluno2.concluido = false;

    mostrarInfo(aluno1, aluno2);
    cout << "\n\n";

    cout << "--------- Media Idades ---------";
    cout << "\n\n";
    cout << "Media de 2 alunos: " << mediaAlunos(aluno1, aluno2);
    cout << "\n";

    double xNovo = mediaAlunosN(0, aluno1, 1);
    xNovo = mediaAlunosN(xNovo, aluno2, 2);
    xNovo = mediaAlunosN(xNovo, aluno2, 3);

    cout << "\nMedia de 3 alunos: " << xNovo;
    cout << "\n";
}
